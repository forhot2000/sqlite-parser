
#include "thirdparty/microtest/microtest.h"
#include "sql_asserts.h"
#include "SQLParser.h"

using hsql::kExprParameter;
using hsql::kExprLiteralInt;

using hsql::kStmtDrop;
using hsql::kStmtInsert;
using hsql::kStmtSelect;

using hsql::kDropPreparedStatement;

using hsql::DropStatement;
using hsql::InsertStatement;
using hsql::SelectStatement;


TEST(StatementWithParameters) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT * FROM test WHERE a = ? AND b = ?",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  const hsql::Expr* eq1 = stmt->whereClause->expr;
  const hsql::Expr* eq2 = stmt->whereClause->expr2;

  ASSERT_EQ(result.parameters().size(), 2);

  ASSERT_EQ(eq1->opType, hsql::kOpEquals)
  ASSERT(eq1->expr->isType(hsql::kExprColumnRef))
  ASSERT(eq1->expr2->isType(kExprParameter))
  ASSERT_EQ(eq1->expr2->ival, 0)
  ASSERT_EQ(result.parameters()[0], eq1->expr2);


  ASSERT_EQ(eq2->opType, hsql::kOpEquals)
  ASSERT(eq2->expr->isType(hsql::kExprColumnRef))
  ASSERT(eq2->expr2->isType(kExprParameter))
  ASSERT_EQ(eq2->expr2->ival, 1)
  ASSERT_EQ(result.parameters()[1], eq2->expr2);
}
