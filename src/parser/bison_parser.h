/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y"

// %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 79 "bison_parser.h"

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_BINARY = 260,
    SQL_FLOATVAL = 261,
    SQL_INTVAL = 262,
    SQL_CURRENT_TIMESTAMP = 263,
    SQL_AUTOINCREMENT = 264,
    SQL_CURRENT_DATE = 265,
    SQL_CURRENT_TIME = 266,
    SQL_TRANSACTION = 267,
    SQL_CONSTRAINT = 268,
    SQL_DEFERRABLE = 269,
    SQL_REFERENCES = 270,
    SQL_EXCLUSIVE = 271,
    SQL_IMMEDIATE = 272,
    SQL_INITIALLY = 273,
    SQL_INTERSECT = 274,
    SQL_RECURSIVE = 275,
    SQL_SAVEPOINT = 276,
    SQL_TEMPORARY = 277,
    SQL_CONFLICT = 278,
    SQL_DATABASE = 279,
    SQL_DEFERRED = 280,
    SQL_DISTINCT = 281,
    SQL_RESTRICT = 282,
    SQL_ROLLBACK = 283,
    SQL_ANALYZE = 284,
    SQL_BETWEEN = 285,
    SQL_BOOLEAN = 286,
    SQL_CASCADE = 287,
    SQL_COLLATE = 288,
    SQL_DEFAULT = 289,
    SQL_EXPLAIN = 290,
    SQL_FOREIGN = 291,
    SQL_INDEXED = 292,
    SQL_INSTEAD = 293,
    SQL_INTEGER = 294,
    SQL_NATURAL = 295,
    SQL_NOTNULL = 296,
    SQL_PRIMARY = 297,
    SQL_REINDEX = 298,
    SQL_RELEASE = 299,
    SQL_REPLACE = 300,
    SQL_TRIGGER = 301,
    SQL_VIRTUAL = 302,
    SQL_WITHOUT = 303,
    SQL_ACTION = 304,
    SQL_ATTACH = 305,
    SQL_BEFORE = 306,
    SQL_COLUMN = 307,
    SQL_COMMIT = 308,
    SQL_CREATE = 309,
    SQL_DELETE = 310,
    SQL_DETACH = 311,
    SQL_DOUBLE = 312,
    SQL_ESCAPE = 313,
    SQL_EXCEPT = 314,
    SQL_EXISTS = 315,
    SQL_HAVING = 316,
    SQL_IGNORE = 317,
    SQL_INSERT = 318,
    SQL_ISNULL = 319,
    SQL_OFFSET = 320,
    SQL_PRAGMA = 321,
    SQL_REGEXP = 322,
    SQL_RENAME = 323,
    SQL_SELECT = 324,
    SQL_UNIQUE = 325,
    SQL_UPDATE = 326,
    SQL_VACUUM = 327,
    SQL_VALUES = 328,
    SQL_ABORT = 329,
    SQL_AFTER = 330,
    SQL_ALTER = 331,
    SQL_BEGIN = 332,
    SQL_CHECK = 333,
    SQL_CROSS = 334,
    SQL_FLOAT = 335,
    SQL_GROUP = 336,
    SQL_INDEX = 337,
    SQL_INNER = 338,
    SQL_LIMIT = 339,
    SQL_MATCH = 340,
    SQL_ORDER = 341,
    SQL_OUTER = 342,
    SQL_QUERY = 343,
    SQL_RAISE = 344,
    SQL_RIGHT = 345,
    SQL_TABLE = 346,
    SQL_UNION = 347,
    SQL_USING = 348,
    SQL_WHERE = 349,
    SQL_BLOB = 350,
    SQL_CASE = 351,
    SQL_CAST = 352,
    SQL_DESC = 353,
    SQL_DROP = 354,
    SQL_EACH = 355,
    SQL_ELSE = 356,
    SQL_FAIL = 357,
    SQL_FROM = 358,
    SQL_FULL = 359,
    SQL_GLOB = 360,
    SQL_INTO = 361,
    SQL_JOIN = 362,
    SQL_LEFT = 363,
    SQL_LIKE = 364,
    SQL_LONG = 365,
    SQL_NULL = 366,
    SQL_PLAN = 367,
    SQL_REAL = 368,
    SQL_TEMP = 369,
    SQL_TEXT = 370,
    SQL_THEN = 371,
    SQL_VIEW = 372,
    SQL_WHEN = 373,
    SQL_WITH = 374,
    SQL_ADD = 375,
    SQL_ALL = 376,
    SQL_AND = 377,
    SQL_ASC = 378,
    SQL_END = 379,
    SQL_FOR = 380,
    SQL_INT = 381,
    SQL_KEY = 382,
    SQL_NOT = 383,
    SQL_ROW = 384,
    SQL_SET = 385,
    SQL_AS = 386,
    SQL_BY = 387,
    SQL_IF = 388,
    SQL_IN = 389,
    SQL_IS = 390,
    SQL_NO = 391,
    SQL_OF = 392,
    SQL_ON = 393,
    SQL_OR = 394,
    SQL_TO = 395,
    SQL_EQUALS = 396,
    SQL_NOTEQUALS = 397,
    SQL_ILIKE = 398,
    SQL_LESS = 399,
    SQL_GREATER = 400,
    SQL_LESSEQ = 401,
    SQL_GREATEREQ = 402,
    SQL_CONCAT = 403,
    SQL_UMINUS = 404
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 94 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	
	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnConstraint* cconstraint_t;
  	hsql::ColumnType column_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::ColumnConstraint*>* cconstraint_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 278 "bison_parser.h"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
