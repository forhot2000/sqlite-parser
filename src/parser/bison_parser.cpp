/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 106 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 180 "bison_parser.cpp"

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

#line 378 "bison_parser.cpp"

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



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  367

#define YYUNDEFTOK  2
#define YYMAXUTOK   403


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   154,     2,     2,
     160,   161,   152,   150,   164,   151,   162,   153,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   163,
     144,   140,   145,   165,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   158,     2,   159,   155,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   141,   142,   143,   146,   147,
     148,   149,   156,   157
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   247,   247,   268,   274,   283,   284,   285,   286,   287,
     288,   297,   306,   317,   318,   322,   323,   327,   328,   329,
     333,   334,   338,   344,   345,   349,   350,   354,   355,   356,
     357,   358,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   380,   385,   394,   395,   404,   418,   425,   432,   439,
     446,   453,   464,   465,   475,   484,   485,   489,   501,   502,
     503,   520,   521,   525,   526,   530,   540,   557,   561,   562,
     563,   567,   568,   574,   586,   587,   591,   595,   600,   601,
     605,   610,   614,   615,   618,   619,   623,   624,   628,   632,
     633,   634,   640,   641,   642,   649,   650,   654,   655,   659,
     666,   667,   668,   669,   670,   674,   675,   676,   677,   678,
     679,   680,   681,   685,   686,   690,   691,   692,   693,   694,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   712,   713,   717,   718,   719,   720,   726,   727,   728,
     729,   733,   734,   738,   739,   743,   744,   745,   746,   747,
     748,   752,   756,   757,   761,   765,   766,   767,   768,   772,
     773,   774,   775,   779,   780,   785,   786,   790,   794,   798,
     810,   811,   821,   822,   826,   827,   836,   837,   842,   853,
     862,   863,   868,   869,   873,   874,   882,   890,   900,   919,
     920,   921,   922,   923,   924,   925,   926,   927,   928,   933,
     942,   943,   948,   949
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "BINARY",
  "FLOATVAL", "INTVAL", "AUTOINCREMENT", "CURRENT_DATE", "CURRENT_TIME",
  "TRANSACTION", "CONSTRAINT", "DEFERRABLE", "REFERENCES", "EXCLUSIVE",
  "IMMEDIATE", "INITIALLY", "INTERSECT", "RECURSIVE", "SAVEPOINT",
  "TEMPORARY", "CONFLICT", "DATABASE", "DEFERRED", "DISTINCT", "RESTRICT",
  "ROLLBACK", "ANALYZE", "BETWEEN", "BOOLEAN", "CASCADE", "COLLATE",
  "DEFAULT", "EXPLAIN", "FOREIGN", "INDEXED", "INSTEAD", "INTEGER",
  "NATURAL", "NOTNULL", "PRIMARY", "REINDEX", "RELEASE", "REPLACE",
  "TRIGGER", "VIRTUAL", "WITHOUT", "ACTION", "ATTACH", "BEFORE", "COLUMN",
  "COMMIT", "CREATE", "DELETE", "DETACH", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "HAVING", "IGNORE", "INSERT", "ISNULL", "OFFSET", "PRAGMA",
  "REGEXP", "RENAME", "SELECT", "UNIQUE", "UPDATE", "VACUUM", "VALUES",
  "ABORT", "AFTER", "ALTER", "BEGIN", "CHECK", "CROSS", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "MATCH", "ORDER", "OUTER", "QUERY", "RAISE",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "BLOB", "CASE", "CAST",
  "DESC", "DROP", "EACH", "ELSE", "FAIL", "FROM", "FULL", "GLOB", "INTO",
  "JOIN", "LEFT", "LIKE", "LONG", "NULL", "PLAN", "REAL", "TEMP", "TEXT",
  "THEN", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR",
  "INT", "KEY", "NOT", "ROW", "SET", "AS", "BY", "IF", "IN", "IS", "NO",
  "OF", "ON", "OR", "TO", "'='", "EQUALS", "NOTEQUALS", "ILIKE", "'<'",
  "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "CONCAT", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "create_statement", "opt_not_exists", "opt_virtual",
  "opt_temporary", "column_def_commalist", "column_def",
  "column_constraint_list_nullable", "column_constraint_list",
  "column_constraint", "column_type", "drop_statement", "opt_exists",
  "delete_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "from_clause",
  "opt_where", "opt_group", "opt_having", "opt_order", "order_list",
  "order_desc", "opt_order_type", "opt_limit", "expr_list", "literal_list",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "cast_expr", "function_expr", "between_expr",
  "column_name", "literal", "string_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "alias", "opt_alias",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
      61,   395,   396,   397,    60,    62,   398,   399,   400,   401,
      43,    45,    42,    47,    37,    94,   402,   403,    91,    93,
      40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF (-237)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-199)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,   -46,    -6,   -34,   -55,    78,   133,   -47,   -39,   173,
      30,  -237,  -237,  -237,  -237,  -237,  -237,  -237,   110,  -237,
      15,   133,  -237,    43,    14,   133,   133,   105,  -237,   141,
      47,   112,  -237,   126,   126,    67,    81,  -237,   145,  -237,
    -237,  -237,  -237,   -39,   146,   134,   -39,   187,   111,   150,
     133,  -237,  -237,   182,   186,   111,   184,  -115,  -237,  -237,
    -237,  -237,   136,     6,   137,  -237,   157,   180,  -237,   135,
    -237,   200,   140,  -237,    58,   210,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,   295,   308,   253,   133,   133,  -237,
    -237,  -237,  -237,   229,  -237,  -237,  -237,   141,   229,   309,
    -237,   312,    57,   260,   111,    43,   141,  -237,   106,   133,
     -11,     2,   252,   141,    -4,    95,   141,   161,   180,   266,
      94,   162,   -80,     5,   186,   141,  -237,   141,   321,   141,
    -237,  -237,   180,  -237,   180,     4,   165,     8,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,  -237,   194,   -57,  -237,  -237,  -237,  -237,   187,
     163,  -237,   -66,   187,   262,  -237,   -94,   175,  -237,  -237,
     206,   133,    84,   178,  -237,   111,  -237,   141,  -237,  -237,
     181,   -67,    97,   141,   141,  -237,    96,   252,   231,  -237,
    -237,   -39,  -237,   289,  -237,   177,  -237,    21,  -237,   267,
    -237,  -237,  -237,   225,   338,   361,   180,   188,   135,  -237,
     239,   361,   361,   361,   374,   374,   374,   374,    94,    94,
      25,    25,    25,   195,  -237,   141,   308,  -237,  -237,   141,
    -237,  -237,  -237,  -237,   309,  -237,   353,    12,   -39,   197,
      12,   151,    63,  -237,   141,   141,  -237,    83,    87,   349,
     207,   209,   270,  -237,  -237,  -237,   286,   296,   297,   275,
       5,  -237,   254,  -237,   180,   361,   135,   223,    68,  -237,
      84,  -237,  -237,  -237,  -237,    93,  -237,  -237,   383,    99,
     228,  -237,  -237,    84,   117,  -237,   141,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,   230,  -237,    21,     5,
    -237,  -237,  -237,     5,   291,   141,   266,   238,   100,  -237,
    -237,  -237,    12,   349,   130,  -237,  -237,    12,  -237,    84,
    -237,  -237,  -237,   196,   -56,  -237,  -237,  -237,    -3,  -237,
     383,   149,   242,   141,   141,  -237,   141,  -237,   263,  -237,
     280,  -237,    -3,  -237,  -237,  -237,    17,    84,  -237,    84,
      84,  -237,  -237,  -237,   241,   243,  -237
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    16,     0,     0,    75,     0,     0,     0,     0,
     201,     3,     6,    10,     8,     7,     9,     5,    58,    59,
      85,     0,    15,    14,    19,     0,     0,     0,    74,     0,
     180,     0,   179,    44,    44,     0,     0,     1,   200,     2,
      69,    70,    68,     0,    72,     0,     0,    94,    53,     0,
       0,    18,    17,     0,    79,    53,     0,   155,   163,   164,
     165,   167,     0,     0,     0,   168,     0,     0,   157,     0,
     169,     0,    76,    95,   185,   100,   106,   107,   108,   102,
     104,   109,   103,   120,   111,   110,   101,   113,   114,   159,
     160,   166,   161,   162,     0,     0,     0,     0,     0,    62,
      61,     4,    63,    85,    64,    71,    67,     0,    85,     0,
      65,     0,     0,     0,    53,    14,     0,    45,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     115,     0,     0,     0,    79,     0,   183,     0,     0,     0,
     184,    99,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,     0,    79,    55,    43,    41,    42,    94,
      84,    86,    91,    94,    92,   202,     0,     0,    49,    13,
       0,     0,    78,     0,    47,    53,   152,     0,   156,   158,
       0,     0,     0,     0,     0,   139,     0,     0,     0,   112,
     105,     0,    77,   170,   172,     0,   174,   185,   173,    81,
      96,   131,   182,   132,     0,   127,     0,     0,     0,   118,
       0,   145,   146,   129,   147,   148,   149,   150,   122,   121,
     124,   123,   125,   126,   130,     0,     0,    54,    60,     0,
      90,    89,    88,    66,     0,    52,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,   137,     0,     0,     0,
       0,     0,     0,   197,   189,   195,   193,   196,   191,     0,
       0,   178,     0,    73,     0,   128,     0,     0,     0,   119,
      57,    56,    87,    93,   203,     0,    97,    12,     0,     0,
       0,    51,   153,   141,     0,   140,     0,    35,    33,    39,
      40,    37,    34,    38,    36,    32,     0,   144,   185,     0,
     192,   194,   190,     0,   171,     0,   154,     0,     0,   135,
     133,    48,     0,     0,     0,    20,    46,     0,   138,   142,
     151,   175,   186,   198,    83,   136,   134,    98,    24,    11,
       0,     0,     0,     0,     0,    80,     0,    29,     0,    30,
       0,    22,    23,    25,    21,    50,     0,   199,   187,    82,
      31,    27,    28,    26,   155,     0,   188
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,  -237,   369,  -237,   298,  -237,  -237,  -237,    72,
    -237,  -237,    71,   102,  -237,   392,  -237,  -237,   -32,  -237,
    -237,   191,  -173,   124,   384,    -7,   409,  -237,  -237,   213,
     311,  -237,  -237,   -85,  -237,  -237,   -51,  -237,   193,  -237,
     -14,  -172,  -218,   299,   -63,   -64,  -237,  -237,  -237,  -237,
    -237,  -237,   314,  -237,  -237,  -237,  -237,  -237,    77,  -208,
    -237,  -237,   -88,  -237,  -237,  -237,  -236,   127,  -237,  -237,
    -237,     1,  -237,  -182,  -237,  -237,  -237,  -237,  -237
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    50,    24,    53,   324,   325,
     351,   352,   353,   306,    13,    97,    14,    15,   112,    16,
     164,   165,    17,    18,   103,    19,    43,    44,   106,    20,
      29,    71,   134,   117,   273,   345,    47,   170,   171,   242,
     110,    72,   285,    73,    74,    75,    76,    77,    78,    79,
      80,    81,   125,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   202,   203,   204,   205,   206,
      31,   207,   140,   141,   208,   269,   358,    39,   176
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,    36,   129,   130,   344,   188,   132,    32,    30,    57,
      58,    59,    60,    61,    28,   252,    58,    59,    60,    61,
     364,   174,    48,   118,   136,   271,    54,    55,   261,     5,
     346,   240,   289,    40,   314,    51,   116,   347,   348,   286,
      22,   137,   286,    33,   172,   120,   278,   121,   254,   209,
      26,   114,   169,   182,   137,   137,   241,   173,   139,    21,
     191,   136,   131,   196,   129,    62,   349,   245,    25,    34,
     246,   139,   139,    41,   211,   287,   213,   333,   214,   237,
     215,   200,   180,    27,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   167,   168,
      45,    63,    64,    28,   318,   178,    42,   236,   135,   341,
      23,   184,   216,   123,   337,   190,    65,   137,   219,   286,
     185,     8,    65,   123,   350,     5,   331,    52,    40,   177,
     257,   258,    35,    66,   139,   220,    30,   217,    57,    58,
      59,    60,    61,   334,    57,    58,    59,    60,    61,    56,
     186,   138,   275,   251,   189,   238,   283,    67,    68,   243,
      57,    58,    59,    60,    61,   201,    69,   102,    41,    68,
     102,    70,   280,    37,     5,    49,   172,    70,   183,   137,
     160,   161,   249,    57,    58,    59,    60,    61,   138,     1,
     260,   293,   294,    38,    62,   193,   139,   255,     2,     3,
      62,    42,   296,     5,   137,   137,   295,     4,   137,    94,
     316,   277,   194,     5,   194,     6,   127,   137,   195,     5,
     256,   139,   139,   290,   292,   139,   259,   135,    99,   320,
      63,    64,   135,   329,   139,   262,    63,    64,   137,   142,
     328,    95,   100,     7,   291,    65,   157,   158,   159,   160,
     161,    65,    63,    64,   321,   139,   104,   322,    96,   104,
     326,   336,    66,   322,   135,   107,   105,    65,    66,   317,
     109,   111,   115,   143,   263,    63,    64,   113,   264,   116,
     357,   359,   265,   360,   128,   266,    67,    68,   342,   119,
      65,   339,    67,    68,   340,    69,   122,   126,   162,   267,
      70,    69,   133,   268,   135,     8,    70,   128,    67,    68,
     355,   163,   166,   322,    45,   175,    61,    69,   144,   179,
       5,   197,    70,   199,   212,   218,   244,   239,   262,   143,
     262,    67,    68,   343,   235,   247,   248,   145,   250,   216,
      69,   270,   253,   146,   147,    70,   137,   272,   276,   279,
     148,   161,   149,   150,   151,   152,   284,   288,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   263,   307,   263,
     308,   264,   310,   264,   144,   265,   309,   265,   266,   297,
     266,   313,   311,   312,   319,   315,   323,   298,   327,   361,
     362,   330,   267,   198,   267,  -198,   268,  -198,   268,   335,
     147,   143,   356,   121,   366,   299,   148,   101,   149,   150,
     151,   152,   354,   181,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   363,   143,   338,    98,   281,   300,    46,
     108,   187,   282,   365,   210,     0,   332,   143,   192,     0,
       0,     0,     0,   301,     0,     0,   144,     0,     0,     0,
       0,     0,     0,  -176,     0,  -177,     0,     0,   302,   274,
       0,   303,     0,   304,     0,   198,     0,     0,     0,  -199,
       0,     0,   147,     0,   305,     0,     0,     0,   148,     0,
     149,   150,   151,   152,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   147,     0,     0,     0,     0,
       0,  -199,     0,  -199,  -199,   151,   152,     0,   147,   153,
     154,   155,   156,   157,   158,   159,   160,   161,  -199,  -199,
       0,     0,  -199,  -199,   155,   156,   157,   158,   159,   160,
     161
};

static const yytype_int16 yycheck[] =
{
      63,     8,    66,    67,    60,     3,    69,     6,     3,     3,
       4,     5,     6,     7,    25,   187,     4,     5,     6,     7,
       3,   109,    21,    55,     3,   207,    25,    26,   201,    68,
      33,    97,   250,    18,   270,    21,    93,    40,    41,   247,
      46,   121,   250,    90,   107,   160,   218,   162,   115,   134,
     105,    50,   103,   116,   121,   121,   122,   108,   138,   105,
     123,     3,    69,   126,   128,    59,    69,   161,   102,   116,
     164,   138,   138,    58,   137,   248,   139,   313,   142,   164,
     144,   161,   114,   138,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,    97,    98,
      85,    95,    96,    25,   276,   112,    91,   164,   164,   327,
     116,   118,   108,   117,   322,   122,   110,   121,   110,   327,
     119,   160,   110,   117,   127,    68,   308,   113,    18,    72,
     193,   194,     8,   127,   138,   127,     3,   133,     3,     4,
       5,     6,     7,   315,     3,     4,     5,     6,     7,    44,
     161,   130,   216,   185,   152,   169,   244,   151,   152,   173,
       3,     4,     5,     6,     7,   160,   160,    43,    58,   152,
      46,   165,   235,     0,    68,   132,   239,   165,    72,   121,
     155,   156,   181,     3,     4,     5,     6,     7,   130,    44,
     197,   254,   255,   163,    59,   100,   138,   100,    53,    54,
      59,    91,   115,    68,   121,   121,   123,    62,   121,   162,
     274,   218,   117,    68,   117,    70,    59,   121,   123,    68,
     123,   138,   138,    72,   161,   138,   130,   164,   161,   161,
      95,    96,   164,   296,   138,    39,    95,    96,   121,    29,
     123,   129,   161,    98,   251,   110,   152,   153,   154,   155,
     156,   110,    95,    96,   161,   138,    43,   164,   132,    46,
     161,   161,   127,   164,   164,   131,   120,   110,   127,   276,
      83,   160,    90,    63,    78,    95,    96,   127,    82,    93,
     343,   344,    86,   346,   127,    89,   151,   152,    92,   105,
     110,   161,   151,   152,   164,   160,   160,   160,     3,   103,
     165,   160,   102,   107,   164,   160,   165,   127,   151,   152,
     161,     3,    59,   164,    85,     3,     7,   160,   108,    59,
      68,   160,   165,   161,     3,   160,    64,   164,    39,    63,
      39,   151,   152,   137,   140,   160,   130,   127,   160,   108,
     160,   164,   161,   133,   134,   165,   121,    80,   160,   110,
     140,   156,   142,   143,   144,   145,     3,   160,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    78,   161,    78,
     161,    82,    86,    82,   108,    86,   106,    86,    89,    30,
      89,   106,    86,    86,   161,   131,     3,    38,   160,   126,
     110,   161,   103,   127,   103,   106,   107,   106,   107,   161,
     134,    63,   160,   162,   161,    56,   140,    38,   142,   143,
     144,   145,   340,   115,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   352,    63,   323,    34,   236,    79,    20,
      46,   120,   239,   356,   135,    -1,   309,    63,   124,    -1,
      -1,    -1,    -1,    94,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    -1,   164,    -1,    -1,   109,   121,
      -1,   112,    -1,   114,    -1,   127,    -1,    -1,    -1,   108,
      -1,    -1,   134,    -1,   125,    -1,    -1,    -1,   140,    -1,
     142,   143,   144,   145,    -1,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   134,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,   143,   144,   145,    -1,   134,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   144,   145,
      -1,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    53,    54,    62,    68,    70,    98,   160,   167,
     168,   169,   170,   180,   182,   183,   185,   188,   189,   191,
     195,   105,    46,   116,   172,   102,   105,   138,    25,   196,
       3,   236,   237,    90,   116,   189,   191,     0,   163,   243,
      18,    58,    91,   192,   193,    85,   192,   202,   237,   132,
     171,    21,   113,   173,   237,   237,    44,     3,     4,     5,
       6,     7,    59,    95,    96,   110,   127,   151,   152,   160,
     165,   197,   207,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   162,   129,   132,   181,   181,   161,
     161,   169,   189,   190,   195,   120,   194,   131,   190,    83,
     206,   160,   184,   127,   237,    90,    93,   199,   184,   105,
     160,   162,   160,   117,   210,   218,   160,    59,   127,   211,
     211,   191,   210,   102,   198,   164,     3,   121,   130,   138,
     238,   239,    29,    63,   108,   127,   133,   134,   140,   142,
     143,   144,   145,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     3,     3,   186,   187,    59,   237,   237,   202,
     203,   204,   210,   202,   228,     3,   244,    72,   191,    59,
     184,   171,   210,    72,   191,   237,   161,   196,     3,   152,
     191,   210,   218,   100,   117,   123,   210,   160,   127,   161,
     161,   160,   231,   232,   233,   234,   235,   237,   240,   199,
     209,   210,     3,   210,   211,   211,   108,   133,   160,   110,
     127,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   140,   164,   199,   206,   164,
      97,   122,   205,   206,    64,   161,   164,   160,   130,   237,
     160,   184,   207,   161,   115,   100,   123,   210,   210,   130,
     191,   188,    39,    78,    82,    86,    89,   103,   107,   241,
     164,   239,    80,   200,   121,   211,   160,   191,   207,   110,
     210,   187,   204,   228,     3,   208,   225,   188,   160,   208,
      72,   191,   161,   210,   210,   123,   115,    30,    38,    56,
      79,    94,   109,   112,   114,   125,   179,   161,   161,   106,
      86,    86,    86,   106,   232,   131,   211,   191,   207,   161,
     161,   161,   164,     3,   174,   175,   161,   160,   123,   210,
     161,   239,   233,   232,   207,   161,   161,   225,   179,   161,
     164,   208,    92,   137,    60,   201,    33,    40,    41,    69,
     127,   176,   177,   178,   175,   161,   160,   210,   242,   210,
     210,   126,   110,   178,     3,   224,   161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   166,   167,   168,   168,   169,   169,   169,   169,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     174,   174,   175,   176,   176,   177,   177,   178,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   181,   181,   182,   183,   183,   183,   183,
     183,   183,   184,   184,   185,   186,   186,   187,   188,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   193,   193,
     193,   194,   194,   195,   196,   196,   197,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   205,
     205,   205,   206,   206,   206,   207,   207,   208,   208,   209,
     210,   210,   210,   210,   210,   211,   211,   211,   211,   211,
     211,   211,   211,   212,   212,   213,   213,   213,   213,   213,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   216,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   219,   219,   220,   220,   220,   220,   220,
     220,   221,   222,   222,   223,   224,   224,   224,   224,   225,
     225,   225,   225,   226,   226,   227,   227,   228,   229,   230,
     231,   231,   232,   232,   233,   233,   234,   234,   235,   236,
     237,   237,   238,   238,   239,   239,   240,   240,   240,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   242,
     243,   243,   244,   244
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     9,     7,     3,     0,     1,     0,     1,     1,     0,
       1,     3,     3,     1,     0,     1,     2,     2,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     2,     0,     4,     8,     5,     8,     5,
      10,     7,     3,     0,     5,     1,     3,     3,     1,     1,
       5,     3,     3,     1,     1,     3,     5,     2,     1,     1,
       1,     1,     0,     6,     1,     0,     1,     2,     2,     0,
       4,     0,     2,     0,     3,     0,     1,     3,     2,     1,
       1,     0,     2,     4,     0,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     5,     6,     5,     6,     4,     6,     3,
       5,     4,     5,     4,     5,     3,     3,     3,     3,     3,
       3,     6,     3,     5,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     2,     1,     1,     0,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* IDENTIFIER  */
#line 138 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1729 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 138 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1735 "bison_parser.cpp"
        break;

    case 5: /* BINARY  */
#line 138 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1741 "bison_parser.cpp"
        break;

    case 6: /* FLOATVAL  */
#line 136 "bison_parser.y"
            { }
#line 1747 "bison_parser.cpp"
        break;

    case 7: /* INTVAL  */
#line 136 "bison_parser.y"
            { }
#line 1753 "bison_parser.cpp"
        break;

    case 168: /* statement_list  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1766 "bison_parser.cpp"
        break;

    case 169: /* statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1772 "bison_parser.cpp"
        break;

    case 170: /* create_statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 1778 "bison_parser.cpp"
        break;

    case 171: /* opt_not_exists  */
#line 136 "bison_parser.y"
            { }
#line 1784 "bison_parser.cpp"
        break;

    case 172: /* opt_virtual  */
#line 136 "bison_parser.y"
            { }
#line 1790 "bison_parser.cpp"
        break;

    case 173: /* opt_temporary  */
#line 136 "bison_parser.y"
            { }
#line 1796 "bison_parser.cpp"
        break;

    case 174: /* column_def_commalist  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1809 "bison_parser.cpp"
        break;

    case 175: /* column_def  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 1815 "bison_parser.cpp"
        break;

    case 176: /* column_constraint_list_nullable  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).cconstraint_vec)); }
#line 1821 "bison_parser.cpp"
        break;

    case 177: /* column_constraint_list  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).cconstraint_vec)); }
#line 1827 "bison_parser.cpp"
        break;

    case 178: /* column_constraint  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).cconstraint_t)); }
#line 1833 "bison_parser.cpp"
        break;

    case 179: /* column_type  */
#line 136 "bison_parser.y"
            { }
#line 1839 "bison_parser.cpp"
        break;

    case 180: /* drop_statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 1845 "bison_parser.cpp"
        break;

    case 181: /* opt_exists  */
#line 136 "bison_parser.y"
            { }
#line 1851 "bison_parser.cpp"
        break;

    case 182: /* delete_statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 1857 "bison_parser.cpp"
        break;

    case 183: /* insert_statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 1863 "bison_parser.cpp"
        break;

    case 184: /* opt_column_list  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1876 "bison_parser.cpp"
        break;

    case 185: /* update_statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 1882 "bison_parser.cpp"
        break;

    case 186: /* update_clause_commalist  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1895 "bison_parser.cpp"
        break;

    case 187: /* update_clause  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 1901 "bison_parser.cpp"
        break;

    case 188: /* select_statement  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 1907 "bison_parser.cpp"
        break;

    case 189: /* select_with_paren  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 1913 "bison_parser.cpp"
        break;

    case 190: /* select_paren_or_clause  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 1919 "bison_parser.cpp"
        break;

    case 191: /* select_no_paren  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 1925 "bison_parser.cpp"
        break;

    case 195: /* select_clause  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 1931 "bison_parser.cpp"
        break;

    case 196: /* opt_distinct  */
#line 136 "bison_parser.y"
            { }
#line 1937 "bison_parser.cpp"
        break;

    case 197: /* select_list  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1950 "bison_parser.cpp"
        break;

    case 198: /* from_clause  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 1956 "bison_parser.cpp"
        break;

    case 199: /* opt_where  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1962 "bison_parser.cpp"
        break;

    case 200: /* opt_group  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 1968 "bison_parser.cpp"
        break;

    case 201: /* opt_having  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1974 "bison_parser.cpp"
        break;

    case 202: /* opt_order  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1987 "bison_parser.cpp"
        break;

    case 203: /* order_list  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2000 "bison_parser.cpp"
        break;

    case 204: /* order_desc  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2006 "bison_parser.cpp"
        break;

    case 205: /* opt_order_type  */
#line 136 "bison_parser.y"
            { }
#line 2012 "bison_parser.cpp"
        break;

    case 206: /* opt_limit  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2018 "bison_parser.cpp"
        break;

    case 207: /* expr_list  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2031 "bison_parser.cpp"
        break;

    case 208: /* literal_list  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2044 "bison_parser.cpp"
        break;

    case 209: /* expr_alias  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2050 "bison_parser.cpp"
        break;

    case 210: /* expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2056 "bison_parser.cpp"
        break;

    case 211: /* operand  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2062 "bison_parser.cpp"
        break;

    case 212: /* scalar_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2068 "bison_parser.cpp"
        break;

    case 213: /* unary_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2074 "bison_parser.cpp"
        break;

    case 214: /* binary_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2080 "bison_parser.cpp"
        break;

    case 215: /* logic_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2086 "bison_parser.cpp"
        break;

    case 216: /* in_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2092 "bison_parser.cpp"
        break;

    case 217: /* case_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2098 "bison_parser.cpp"
        break;

    case 218: /* case_list  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2104 "bison_parser.cpp"
        break;

    case 219: /* exists_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2110 "bison_parser.cpp"
        break;

    case 220: /* comp_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2116 "bison_parser.cpp"
        break;

    case 221: /* cast_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2122 "bison_parser.cpp"
        break;

    case 222: /* function_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2128 "bison_parser.cpp"
        break;

    case 223: /* between_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2134 "bison_parser.cpp"
        break;

    case 224: /* column_name  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2140 "bison_parser.cpp"
        break;

    case 225: /* literal  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2146 "bison_parser.cpp"
        break;

    case 226: /* string_literal  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2152 "bison_parser.cpp"
        break;

    case 227: /* num_literal  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2158 "bison_parser.cpp"
        break;

    case 228: /* int_literal  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2164 "bison_parser.cpp"
        break;

    case 229: /* null_literal  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2170 "bison_parser.cpp"
        break;

    case 230: /* param_expr  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2176 "bison_parser.cpp"
        break;

    case 231: /* table_ref  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2182 "bison_parser.cpp"
        break;

    case 232: /* table_ref_atomic  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2188 "bison_parser.cpp"
        break;

    case 233: /* nonjoin_table_ref_atomic  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2194 "bison_parser.cpp"
        break;

    case 234: /* table_ref_commalist  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2207 "bison_parser.cpp"
        break;

    case 235: /* table_ref_name  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2213 "bison_parser.cpp"
        break;

    case 236: /* table_ref_name_no_alias  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2219 "bison_parser.cpp"
        break;

    case 237: /* table_name  */
#line 137 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2225 "bison_parser.cpp"
        break;

    case 238: /* alias  */
#line 138 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2231 "bison_parser.cpp"
        break;

    case 239: /* opt_alias  */
#line 138 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2237 "bison_parser.cpp"
        break;

    case 240: /* join_clause  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2243 "bison_parser.cpp"
        break;

    case 241: /* opt_join_type  */
#line 136 "bison_parser.y"
            { }
#line 2249 "bison_parser.cpp"
        break;

    case 242: /* join_condition  */
#line 147 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2255 "bison_parser.cpp"
        break;

    case 244: /* ident_commalist  */
#line 139 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2268 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 72 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2386 "bison_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 247 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2601 "bison_parser.cpp"
    break;

  case 3:
#line 268 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2612 "bison_parser.cpp"
    break;

  case 4:
#line 274 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2623 "bison_parser.cpp"
    break;

  case 5:
#line 283 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2629 "bison_parser.cpp"
    break;

  case 6:
#line 284 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2635 "bison_parser.cpp"
    break;

  case 7:
#line 285 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2641 "bison_parser.cpp"
    break;

  case 8:
#line 286 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2647 "bison_parser.cpp"
    break;

  case 9:
#line 287 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2653 "bison_parser.cpp"
    break;

  case 10:
#line 288 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2659 "bison_parser.cpp"
    break;

  case 11:
#line 297 "bison_parser.y"
                                                                                                              {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->isVirtual = (yyvsp[-7].bval);
			(yyval.create_stmt)->isTemporary = (yyvsp[-6].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2673 "bison_parser.cpp"
    break;

  case 12:
#line 306 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2686 "bison_parser.cpp"
    break;

  case 13:
#line 317 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 2692 "bison_parser.cpp"
    break;

  case 14:
#line 318 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 2698 "bison_parser.cpp"
    break;

  case 15:
#line 322 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 2704 "bison_parser.cpp"
    break;

  case 16:
#line 323 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 2710 "bison_parser.cpp"
    break;

  case 17:
#line 327 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 2716 "bison_parser.cpp"
    break;

  case 18:
#line 328 "bison_parser.y"
                          { (yyval.bval) = true; }
#line 2722 "bison_parser.cpp"
    break;

  case 19:
#line 329 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 2728 "bison_parser.cpp"
    break;

  case 20:
#line 333 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2734 "bison_parser.cpp"
    break;

  case 21:
#line 334 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2740 "bison_parser.cpp"
    break;

  case 22:
#line 338 "bison_parser.y"
                                                                       {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (ColumnType) (yyvsp[-1].column_type_t), (yyvsp[0].cconstraint_vec));
		}
#line 2748 "bison_parser.cpp"
    break;

  case 23:
#line 344 "bison_parser.y"
                                        { (yyval.cconstraint_vec) = (yyvsp[0].cconstraint_vec); }
#line 2754 "bison_parser.cpp"
    break;

  case 24:
#line 345 "bison_parser.y"
                            { (yyval.cconstraint_vec) = new std::vector <ColumnConstraint*>(); }
#line 2760 "bison_parser.cpp"
    break;

  case 25:
#line 349 "bison_parser.y"
                                   { (yyval.cconstraint_vec) = new std::vector<ColumnConstraint*>(); (yyval.cconstraint_vec)->push_back((yyvsp[0].cconstraint_t)); }
#line 2766 "bison_parser.cpp"
    break;

  case 26:
#line 350 "bison_parser.y"
                                                         { (yyvsp[-1].cconstraint_vec)->push_back((yyvsp[0].cconstraint_t)); (yyval.cconstraint_vec) = (yyvsp[-1].cconstraint_vec); }
#line 2772 "bison_parser.cpp"
    break;

  case 27:
#line 354 "bison_parser.y"
                            { (yyval.cconstraint_t) = new ColumnConstraint(ColumnConstraint::PRIMARYKEY); }
#line 2778 "bison_parser.cpp"
    break;

  case 28:
#line 355 "bison_parser.y"
                         { (yyval.cconstraint_t) = new ColumnConstraint(ColumnConstraint::NOTNULL); }
#line 2784 "bison_parser.cpp"
    break;

  case 29:
#line 356 "bison_parser.y"
                        { (yyval.cconstraint_t) = new ColumnConstraint(ColumnConstraint::NOTNULL); }
#line 2790 "bison_parser.cpp"
    break;

  case 30:
#line 357 "bison_parser.y"
                       { (yyval.cconstraint_t) = new ColumnConstraint(ColumnConstraint::UNIQUE); }
#line 2796 "bison_parser.cpp"
    break;

  case 31:
#line 358 "bison_parser.y"
                             { (yyval.cconstraint_t) = new ColumnConstraint(ColumnConstraint::DEFAULT, (yyvsp[0].expr)); }
#line 2802 "bison_parser.cpp"
    break;

  case 32:
#line 363 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INTEGER}; }
#line 2808 "bison_parser.cpp"
    break;

  case 33:
#line 364 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INTEGER}; }
#line 2814 "bison_parser.cpp"
    break;

  case 34:
#line 365 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::INTEGER}; }
#line 2820 "bison_parser.cpp"
    break;

  case 35:
#line 366 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INTEGER}; }
#line 2826 "bison_parser.cpp"
    break;

  case 36:
#line 367 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 2832 "bison_parser.cpp"
    break;

  case 37:
#line 368 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 2838 "bison_parser.cpp"
    break;

  case 38:
#line 369 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 2844 "bison_parser.cpp"
    break;

  case 39:
#line 370 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 2850 "bison_parser.cpp"
    break;

  case 40:
#line 371 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 2856 "bison_parser.cpp"
    break;

  case 41:
#line 380 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema; (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2866 "bison_parser.cpp"
    break;

  case 42:
#line 385 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2877 "bison_parser.cpp"
    break;

  case 43:
#line 394 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 2883 "bison_parser.cpp"
    break;

  case 44:
#line 395 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 2889 "bison_parser.cpp"
    break;

  case 45:
#line 404 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 2900 "bison_parser.cpp"
    break;

  case 46:
#line 418 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2912 "bison_parser.cpp"
    break;

  case 47:
#line 425 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2924 "bison_parser.cpp"
    break;

  case 48:
#line 432 "bison_parser.y"
                                                                                    {
			(yyval.insert_stmt) = new InsertStatement(kReplaceValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2936 "bison_parser.cpp"
    break;

  case 49:
#line 439 "bison_parser.y"
                                                                        {
			(yyval.insert_stmt) = new InsertStatement(kReplaceSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2948 "bison_parser.cpp"
    break;

  case 50:
#line 446 "bison_parser.y"
                                                                                              {
			(yyval.insert_stmt) = new InsertStatement(kReplaceValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2960 "bison_parser.cpp"
    break;

  case 51:
#line 453 "bison_parser.y"
                                                                                  {
			(yyval.insert_stmt) = new InsertStatement(kReplaceSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2972 "bison_parser.cpp"
    break;

  case 52:
#line 464 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 2978 "bison_parser.cpp"
    break;

  case 53:
#line 465 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 2984 "bison_parser.cpp"
    break;

  case 54:
#line 475 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 2995 "bison_parser.cpp"
    break;

  case 55:
#line 484 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3001 "bison_parser.cpp"
    break;

  case 56:
#line 485 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3007 "bison_parser.cpp"
    break;

  case 57:
#line 489 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3017 "bison_parser.cpp"
    break;

  case 60:
#line 503 "bison_parser.y"
                                                                                          {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3036 "bison_parser.cpp"
    break;

  case 61:
#line 520 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3042 "bison_parser.cpp"
    break;

  case 62:
#line 521 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3048 "bison_parser.cpp"
    break;

  case 65:
#line 530 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3063 "bison_parser.cpp"
    break;

  case 66:
#line 540 "bison_parser.y"
                                                                                      {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3082 "bison_parser.cpp"
    break;

  case 73:
#line 574 "bison_parser.y"
                                                                                {
			(yyval.select_stmt) = new SelectStatement();
			//$$->limit = $2;
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3096 "bison_parser.cpp"
    break;

  case 74:
#line 586 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3102 "bison_parser.cpp"
    break;

  case 75:
#line 587 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3108 "bison_parser.cpp"
    break;

  case 77:
#line 595 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3114 "bison_parser.cpp"
    break;

  case 78:
#line 600 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3120 "bison_parser.cpp"
    break;

  case 79:
#line 601 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3126 "bison_parser.cpp"
    break;

  case 80:
#line 605 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3136 "bison_parser.cpp"
    break;

  case 81:
#line 610 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3142 "bison_parser.cpp"
    break;

  case 82:
#line 614 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3148 "bison_parser.cpp"
    break;

  case 83:
#line 615 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3154 "bison_parser.cpp"
    break;

  case 84:
#line 618 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3160 "bison_parser.cpp"
    break;

  case 85:
#line 619 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3166 "bison_parser.cpp"
    break;

  case 86:
#line 623 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3172 "bison_parser.cpp"
    break;

  case 87:
#line 624 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3178 "bison_parser.cpp"
    break;

  case 88:
#line 628 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3184 "bison_parser.cpp"
    break;

  case 89:
#line 632 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3190 "bison_parser.cpp"
    break;

  case 90:
#line 633 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3196 "bison_parser.cpp"
    break;

  case 91:
#line 634 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3202 "bison_parser.cpp"
    break;

  case 92:
#line 640 "bison_parser.y"
                                  { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3208 "bison_parser.cpp"
    break;

  case 93:
#line 641 "bison_parser.y"
                                                     { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3214 "bison_parser.cpp"
    break;

  case 94:
#line 642 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3220 "bison_parser.cpp"
    break;

  case 95:
#line 649 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3226 "bison_parser.cpp"
    break;

  case 96:
#line 650 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3232 "bison_parser.cpp"
    break;

  case 97:
#line 654 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3238 "bison_parser.cpp"
    break;

  case 98:
#line 655 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3244 "bison_parser.cpp"
    break;

  case 99:
#line 659 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			(yyval.expr)->alias = (yyvsp[0].sval);
		}
#line 3253 "bison_parser.cpp"
    break;

  case 105:
#line 674 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 3259 "bison_parser.cpp"
    break;

  case 112:
#line 681 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3265 "bison_parser.cpp"
    break;

  case 115:
#line 690 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3271 "bison_parser.cpp"
    break;

  case 116:
#line 691 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3277 "bison_parser.cpp"
    break;

  case 117:
#line 692 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3283 "bison_parser.cpp"
    break;

  case 118:
#line 693 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3289 "bison_parser.cpp"
    break;

  case 119:
#line 694 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3295 "bison_parser.cpp"
    break;

  case 121:
#line 699 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3301 "bison_parser.cpp"
    break;

  case 122:
#line 700 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3307 "bison_parser.cpp"
    break;

  case 123:
#line 701 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3313 "bison_parser.cpp"
    break;

  case 124:
#line 702 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3319 "bison_parser.cpp"
    break;

  case 125:
#line 703 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3325 "bison_parser.cpp"
    break;

  case 126:
#line 704 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3331 "bison_parser.cpp"
    break;

  case 127:
#line 705 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3337 "bison_parser.cpp"
    break;

  case 128:
#line 706 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3343 "bison_parser.cpp"
    break;

  case 129:
#line 707 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3349 "bison_parser.cpp"
    break;

  case 130:
#line 708 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3355 "bison_parser.cpp"
    break;

  case 131:
#line 712 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3361 "bison_parser.cpp"
    break;

  case 132:
#line 713 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3367 "bison_parser.cpp"
    break;

  case 133:
#line 717 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3373 "bison_parser.cpp"
    break;

  case 134:
#line 718 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3379 "bison_parser.cpp"
    break;

  case 135:
#line 719 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3385 "bison_parser.cpp"
    break;

  case 136:
#line 720 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3391 "bison_parser.cpp"
    break;

  case 137:
#line 726 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3397 "bison_parser.cpp"
    break;

  case 138:
#line 727 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3403 "bison_parser.cpp"
    break;

  case 139:
#line 728 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3409 "bison_parser.cpp"
    break;

  case 140:
#line 729 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3415 "bison_parser.cpp"
    break;

  case 141:
#line 733 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3421 "bison_parser.cpp"
    break;

  case 142:
#line 734 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3427 "bison_parser.cpp"
    break;

  case 143:
#line 738 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3433 "bison_parser.cpp"
    break;

  case 144:
#line 739 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3439 "bison_parser.cpp"
    break;

  case 145:
#line 743 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3445 "bison_parser.cpp"
    break;

  case 146:
#line 744 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3451 "bison_parser.cpp"
    break;

  case 147:
#line 745 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3457 "bison_parser.cpp"
    break;

  case 148:
#line 746 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3463 "bison_parser.cpp"
    break;

  case 149:
#line 747 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3469 "bison_parser.cpp"
    break;

  case 150:
#line 748 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3475 "bison_parser.cpp"
    break;

  case 151:
#line 752 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 3481 "bison_parser.cpp"
    break;

  case 152:
#line 756 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3487 "bison_parser.cpp"
    break;

  case 153:
#line 757 "bison_parser.y"
                                                          { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3493 "bison_parser.cpp"
    break;

  case 154:
#line 761 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3499 "bison_parser.cpp"
    break;

  case 155:
#line 765 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3505 "bison_parser.cpp"
    break;

  case 156:
#line 766 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3511 "bison_parser.cpp"
    break;

  case 157:
#line 767 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 3517 "bison_parser.cpp"
    break;

  case 158:
#line 768 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3523 "bison_parser.cpp"
    break;

  case 163:
#line 779 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3529 "bison_parser.cpp"
    break;

  case 164:
#line 780 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3535 "bison_parser.cpp"
    break;

  case 165:
#line 785 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3541 "bison_parser.cpp"
    break;

  case 167:
#line 790 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3547 "bison_parser.cpp"
    break;

  case 168:
#line 794 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3553 "bison_parser.cpp"
    break;

  case 169:
#line 798 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3563 "bison_parser.cpp"
    break;

  case 171:
#line 811 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3574 "bison_parser.cpp"
    break;

  case 175:
#line 827 "bison_parser.y"
                                                   {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3585 "bison_parser.cpp"
    break;

  case 176:
#line 836 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3591 "bison_parser.cpp"
    break;

  case 177:
#line 837 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3597 "bison_parser.cpp"
    break;

  case 178:
#line 842 "bison_parser.y"
                                     {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3609 "bison_parser.cpp"
    break;

  case 179:
#line 853 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3619 "bison_parser.cpp"
    break;

  case 180:
#line 862 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3625 "bison_parser.cpp"
    break;

  case 181:
#line 863 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3631 "bison_parser.cpp"
    break;

  case 182:
#line 868 "bison_parser.y"
                              { (yyval.sval) = (yyvsp[0].sval); }
#line 3637 "bison_parser.cpp"
    break;

  case 185:
#line 874 "bison_parser.y"
                            { (yyval.sval) = nullptr; }
#line 3643 "bison_parser.cpp"
    break;

  case 186:
#line 883 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3655 "bison_parser.cpp"
    break;

  case 187:
#line 891 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3668 "bison_parser.cpp"
    break;

  case 188:
#line 901 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 3688 "bison_parser.cpp"
    break;

  case 189:
#line 919 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 3694 "bison_parser.cpp"
    break;

  case 190:
#line 920 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 3700 "bison_parser.cpp"
    break;

  case 191:
#line 921 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 3706 "bison_parser.cpp"
    break;

  case 192:
#line 922 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 3712 "bison_parser.cpp"
    break;

  case 193:
#line 923 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 3718 "bison_parser.cpp"
    break;

  case 194:
#line 924 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 3724 "bison_parser.cpp"
    break;

  case 195:
#line 925 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 3730 "bison_parser.cpp"
    break;

  case 196:
#line 926 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 3736 "bison_parser.cpp"
    break;

  case 197:
#line 927 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 3742 "bison_parser.cpp"
    break;

  case 198:
#line 928 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 3748 "bison_parser.cpp"
    break;

  case 202:
#line 948 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3754 "bison_parser.cpp"
    break;

  case 203:
#line 949 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3760 "bison_parser.cpp"
    break;


#line 3764 "bison_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 952 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

