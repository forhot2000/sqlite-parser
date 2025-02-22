/*
 * sql_tests.cpp
 */

#include "thirdparty/microtest/microtest.h"

#include "SQLParser.h"
#include "util/sqlhelper.h"

#include "sql_asserts.h"

using namespace hsql;


TEST(DeleteStatementTest) {
  SQLParserResult result;
  SQLParser::parse("DELETE FROM students WHERE grade > 2.0;", &result);

  ASSERT(result.isValid());
  ASSERT_EQ(result.size(), 1);
  ASSERT(result.getStatement(0)->type() == kStmtDelete);

  const DeleteStatement* stmt = (const DeleteStatement*) result.getStatement(0);
  ASSERT_STREQ(stmt->tableName, "students");
  ASSERT_NOTNULL(stmt->expr);
  ASSERT(stmt->expr->isType(kExprOperator));
  ASSERT_STREQ(stmt->expr->expr->name, "grade");
  ASSERT_EQ(stmt->expr->expr2->fval, 2.0);
}

TEST(CreateStatementTest) {
  SQLParserResult result;
  SQLParser::parse("CREATE TABLE students (name TEXT, student_number INT, city INTEGER, grade DOUBLE)", &result);

  ASSERT(result.isValid());
  ASSERT_EQ(result.size(), 1);
  ASSERT_EQ(result.getStatement(0)->type(), kStmtCreate);

  const CreateStatement* stmt = (const CreateStatement*) result.getStatement(0);
  ASSERT_EQ(stmt->type, kCreateTable);
  ASSERT_STREQ(stmt->tableName, "students");
  ASSERT_NOTNULL(stmt->columns);
  ASSERT_EQ(stmt->columns->size(), 4);
  ASSERT_STREQ(stmt->columns->at(0)->name, "name");
  ASSERT_STREQ(stmt->columns->at(1)->name, "student_number");
  ASSERT_STREQ(stmt->columns->at(2)->name, "city");
  ASSERT_STREQ(stmt->columns->at(3)->name, "grade");
  ASSERT_EQ(stmt->columns->at(0)->type.data_type, DataType::TEXT);
  ASSERT_EQ(stmt->columns->at(1)->type.data_type, DataType::INTEGER);
  ASSERT_EQ(stmt->columns->at(2)->type.data_type, DataType::INTEGER);
  ASSERT_EQ(stmt->columns->at(3)->type.data_type, DataType::REAL);
}


TEST(UpdateStatementTest) {
  SQLParserResult result;
  SQLParser::parse("UPDATE students SET grade = 5.0, name = 'test' WHERE name = 'Max Mustermann';", &result);

  ASSERT(result.isValid());
  ASSERT_EQ(result.size(), 1);
  ASSERT_EQ(result.getStatement(0)->type(), kStmtUpdate);

  const UpdateStatement* stmt = (const UpdateStatement*) result.getStatement(0);
  ASSERT_NOTNULL(stmt->table);
  ASSERT_STREQ(stmt->table->name, "students");

  ASSERT_NOTNULL(stmt->updates);
  ASSERT_EQ(stmt->updates->size(), 2);
  ASSERT_STREQ(stmt->updates->at(0)->column, "grade");
  ASSERT_STREQ(stmt->updates->at(1)->column, "name");
  ASSERT(stmt->updates->at(0)->value->isType(kExprLiteralFloat));
  ASSERT(stmt->updates->at(1)->value->isType(kExprLiteralString));
  ASSERT_EQ(stmt->updates->at(0)->value->fval, 5.0);
  ASSERT_STREQ(stmt->updates->at(1)->value->name, "test");

  ASSERT_NOTNULL(stmt->where);
  ASSERT(stmt->where->isType(kExprOperator));
  ASSERT_EQ(stmt->where->opType, kOpEquals);
  ASSERT_STREQ(stmt->where->expr->name, "name");
  ASSERT_STREQ(stmt->where->expr2->name, "Max Mustermann");
}


TEST(InsertStatementTest) {
  TEST_PARSE_SINGLE_SQL(
    "INSERT INTO students VALUES ('Max Mustermann', 12345, 'Musterhausen', 2.0, 983176518411240370)",
    kStmtInsert,
    InsertStatement,
    result,
    stmt);

  ASSERT_EQ(stmt->values->size(), 5);
  ASSERT_EQ(stmt->values->at(0)->type, kExprLiteralString);
  // ASSERT_STREQ(stmt->values->at(0)->name, "Max Mustermann");
  ASSERT_EQ(stmt->values->at(1)->type, kExprLiteralInt);
  ASSERT_EQ(stmt->values->at(1)->ival, 12345);
  ASSERT_EQ(stmt->values->at(2)->type, kExprLiteralString);
  // ASSERT_STREQ(stmt->values->at(2)->ival, "Musterhausen");
  ASSERT_EQ(stmt->values->at(3)->type, kExprLiteralFloat);
  ASSERT_EQ(stmt->values->at(3)->fval, 2.0f);
  ASSERT_EQ(stmt->values->at(4)->type, kExprLiteralInt);
  ASSERT_EQ(stmt->values->at(4)->ival, 983176518411240370L);
  // TODO
}


TEST(DropTableStatementTest) {
  TEST_PARSE_SINGLE_SQL(
    "DROP TABLE students",
    kStmtDrop,
    DropStatement,
    result,
    stmt);

  ASSERT_FALSE(stmt->ifExists);
  ASSERT_EQ(stmt->type, kDropTable);
  ASSERT_NOTNULL(stmt->name);
  ASSERT_STREQ(stmt->name, "students");
}

TEST(DropTableIfExistsStatementTest) {
  TEST_PARSE_SINGLE_SQL(
    "DROP TABLE IF EXISTS students",
    kStmtDrop,
    DropStatement,
    result,
    stmt);

  ASSERT_TRUE(stmt->ifExists);
  ASSERT_EQ(stmt->type, kDropTable);
  ASSERT_NOTNULL(stmt->name);
  ASSERT_STREQ(stmt->name, "students");
}

TEST(ReleaseStatementTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT * FROM students;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_EQ(1, result.size());
  ASSERT_NULL(stmt->whereClause);

  std::vector<SQLStatement*> statements = result.releaseStatements();

  ASSERT_EQ(0, result.size());

  for (SQLStatement* stmt : statements) {
    delete stmt;
  }
}


SQLParserResult parse_and_move(std::string query) {
  hsql::SQLParserResult result;
  hsql::SQLParser::parse(query, &result);
  // Moves on return.
  return result;
}

SQLParserResult move_in_and_back(SQLParserResult res) {
  // Moves on return.
  return res;
}

TEST(MoveSQLResultTest) {
  SQLParserResult res = parse_and_move("SELECT * FROM test;");
  ASSERT(res.isValid());
  ASSERT_EQ(1, res.size());

  // Moved around.
  SQLParserResult new_res = move_in_and_back(std::move(res));

  // Original object should be invalid.
  ASSERT_FALSE(res.isValid());
  ASSERT_EQ(0, res.size());

  ASSERT(new_res.isValid());
  ASSERT_EQ(1, new_res.size());
}

TEST(StringLengthTest) {
  TEST_PARSE_SQL_QUERY(
    "SELECT * FROM bar; INSERT INTO foo VALUES (4);\t\n SELECT * FROM foo;",
    result,
    3);

  ASSERT_EQ(result.getStatement(0)->stringLength, 18);
  ASSERT_EQ(result.getStatement(1)->stringLength, 27);
  ASSERT_EQ(result.getStatement(2)->stringLength, 22);
}

TEST_MAIN();
