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
    SQL_HEX = 260,
    SQL_FLOATVAL = 261,
    SQL_INTVAL = 262,
    SQL_AUTOINCREMENT = 263,
    SQL_CURRENT_DATE = 264,
    SQL_CURRENT_TIME = 265,
    SQL_TRANSACTION = 266,
    SQL_CONSTRAINT = 267,
    SQL_DEFERRABLE = 268,
    SQL_REFERENCES = 269,
    SQL_EXCLUSIVE = 270,
    SQL_IMMEDIATE = 271,
    SQL_INITIALLY = 272,
    SQL_INTERSECT = 273,
    SQL_RECURSIVE = 274,
    SQL_SAVEPOINT = 275,
    SQL_TEMPORARY = 276,
    SQL_CONFLICT = 277,
    SQL_DATABASE = 278,
    SQL_DEFERRED = 279,
    SQL_DISTINCT = 280,
    SQL_RESTRICT = 281,
    SQL_ROLLBACK = 282,
    SQL_ANALYZE = 283,
    SQL_BETWEEN = 284,
    SQL_BOOLEAN = 285,
    SQL_CASCADE = 286,
    SQL_COLLATE = 287,
    SQL_DEFAULT = 288,
    SQL_EXPLAIN = 289,
    SQL_FOREIGN = 290,
    SQL_INDEXED = 291,
    SQL_INSTEAD = 292,
    SQL_INTEGER = 293,
    SQL_NATURAL = 294,
    SQL_NOTNULL = 295,
    SQL_PRIMARY = 296,
    SQL_REINDEX = 297,
    SQL_RELEASE = 298,
    SQL_REPLACE = 299,
    SQL_TRIGGER = 300,
    SQL_VIRTUAL = 301,
    SQL_WITHOUT = 302,
    SQL_ACTION = 303,
    SQL_ATTACH = 304,
    SQL_BEFORE = 305,
    SQL_COLUMN = 306,
    SQL_COMMIT = 307,
    SQL_CREATE = 308,
    SQL_DELETE = 309,
    SQL_DETACH = 310,
    SQL_DOUBLE = 311,
    SQL_ESCAPE = 312,
    SQL_EXCEPT = 313,
    SQL_EXISTS = 314,
    SQL_HAVING = 315,
    SQL_IGNORE = 316,
    SQL_INSERT = 317,
    SQL_ISNULL = 318,
    SQL_OFFSET = 319,
    SQL_PRAGMA = 320,
    SQL_REGEXP = 321,
    SQL_RENAME = 322,
    SQL_SELECT = 323,
    SQL_UNIQUE = 324,
    SQL_UPDATE = 325,
    SQL_VACUUM = 326,
    SQL_VALUES = 327,
    SQL_ABORT = 328,
    SQL_AFTER = 329,
    SQL_ALTER = 330,
    SQL_BEGIN = 331,
    SQL_CHECK = 332,
    SQL_CROSS = 333,
    SQL_FLOAT = 334,
    SQL_GROUP = 335,
    SQL_INDEX = 336,
    SQL_INNER = 337,
    SQL_LIMIT = 338,
    SQL_MATCH = 339,
    SQL_ORDER = 340,
    SQL_OUTER = 341,
    SQL_QUERY = 342,
    SQL_RAISE = 343,
    SQL_RIGHT = 344,
    SQL_TABLE = 345,
    SQL_UNION = 346,
    SQL_USING = 347,
    SQL_WHERE = 348,
    SQL_BLOB = 349,
    SQL_CASE = 350,
    SQL_CAST = 351,
    SQL_DESC = 352,
    SQL_DROP = 353,
    SQL_EACH = 354,
    SQL_ELSE = 355,
    SQL_FAIL = 356,
    SQL_FROM = 357,
    SQL_FULL = 358,
    SQL_GLOB = 359,
    SQL_INTO = 360,
    SQL_JOIN = 361,
    SQL_LEFT = 362,
    SQL_LIKE = 363,
    SQL_LONG = 364,
    SQL_NULL = 365,
    SQL_PLAN = 366,
    SQL_REAL = 367,
    SQL_TEMP = 368,
    SQL_TEXT = 369,
    SQL_THEN = 370,
    SQL_VIEW = 371,
    SQL_WHEN = 372,
    SQL_WITH = 373,
    SQL_ADD = 374,
    SQL_ALL = 375,
    SQL_AND = 376,
    SQL_ASC = 377,
    SQL_END = 378,
    SQL_FOR = 379,
    SQL_INT = 380,
    SQL_KEY = 381,
    SQL_NOT = 382,
    SQL_ROW = 383,
    SQL_SET = 384,
    SQL_AS = 385,
    SQL_BY = 386,
    SQL_IF = 387,
    SQL_IN = 388,
    SQL_IS = 389,
    SQL_NO = 390,
    SQL_OF = 391,
    SQL_ON = 392,
    SQL_OR = 393,
    SQL_TO = 394,
    SQL_EQUALS = 395,
    SQL_NOTEQUALS = 396,
    SQL_ILIKE = 397,
    SQL_LESS = 398,
    SQL_GREATER = 399,
    SQL_LESSEQ = 400,
    SQL_GREATEREQ = 401,
    SQL_CONCAT = 402,
    SQL_UMINUS = 403
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

#line 277 "bison_parser.h"

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
