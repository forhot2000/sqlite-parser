#include "statements.h"

namespace hsql {

  // ColumnDefinition
  ColumnDefinition::ColumnDefinition(char* name, ColumnType type, std::vector<hsql::ColumnConstraint*>* constraints) :
    name(name),
    type(type),
    isPrimaryKey(false),
    isUnique(false),
    nullable(true),
    defaultVal(nullptr) {
      for (ColumnConstraint* c : *constraints) {
        switch (c->type) {
          case ColumnConstraint::PRIMARYKEY:
            isPrimaryKey = true;
            isUnique = true;
            nullable = false;
            break;
          case ColumnConstraint::NOTNULL:
            nullable = false;
            break;
          case ColumnConstraint::UNIQUE:
            isUnique = true;
            break;
          case ColumnConstraint::DEFAULT:
            defaultVal = c->expr;
            break;
        }
        //delete c;
      }
  };

  ColumnDefinition::~ColumnDefinition() {
    free(name);
    delete defaultVal;
  }

  ColumnType::ColumnType(DataType data_type, int64_t length, int64_t precision, int64_t scale)
      : data_type(data_type), length(length), precision(precision), scale(scale){};

  bool operator==(const ColumnType& lhs, const ColumnType& rhs) {
    if (lhs.data_type != rhs.data_type) return false;
    return lhs.length == rhs.length && lhs.precision == rhs.precision && lhs.scale == rhs.scale;
  }

  bool operator!=(const ColumnType& lhs, const ColumnType& rhs) { return !(lhs == rhs); }

  std::ostream& operator<<(std::ostream& stream, const ColumnType& column_type) {
    switch (column_type.data_type) {
      case DataType::UNKNOWN:
        stream << "UNKNOWN";
        break;
      case DataType::INTEGER:
        stream << "INT";
        break;
      case DataType::REAL:
        stream << "REAL";
        break;
      case DataType::TEXT:
        stream << "TEXT";
        break;
      case DataType::BLOB:
        stream << "BOOLEAN";
        break;
    }
    return stream;
  }

  // ColumnConstraint
  ColumnConstraint::ColumnConstraint(ConstraintType type) :
    type(type) {};

  ColumnConstraint::ColumnConstraint(ConstraintType type, Expr *expr) :
    type(type),
    expr(expr) {};

  ColumnConstraint::~ColumnConstraint() {
    delete expr;
  }

  // CreateStatemnet
  CreateStatement::CreateStatement(CreateType type) :
    SQLStatement(kStmtCreate),
    type(type),
    ifNotExists(false),
    schema(nullptr),
    tableName(nullptr),
    columns(nullptr),
    viewColumns(nullptr),
    select(nullptr) {};

  CreateStatement::~CreateStatement() {
    free(schema);
    free(tableName);
    delete select;

    if (columns != nullptr) {
      for (ColumnDefinition* def : *columns) {
        delete def;
      }
      delete columns;
    }

    if (viewColumns != nullptr) {
      for (char* column : *viewColumns) {
        free(column);
      }
      delete viewColumns;
    }
  }

  // DeleteStatement
  DeleteStatement::DeleteStatement() :
    SQLStatement(kStmtDelete),
    schema(nullptr),
    tableName(nullptr),
    expr(nullptr) {};

  DeleteStatement::~DeleteStatement() {
    free(schema);
    free(tableName);
    delete expr;
  }

  // DropStatament
  DropStatement::DropStatement(DropType type) :
    SQLStatement(kStmtDrop),
    type(type),
    schema(nullptr),
    name(nullptr) {}

  DropStatement::~DropStatement() {
    free(schema);
    free(name);
  }

  // InsertStatement
  InsertStatement::InsertStatement(InsertType type) :
    SQLStatement(kStmtInsert),
    type(type),
    schema(nullptr),
    tableName(nullptr),
    columns(nullptr),
    values(nullptr),
    select(nullptr) {}

  InsertStatement::~InsertStatement() {
    free(schema);
    free(tableName);
    delete select;

    if (columns != nullptr) {
      for (char* column : *columns) {
        free(column);
      }
      delete columns;
    }

    if (values != nullptr) {
      for (Expr* expr : *values) {
        delete expr;
      }
      delete values;
    }
  }

  // SelectStatement.h

  // OrderDescription
  OrderDescription::OrderDescription(OrderType type, Expr* expr) :
    type(type),
    expr(expr) {}

  OrderDescription::~OrderDescription() {
    delete expr;
  }

  // LimitDescription
  LimitDescription::LimitDescription(int64_t limit, int64_t offset) :
    limit(limit),
    offset(offset) {}

  // GroypByDescription
  GroupByDescription::GroupByDescription() :
    columns(nullptr),
    having(nullptr) {}

  GroupByDescription::~GroupByDescription() {
    delete having;

    if (columns != nullptr) {
      for (Expr* expr : *columns) {
        delete expr;
      }
      delete columns;
    }
  }

  // SelectStatement
  SelectStatement::SelectStatement() :
    SQLStatement(kStmtSelect),
    fromTable(nullptr),
    selectDistinct(false),
    selectList(nullptr),
    whereClause(nullptr),
    groupBy(nullptr),
    unionSelect(nullptr),
    order(nullptr),
    limit(nullptr) {};

  SelectStatement::~SelectStatement() {
    delete fromTable;
    delete whereClause;
    delete groupBy;
    delete unionSelect;
    delete limit;

    // Delete each element in the select list.
    if (selectList != nullptr) {
      for (Expr* expr : *selectList) {
        delete expr;
      }
      delete selectList;
    }

    if (order != nullptr) {
      for (OrderDescription* desc : *order) {
        delete desc;
      }
      delete order;
    }
  }

  // UpdateStatement
  UpdateStatement::UpdateStatement() :
    SQLStatement(kStmtUpdate),
    table(nullptr),
    updates(nullptr),
    where(nullptr) {}

  UpdateStatement::~UpdateStatement() {
    delete table;
    delete where;

    if (updates != nullptr) {
      for (UpdateClause* update : *updates) {
        free(update->column);
        delete update->value;
        delete update;
      }
      delete updates;
    }
  }

  // TableRef
  TableRef::TableRef(TableRefType type) :
    type(type),
    schema(nullptr),
    name(nullptr),
    alias(nullptr),
    select(nullptr),
    list(nullptr),
    join(nullptr) {}

  TableRef::~TableRef() {
    free(schema);
    free(name);
    free(alias);

    delete select;
    delete join;

    if (list != nullptr) {
      for (TableRef* table : *list) {
        delete table;
      }
      delete list;
    }
  }

  bool TableRef::hasSchema() const {
    return schema != nullptr;
  }

  const char* TableRef::getName() const {
    if (alias != nullptr) return alias;
    else return name;
  }

  // JoinDefinition
  JoinDefinition::JoinDefinition() :
    left(nullptr),
    right(nullptr),
    condition(nullptr),
    type(kJoinInner) {}

  JoinDefinition::~JoinDefinition() {
    delete left;
    delete right;
    delete condition;
  }

} // namespace hsql
