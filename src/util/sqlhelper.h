#ifndef __SQLPARSER__SQLHELPER_H__
#define __SQLPARSER__SQLHELPER_H__

#include "../sql/statements.h"

namespace hsql {

  // Prints a summary of the given SQLStatement.
  void printStatementInfo(const SQLStatement* stmt);

  // Prints a summary of the given SelectStatement with the given indentation.
  void printSelectStatementInfo(const SelectStatement* stmt, uintmax_t num_indent);

  // Prints a summary of the given InsertStatement with the given indentation.
  void printInsertStatementInfo(const InsertStatement* stmt, uintmax_t num_indent);

  // Prints a summary of the given CreateStatement with the given indentation.
  void printCreateStatementInfo(const CreateStatement* stmt, uintmax_t num_indent);

  // Prints a summary of the given Expression with the given indentation.
  void printExpression(Expr* expr, uintmax_t num_indent);

} // namespace hsql

#endif
