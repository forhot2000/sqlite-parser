#ifndef __SQLPARSER__CREATE_STATEMENT_H__
#define __SQLPARSER__CREATE_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
  struct SelectStatement;

  // Represents definition of a column constraint
  struct ColumnConstraint {
    enum ConstraintType {
      PRIMARYKEY,
      NOTNULL,
      UNIQUE,
      DEFAULT
    };

    ColumnConstraint(ConstraintType type);
    ColumnConstraint(ConstraintType type, Expr *expr);
    virtual ~ColumnConstraint();

    ConstraintType type;
    Expr *expr;
  };

  // Represents definition of a table column
  struct ColumnDefinition {
    enum DataType {
      UNKNOWN,
      TEXT,
      INTEGER,
      REAL,
      BLOB
    };

    ColumnDefinition(char* name, DataType type, std::vector<hsql::ColumnConstraint*>* constraints);
    virtual ~ColumnDefinition();

    char* name;
    DataType type;

    bool isPrimaryKey;
    bool isUnique;
    bool nullable;
    Expr* defaultVal;
  };

  enum CreateType {
    kCreateTable,
    kCreateView,
    kCreateIndex,
    kCreateTrigger,
  };

  // Represents SQL Create statements.
  // Example: "CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)"
  struct CreateStatement : SQLStatement {
    CreateStatement(CreateType type);
    virtual ~CreateStatement();

    CreateType type;
    bool isVirtual;   // default: false
    bool isTemporary; // default: false
    bool ifNotExists; // default: false
    char* schema;     // default: nullptr
    char* tableName;  // default: nullptr
    std::vector<ColumnDefinition*>* columns; // default: nullptr
    std::vector<char*>* viewColumns;
    SelectStatement* select;
  };

} // namespace hsql

#endif
