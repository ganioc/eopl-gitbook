/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sql-1.y"




#line 76 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    APPROXNUM = 261,               /* APPROXNUM  */
    OR = 262,                      /* OR  */
    AND = 263,                     /* AND  */
    NOT = 264,                     /* NOT  */
    COMPARISON = 265,              /* COMPARISON  */
    UMINUS = 266,                  /* UMINUS  */
    ALL = 267,                     /* ALL  */
    AMMSC = 268,                   /* AMMSC  */
    ANY = 269,                     /* ANY  */
    AS = 270,                      /* AS  */
    ASC = 271,                     /* ASC  */
    AUTHORIZATION = 272,           /* AUTHORIZATION  */
    BETWEEN = 273,                 /* BETWEEN  */
    BY = 274,                      /* BY  */
    CHARACTER = 275,               /* CHARACTER  */
    CHECK = 276,                   /* CHECK  */
    CLOSE = 277,                   /* CLOSE  */
    COMMIT = 278,                  /* COMMIT  */
    CONTINUE = 279,                /* CONTINUE  */
    CREATE = 280,                  /* CREATE  */
    CURRENT = 281,                 /* CURRENT  */
    CURSOR = 282,                  /* CURSOR  */
    DECIMAL = 283,                 /* DECIMAL  */
    DECLARE = 284,                 /* DECLARE  */
    DEFAULT = 285,                 /* DEFAULT  */
    DELETE = 286,                  /* DELETE  */
    DESC = 287,                    /* DESC  */
    DISTINCT = 288,                /* DISTINCT  */
    DOUBLE = 289,                  /* DOUBLE  */
    ESCAPE = 290,                  /* ESCAPE  */
    EXISTS = 291,                  /* EXISTS  */
    FETCH = 292,                   /* FETCH  */
    FLOAT = 293,                   /* FLOAT  */
    FOR = 294,                     /* FOR  */
    FOREIGN = 295,                 /* FOREIGN  */
    FOUND = 296,                   /* FOUND  */
    FROM = 297,                    /* FROM  */
    GOTO = 298,                    /* GOTO  */
    GRANT = 299,                   /* GRANT  */
    GROUP = 300,                   /* GROUP  */
    HAVING = 301,                  /* HAVING  */
    IN = 302,                      /* IN  */
    INDICATOR = 303,               /* INDICATOR  */
    INSERT = 304,                  /* INSERT  */
    INTEGER = 305,                 /* INTEGER  */
    INTO = 306,                    /* INTO  */
    IS = 307,                      /* IS  */
    KEY = 308,                     /* KEY  */
    LANGUAGE = 309,                /* LANGUAGE  */
    LIKE = 310,                    /* LIKE  */
    MODULE = 311,                  /* MODULE  */
    NULLX = 312,                   /* NULLX  */
    NUMERIC = 313,                 /* NUMERIC  */
    OF = 314,                      /* OF  */
    ON = 315,                      /* ON  */
    OPEN = 316,                    /* OPEN  */
    OPTION = 317,                  /* OPTION  */
    ORDER = 318,                   /* ORDER  */
    PARAMETER = 319,               /* PARAMETER  */
    PRECISION = 320,               /* PRECISION  */
    PRIMARY = 321,                 /* PRIMARY  */
    PRIVILEGES = 322,              /* PRIVILEGES  */
    PROCEDURE = 323,               /* PROCEDURE  */
    PUBLIC = 324,                  /* PUBLIC  */
    REAL = 325,                    /* REAL  */
    REFERENCES = 326,              /* REFERENCES  */
    ROLLBACK = 327,                /* ROLLBACK  */
    SCHEMA = 328,                  /* SCHEMA  */
    SELECT = 329,                  /* SELECT  */
    SET = 330,                     /* SET  */
    SMALLINT = 331,                /* SMALLINT  */
    SOME = 332,                    /* SOME  */
    SQLCODE = 333,                 /* SQLCODE  */
    SQLERROR = 334,                /* SQLERROR  */
    TABLE = 335,                   /* TABLE  */
    TO = 336,                      /* TO  */
    UNION = 337,                   /* UNION  */
    UNIQUE = 338,                  /* UNIQUE  */
    UPDATE = 339,                  /* UPDATE  */
    USER = 340,                    /* USER  */
    VALUES = 341,                  /* VALUES  */
    VIEW = 342,                    /* VIEW  */
    WHENEVER = 343,                /* WHENEVER  */
    WHERE = 344,                   /* WHERE  */
    WITH = 345,                    /* WITH  */
    WORK = 346,                    /* WORK  */
    COBOL = 347,                   /* COBOL  */
    FORTRAN = 348,                 /* FORTRAN  */
    PASCAL = 349,                  /* PASCAL  */
    PLI = 350,                     /* PLI  */
    C = 351,                       /* C  */
    ADA = 352                      /* ADA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NAME 258
#define STRING 259
#define INTNUM 260
#define APPROXNUM 261
#define OR 262
#define AND 263
#define NOT 264
#define COMPARISON 265
#define UMINUS 266
#define ALL 267
#define AMMSC 268
#define ANY 269
#define AS 270
#define ASC 271
#define AUTHORIZATION 272
#define BETWEEN 273
#define BY 274
#define CHARACTER 275
#define CHECK 276
#define CLOSE 277
#define COMMIT 278
#define CONTINUE 279
#define CREATE 280
#define CURRENT 281
#define CURSOR 282
#define DECIMAL 283
#define DECLARE 284
#define DEFAULT 285
#define DELETE 286
#define DESC 287
#define DISTINCT 288
#define DOUBLE 289
#define ESCAPE 290
#define EXISTS 291
#define FETCH 292
#define FLOAT 293
#define FOR 294
#define FOREIGN 295
#define FOUND 296
#define FROM 297
#define GOTO 298
#define GRANT 299
#define GROUP 300
#define HAVING 301
#define IN 302
#define INDICATOR 303
#define INSERT 304
#define INTEGER 305
#define INTO 306
#define IS 307
#define KEY 308
#define LANGUAGE 309
#define LIKE 310
#define MODULE 311
#define NULLX 312
#define NUMERIC 313
#define OF 314
#define ON 315
#define OPEN 316
#define OPTION 317
#define ORDER 318
#define PARAMETER 319
#define PRECISION 320
#define PRIMARY 321
#define PRIVILEGES 322
#define PROCEDURE 323
#define PUBLIC 324
#define REAL 325
#define REFERENCES 326
#define ROLLBACK 327
#define SCHEMA 328
#define SELECT 329
#define SET 330
#define SMALLINT 331
#define SOME 332
#define SQLCODE 333
#define SQLERROR 334
#define TABLE 335
#define TO 336
#define UNION 337
#define UNIQUE 338
#define UPDATE 339
#define USER 340
#define VALUES 341
#define VIEW 342
#define WHENEVER 343
#define WHERE 344
#define WITH 345
#define WORK 346
#define COBOL 347
#define FORTRAN 348
#define PASCAL 349
#define PLI 350
#define C 351
#define ADA 352

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "sql-1.y"

    int     intval;
    double  floatval;
    char    *strval;
    int     subtok;

#line 330 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_APPROXNUM = 6,                  /* APPROXNUM  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_AND = 8,                        /* AND  */
  YYSYMBOL_NOT = 9,                        /* NOT  */
  YYSYMBOL_COMPARISON = 10,                /* COMPARISON  */
  YYSYMBOL_11_ = 11,                       /* '+'  */
  YYSYMBOL_12_ = 12,                       /* '-'  */
  YYSYMBOL_13_ = 13,                       /* '*'  */
  YYSYMBOL_14_ = 14,                       /* '/'  */
  YYSYMBOL_UMINUS = 15,                    /* UMINUS  */
  YYSYMBOL_ALL = 16,                       /* ALL  */
  YYSYMBOL_AMMSC = 17,                     /* AMMSC  */
  YYSYMBOL_ANY = 18,                       /* ANY  */
  YYSYMBOL_AS = 19,                        /* AS  */
  YYSYMBOL_ASC = 20,                       /* ASC  */
  YYSYMBOL_AUTHORIZATION = 21,             /* AUTHORIZATION  */
  YYSYMBOL_BETWEEN = 22,                   /* BETWEEN  */
  YYSYMBOL_BY = 23,                        /* BY  */
  YYSYMBOL_CHARACTER = 24,                 /* CHARACTER  */
  YYSYMBOL_CHECK = 25,                     /* CHECK  */
  YYSYMBOL_CLOSE = 26,                     /* CLOSE  */
  YYSYMBOL_COMMIT = 27,                    /* COMMIT  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_CREATE = 29,                    /* CREATE  */
  YYSYMBOL_CURRENT = 30,                   /* CURRENT  */
  YYSYMBOL_CURSOR = 31,                    /* CURSOR  */
  YYSYMBOL_DECIMAL = 32,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 33,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 34,                   /* DEFAULT  */
  YYSYMBOL_DELETE = 35,                    /* DELETE  */
  YYSYMBOL_DESC = 36,                      /* DESC  */
  YYSYMBOL_DISTINCT = 37,                  /* DISTINCT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 39,                    /* ESCAPE  */
  YYSYMBOL_EXISTS = 40,                    /* EXISTS  */
  YYSYMBOL_FETCH = 41,                     /* FETCH  */
  YYSYMBOL_FLOAT = 42,                     /* FLOAT  */
  YYSYMBOL_FOR = 43,                       /* FOR  */
  YYSYMBOL_FOREIGN = 44,                   /* FOREIGN  */
  YYSYMBOL_FOUND = 45,                     /* FOUND  */
  YYSYMBOL_FROM = 46,                      /* FROM  */
  YYSYMBOL_GOTO = 47,                      /* GOTO  */
  YYSYMBOL_GRANT = 48,                     /* GRANT  */
  YYSYMBOL_GROUP = 49,                     /* GROUP  */
  YYSYMBOL_HAVING = 50,                    /* HAVING  */
  YYSYMBOL_IN = 51,                        /* IN  */
  YYSYMBOL_INDICATOR = 52,                 /* INDICATOR  */
  YYSYMBOL_INSERT = 53,                    /* INSERT  */
  YYSYMBOL_INTEGER = 54,                   /* INTEGER  */
  YYSYMBOL_INTO = 55,                      /* INTO  */
  YYSYMBOL_IS = 56,                        /* IS  */
  YYSYMBOL_KEY = 57,                       /* KEY  */
  YYSYMBOL_LANGUAGE = 58,                  /* LANGUAGE  */
  YYSYMBOL_LIKE = 59,                      /* LIKE  */
  YYSYMBOL_MODULE = 60,                    /* MODULE  */
  YYSYMBOL_NULLX = 61,                     /* NULLX  */
  YYSYMBOL_NUMERIC = 62,                   /* NUMERIC  */
  YYSYMBOL_OF = 63,                        /* OF  */
  YYSYMBOL_ON = 64,                        /* ON  */
  YYSYMBOL_OPEN = 65,                      /* OPEN  */
  YYSYMBOL_OPTION = 66,                    /* OPTION  */
  YYSYMBOL_ORDER = 67,                     /* ORDER  */
  YYSYMBOL_PARAMETER = 68,                 /* PARAMETER  */
  YYSYMBOL_PRECISION = 69,                 /* PRECISION  */
  YYSYMBOL_PRIMARY = 70,                   /* PRIMARY  */
  YYSYMBOL_PRIVILEGES = 71,                /* PRIVILEGES  */
  YYSYMBOL_PROCEDURE = 72,                 /* PROCEDURE  */
  YYSYMBOL_PUBLIC = 73,                    /* PUBLIC  */
  YYSYMBOL_REAL = 74,                      /* REAL  */
  YYSYMBOL_REFERENCES = 75,                /* REFERENCES  */
  YYSYMBOL_ROLLBACK = 76,                  /* ROLLBACK  */
  YYSYMBOL_SCHEMA = 77,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 78,                    /* SELECT  */
  YYSYMBOL_SET = 79,                       /* SET  */
  YYSYMBOL_SMALLINT = 80,                  /* SMALLINT  */
  YYSYMBOL_SOME = 81,                      /* SOME  */
  YYSYMBOL_SQLCODE = 82,                   /* SQLCODE  */
  YYSYMBOL_SQLERROR = 83,                  /* SQLERROR  */
  YYSYMBOL_TABLE = 84,                     /* TABLE  */
  YYSYMBOL_TO = 85,                        /* TO  */
  YYSYMBOL_UNION = 86,                     /* UNION  */
  YYSYMBOL_UNIQUE = 87,                    /* UNIQUE  */
  YYSYMBOL_UPDATE = 88,                    /* UPDATE  */
  YYSYMBOL_USER = 89,                      /* USER  */
  YYSYMBOL_VALUES = 90,                    /* VALUES  */
  YYSYMBOL_VIEW = 91,                      /* VIEW  */
  YYSYMBOL_WHENEVER = 92,                  /* WHENEVER  */
  YYSYMBOL_WHERE = 93,                     /* WHERE  */
  YYSYMBOL_WITH = 94,                      /* WITH  */
  YYSYMBOL_WORK = 95,                      /* WORK  */
  YYSYMBOL_COBOL = 96,                     /* COBOL  */
  YYSYMBOL_FORTRAN = 97,                   /* FORTRAN  */
  YYSYMBOL_PASCAL = 98,                    /* PASCAL  */
  YYSYMBOL_PLI = 99,                       /* PLI  */
  YYSYMBOL_C = 100,                        /* C  */
  YYSYMBOL_ADA = 101,                      /* ADA  */
  YYSYMBOL_102_ = 102,                     /* ';'  */
  YYSYMBOL_103_ = 103,                     /* '('  */
  YYSYMBOL_104_ = 104,                     /* ')'  */
  YYSYMBOL_105_ = 105,                     /* ','  */
  YYSYMBOL_106_ = 106,                     /* '='  */
  YYSYMBOL_107_ = 107,                     /* '.'  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_sql_list = 109,                 /* sql_list  */
  YYSYMBOL_sql = 110,                      /* sql  */
  YYSYMBOL_schema = 111,                   /* schema  */
  YYSYMBOL_opt_schema_element_list = 112,  /* opt_schema_element_list  */
  YYSYMBOL_schema_element_list = 113,      /* schema_element_list  */
  YYSYMBOL_schema_element = 114,           /* schema_element  */
  YYSYMBOL_base_table_def = 115,           /* base_table_def  */
  YYSYMBOL_base_table_element_commalist = 116, /* base_table_element_commalist  */
  YYSYMBOL_base_table_element = 117,       /* base_table_element  */
  YYSYMBOL_column_def = 118,               /* column_def  */
  YYSYMBOL_column_def_opt_list = 119,      /* column_def_opt_list  */
  YYSYMBOL_column_def_opt = 120,           /* column_def_opt  */
  YYSYMBOL_table_constraint_def = 121,     /* table_constraint_def  */
  YYSYMBOL_column_commalist = 122,         /* column_commalist  */
  YYSYMBOL_view_def = 123,                 /* view_def  */
  YYSYMBOL_opt_with_check_option = 124,    /* opt_with_check_option  */
  YYSYMBOL_opt_column_commalist = 125,     /* opt_column_commalist  */
  YYSYMBOL_privilege_def = 126,            /* privilege_def  */
  YYSYMBOL_opt_with_grant_option = 127,    /* opt_with_grant_option  */
  YYSYMBOL_privileges = 128,               /* privileges  */
  YYSYMBOL_operation_commalist = 129,      /* operation_commalist  */
  YYSYMBOL_operation = 130,                /* operation  */
  YYSYMBOL_grantee_commalist = 131,        /* grantee_commalist  */
  YYSYMBOL_grantee = 132,                  /* grantee  */
  YYSYMBOL_cursor_def = 133,               /* cursor_def  */
  YYSYMBOL_opt_order_by_clause = 134,      /* opt_order_by_clause  */
  YYSYMBOL_ordering_spec_commalist = 135,  /* ordering_spec_commalist  */
  YYSYMBOL_ordering_spec = 136,            /* ordering_spec  */
  YYSYMBOL_opt_asc_desc = 137,             /* opt_asc_desc  */
  YYSYMBOL_manipulative_statement = 138,   /* manipulative_statement  */
  YYSYMBOL_close_statement = 139,          /* close_statement  */
  YYSYMBOL_commit_statement = 140,         /* commit_statement  */
  YYSYMBOL_delete_statement_positioned = 141, /* delete_statement_positioned  */
  YYSYMBOL_delete_statement_searched = 142, /* delete_statement_searched  */
  YYSYMBOL_fetch_statement = 143,          /* fetch_statement  */
  YYSYMBOL_insert_statement = 144,         /* insert_statement  */
  YYSYMBOL_values_or_query_spec = 145,     /* values_or_query_spec  */
  YYSYMBOL_insert_atom_commalist = 146,    /* insert_atom_commalist  */
  YYSYMBOL_insert_atom = 147,              /* insert_atom  */
  YYSYMBOL_open_statement = 148,           /* open_statement  */
  YYSYMBOL_rollback_statement = 149,       /* rollback_statement  */
  YYSYMBOL_select_statement = 150,         /* select_statement  */
  YYSYMBOL_opt_all_distinct = 151,         /* opt_all_distinct  */
  YYSYMBOL_update_statement_positioned = 152, /* update_statement_positioned  */
  YYSYMBOL_assignment_commalist = 153,     /* assignment_commalist  */
  YYSYMBOL_assignment = 154,               /* assignment  */
  YYSYMBOL_update_statement_searched = 155, /* update_statement_searched  */
  YYSYMBOL_target_commalist = 156,         /* target_commalist  */
  YYSYMBOL_target = 157,                   /* target  */
  YYSYMBOL_opt_where_clause = 158,         /* opt_where_clause  */
  YYSYMBOL_query_exp = 159,                /* query_exp  */
  YYSYMBOL_query_term = 160,               /* query_term  */
  YYSYMBOL_query_spec = 161,               /* query_spec  */
  YYSYMBOL_selection = 162,                /* selection  */
  YYSYMBOL_table_exp = 163,                /* table_exp  */
  YYSYMBOL_from_clause = 164,              /* from_clause  */
  YYSYMBOL_table_ref_commalist = 165,      /* table_ref_commalist  */
  YYSYMBOL_table_ref = 166,                /* table_ref  */
  YYSYMBOL_where_clause = 167,             /* where_clause  */
  YYSYMBOL_opt_group_by_clause = 168,      /* opt_group_by_clause  */
  YYSYMBOL_column_ref_commalist = 169,     /* column_ref_commalist  */
  YYSYMBOL_opt_having_clause = 170,        /* opt_having_clause  */
  YYSYMBOL_search_condition = 171,         /* search_condition  */
  YYSYMBOL_predicate = 172,                /* predicate  */
  YYSYMBOL_comparison_predicate = 173,     /* comparison_predicate  */
  YYSYMBOL_between_predicate = 174,        /* between_predicate  */
  YYSYMBOL_like_predicate = 175,           /* like_predicate  */
  YYSYMBOL_opt_escape = 176,               /* opt_escape  */
  YYSYMBOL_test_for_null = 177,            /* test_for_null  */
  YYSYMBOL_in_predicate = 178,             /* in_predicate  */
  YYSYMBOL_atom_commalist = 179,           /* atom_commalist  */
  YYSYMBOL_all_or_any_predicate = 180,     /* all_or_any_predicate  */
  YYSYMBOL_any_all_some = 181,             /* any_all_some  */
  YYSYMBOL_existence_test = 182,           /* existence_test  */
  YYSYMBOL_subquery = 183,                 /* subquery  */
  YYSYMBOL_scalar_exp = 184,               /* scalar_exp  */
  YYSYMBOL_scalar_exp_commalist = 185,     /* scalar_exp_commalist  */
  YYSYMBOL_atom = 186,                     /* atom  */
  YYSYMBOL_parameter_ref = 187,            /* parameter_ref  */
  YYSYMBOL_function_ref = 188,             /* function_ref  */
  YYSYMBOL_literal = 189,                  /* literal  */
  YYSYMBOL_table = 190,                    /* table  */
  YYSYMBOL_column_ref = 191,               /* column_ref  */
  YYSYMBOL_data_type = 192,                /* data_type  */
  YYSYMBOL_column = 193,                   /* column  */
  YYSYMBOL_cursor = 194,                   /* cursor  */
  YYSYMBOL_parameter = 195,                /* parameter  */
  YYSYMBOL_range_variable = 196,           /* range_variable  */
  YYSYMBOL_user = 197,                     /* user  */
  YYSYMBOL_module_def = 198,               /* module_def  */
  YYSYMBOL_opt_module = 199,               /* opt_module  */
  YYSYMBOL_module = 200,                   /* module  */
  YYSYMBOL_lang = 201,                     /* lang  */
  YYSYMBOL_opt_cursor_def_list = 202,      /* opt_cursor_def_list  */
  YYSYMBOL_cursor_def_list = 203,          /* cursor_def_list  */
  YYSYMBOL_procedure_def_list = 204,       /* procedure_def_list  */
  YYSYMBOL_procedure_def = 205,            /* procedure_def  */
  YYSYMBOL_procedure = 206,                /* procedure  */
  YYSYMBOL_parameter_def_list = 207,       /* parameter_def_list  */
  YYSYMBOL_parameter_def = 208,            /* parameter_def  */
  YYSYMBOL_manipulative_statement_list = 209, /* manipulative_statement_list  */
  YYSYMBOL_when_action = 210               /* when_action  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   597

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  449

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   352


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     103,   104,    13,    11,   105,    12,   107,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
       2,   106,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    44,    48,    50,    52,    53,    55,    56,
      59,    60,    61,    64,    67,    68,    71,    72,    74,    76,
      78,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      92,    93,    94,    96,   101,   102,   105,   108,   110,   112,
     114,   118,   121,   123,   126,   127,   128,   131,   132,   135,
     136,   137,   138,   139,   142,   143,   146,   147,   151,   154,
     156,   158,   161,   162,   165,   166,   168,   170,   171,   178,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   198,   201,   204,   207,   210,   213,   214,   217,
     218,   221,   222,   225,   228,   231,   235,   237,   238,   241,
     244,   245,   246,   249,   250,   253,   256,   257,   259,   261,
     263,   266,   267,   268,   271,   272,   275,   279,   280,   284,
     290,   293,   294,   297,   298,   301,   303,   305,   308,   309,
     311,   313,   315,   316,   317,   318,   319,   320,   323,   324,
     325,   326,   327,   328,   329,   332,   333,   336,   337,   340,
     341,   343,   345,   348,   349,   352,   353,   354,   355,   358,
     359,   362,   365,   366,   367,   370,   373,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   388,   389,   392,
     393,   394,   397,   398,   399,   402,   403,   404,   405,   408,
     409,   410,   412,   413,   416,   417,   418,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   437,   439,   441,   443,   446,   448,   453,   456,   462,
     464,   466,   469,   470,   471,   472,   473,   474,   476,   478,
     482,   483,   487,   492,   493,   496,   499,   502,   503,   507,
     508,   511,   512,   521,   522,   524,   525
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "APPROXNUM", "OR", "AND", "NOT", "COMPARISON", "'+'", "'-'",
  "'*'", "'/'", "UMINUS", "ALL", "AMMSC", "ANY", "AS", "ASC",
  "AUTHORIZATION", "BETWEEN", "BY", "CHARACTER", "CHECK", "CLOSE",
  "COMMIT", "CONTINUE", "CREATE", "CURRENT", "CURSOR", "DECIMAL",
  "DECLARE", "DEFAULT", "DELETE", "DESC", "DISTINCT", "DOUBLE", "ESCAPE",
  "EXISTS", "FETCH", "FLOAT", "FOR", "FOREIGN", "FOUND", "FROM", "GOTO",
  "GRANT", "GROUP", "HAVING", "IN", "INDICATOR", "INSERT", "INTEGER",
  "INTO", "IS", "KEY", "LANGUAGE", "LIKE", "MODULE", "NULLX", "NUMERIC",
  "OF", "ON", "OPEN", "OPTION", "ORDER", "PARAMETER", "PRECISION",
  "PRIMARY", "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL", "REFERENCES",
  "ROLLBACK", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME", "SQLCODE",
  "SQLERROR", "TABLE", "TO", "UNION", "UNIQUE", "UPDATE", "USER", "VALUES",
  "VIEW", "WHENEVER", "WHERE", "WITH", "WORK", "COBOL", "FORTRAN",
  "PASCAL", "PLI", "C", "ADA", "';'", "'('", "')'", "','", "'='", "'.'",
  "$accept", "sql_list", "sql", "schema", "opt_schema_element_list",
  "schema_element_list", "schema_element", "base_table_def",
  "base_table_element_commalist", "base_table_element", "column_def",
  "column_def_opt_list", "column_def_opt", "table_constraint_def",
  "column_commalist", "view_def", "opt_with_check_option",
  "opt_column_commalist", "privilege_def", "opt_with_grant_option",
  "privileges", "operation_commalist", "operation", "grantee_commalist",
  "grantee", "cursor_def", "opt_order_by_clause",
  "ordering_spec_commalist", "ordering_spec", "opt_asc_desc",
  "manipulative_statement", "close_statement", "commit_statement",
  "delete_statement_positioned", "delete_statement_searched",
  "fetch_statement", "insert_statement", "values_or_query_spec",
  "insert_atom_commalist", "insert_atom", "open_statement",
  "rollback_statement", "select_statement", "opt_all_distinct",
  "update_statement_positioned", "assignment_commalist", "assignment",
  "update_statement_searched", "target_commalist", "target",
  "opt_where_clause", "query_exp", "query_term", "query_spec", "selection",
  "table_exp", "from_clause", "table_ref_commalist", "table_ref",
  "where_clause", "opt_group_by_clause", "column_ref_commalist",
  "opt_having_clause", "search_condition", "predicate",
  "comparison_predicate", "between_predicate", "like_predicate",
  "opt_escape", "test_for_null", "in_predicate", "atom_commalist",
  "all_or_any_predicate", "any_all_some", "existence_test", "subquery",
  "scalar_exp", "scalar_exp_commalist", "atom", "parameter_ref",
  "function_ref", "literal", "table", "column_ref", "data_type", "column",
  "cursor", "parameter", "range_variable", "user", "module_def",
  "opt_module", "module", "lang", "opt_cursor_def_list", "cursor_def_list",
  "procedure_def_list", "procedure_def", "procedure", "parameter_def_list",
  "parameter_def", "manipulative_statement_list", "when_action", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-329)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-214)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     447,    47,   -37,    59,    47,   105,    47,   109,   157,    47,
      92,   116,   192,    11,   430,   102,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,   198,   206,   192,   185,   192,  -329,
     214,  -329,  -329,  -329,  -329,  -329,   315,   136,   195,   235,
     101,  -329,   162,  -329,   284,   263,   220,   225,   227,   301,
     228,  -329,  -329,  -329,   416,   416,  -329,   248,  -329,  -329,
     416,   318,   543,   251,  -329,  -329,  -329,  -329,  -329,   144,
     373,   379,   101,  -329,   381,  -329,  -329,  -329,   127,    25,
     211,  -329,  -329,   280,  -329,  -329,   379,   149,  -329,  -329,
    -329,  -329,  -329,  -329,   368,   387,  -329,  -329,   168,   156,
     225,   416,   416,   416,   416,   416,   225,  -329,  -329,  -329,
     141,  -329,   287,  -329,  -329,    -3,   359,  -329,   127,  -329,
    -329,  -329,  -329,   116,    25,    90,  -329,  -329,   355,   342,
     305,    27,   269,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,   520,   353,   225,   164,  -329,   307,  -329,  -329,   284,
     304,   309,   416,   412,   197,  -329,   -30,   272,   272,  -329,
    -329,   543,  -329,   285,   379,  -329,   335,   192,   192,   346,
    -329,  -329,   227,  -329,   227,   361,   321,  -329,  -329,   315,
      10,   406,     5,  -329,  -329,    47,   357,  -329,    40,   179,
     355,   355,    76,    74,   416,   333,   118,    28,  -329,  -329,
     379,   261,   408,   437,  -329,   241,   338,  -329,   192,  -329,
     358,   383,  -329,  -329,   543,   345,   227,  -329,  -329,  -329,
     192,   397,   409,  -329,   253,    25,  -329,  -329,   116,  -329,
     444,  -329,   416,   351,   118,  -329,  -329,  -329,   375,   305,
    -329,   543,   485,    37,   421,   401,  -329,  -329,  -329,   200,
    -329,  -329,  -329,   394,   408,  -329,  -329,  -329,   362,  -329,
     465,   355,   428,    47,   191,   451,   404,  -329,  -329,   193,
     374,  -329,   193,  -329,   315,   533,    37,   421,  -329,   416,
     204,   382,  -329,   118,  -329,  -329,  -329,   261,   488,   394,
    -329,  -329,   192,  -329,  -329,   469,   453,  -329,   452,   454,
     391,   207,  -329,  -329,  -329,   407,   426,    24,  -329,  -329,
    -329,   253,  -329,   409,   416,   212,   410,  -329,   543,  -329,
     118,  -329,  -329,  -329,  -329,   163,  -329,  -329,   412,   355,
    -329,   414,   417,   379,  -329,   191,   418,   423,   446,   424,
    -329,   433,  -329,  -329,  -329,   419,  -329,    49,  -329,  -329,
    -329,   420,   543,  -329,  -329,  -329,  -329,   407,    19,  -329,
     432,  -329,   269,   379,   379,   219,  -329,   538,   544,  -329,
     545,   547,   124,   513,  -329,   500,    24,  -329,  -329,  -329,
     475,  -329,   412,   229,   238,  -329,   455,   244,   456,   250,
     497,   458,    57,   192,  -329,   496,   498,  -329,  -329,   475,
    -329,   490,  -329,  -329,  -329,   561,  -329,  -329,   562,   -11,
      27,  -329,  -329,  -329,   466,  -329,  -329,  -329,   192,   464,
     468,   516,  -329,    46,   379,   467,  -329,  -329,  -329,  -329,
     258,   379,  -329,   266,   549,   472,    27,    48,  -329
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,    96,     0,     0,     0,     0,     4,    58,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
     217,   212,    81,    82,     0,     0,     0,     0,     0,   221,
       0,   220,    93,    94,    97,    98,   213,   192,     0,     0,
       0,     1,     0,     2,     0,     0,   109,   213,    39,     0,
     194,   189,   190,   191,   213,   213,   118,     0,   214,   181,
     213,     0,   177,   117,   173,   179,   175,   180,   174,   182,
       0,   100,     0,   246,     0,   244,     3,   216,     6,     0,
     132,    84,   110,    85,   106,   108,     0,     0,   222,   223,
     224,   225,   226,   227,     0,     0,   171,   172,   213,     0,
     213,   213,   213,   213,   213,   213,   213,   183,   193,   211,
     109,   101,     0,   243,   245,     0,     0,     5,     7,     8,
      10,    11,    12,    96,     0,    60,   111,   114,   132,     0,
       0,   213,   125,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   174,   213,     0,    34,     0,    86,    88,     0,
     195,     0,   213,     0,     0,   176,     0,   167,   168,   169,
     170,   178,   184,   132,     0,   105,   213,     0,     0,    45,
      51,    50,    39,    49,    39,     0,    46,    47,     9,   213,
       0,     0,     0,    59,   135,     0,     0,   165,     0,     0,
     132,   132,     0,   213,   213,     0,   213,     0,   107,    40,
       0,   213,   228,     0,   185,     0,     0,   188,     0,    95,
     109,     0,   102,   104,   103,     0,    39,    44,    53,    52,
       0,     0,     0,   115,     0,     0,   112,    83,    96,   136,
     133,   134,   213,     0,   213,   163,   162,   164,   213,     0,
     146,   145,     0,   213,   151,     0,   154,    35,    92,     0,
      89,    91,   230,     0,   229,   196,   187,   186,   120,   121,
     123,   132,   126,     0,     0,     0,     0,    48,   116,    66,
      61,    62,    66,   113,   213,     0,   213,   151,   161,   213,
       0,     0,   159,   213,   150,   153,    87,   213,     0,   218,
     233,   231,     0,   215,   124,     0,   130,    99,     0,     0,
       0,     0,    14,    16,    17,     0,     0,     0,    67,    68,
      64,     0,    65,     0,   213,     0,     0,   149,   148,   158,
     213,   156,   152,    90,   236,   213,   234,   122,     0,   132,
     119,     0,     0,     0,    13,     0,   197,   202,     0,   207,
     205,   199,   209,   206,    19,    37,    56,    42,    54,    57,
      63,     0,   147,   157,   155,   160,   240,     0,   213,   237,
     127,   128,   131,     0,     0,     0,    15,     0,     0,   210,
       0,     0,    18,     0,    36,     0,     0,    41,   166,   239,
       0,   238,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    55,   241,   235,
     129,     0,    31,   198,   203,     0,   208,   200,     0,    21,
     213,    25,    26,    24,    28,    38,    43,   242,     0,     0,
       0,     0,    22,     0,     0,    32,   204,   201,    23,    27,
       0,     0,    29,     0,     0,     0,   213,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,   563,  -329,  -329,  -329,   448,  -329,  -329,   233,
    -329,  -329,  -329,  -329,  -328,  -329,  -329,   -43,  -329,  -329,
    -329,  -329,   349,  -329,   196,  -155,  -329,  -329,   260,   302,
    -231,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   286,
    -329,  -329,  -329,  -123,  -329,  -329,   411,  -329,   476,   434,
    -103,   457,  -167,   -90,  -177,  -213,  -329,  -329,   288,  -329,
    -329,  -329,  -329,  -136,  -329,  -329,  -329,  -329,   306,  -329,
    -329,   303,  -329,  -329,  -329,    -5,   -42,  -329,  -193,   -28,
    -329,   186,   -12,   -89,   230,   -72,     2,   -76,  -329,   -40,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,   293,  -329,  -329,
     226,  -329,   514
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,    16,   127,   128,   129,   130,   311,   312,
     313,   382,   404,   314,   154,   131,   384,    97,   132,   387,
     185,   186,   187,   357,   358,    17,   193,   280,   281,   320,
      18,    19,    20,    21,    22,    23,    24,   157,   259,   260,
      25,    26,    27,    46,    28,   120,   121,    29,    93,    94,
      91,   135,   136,   137,    71,   219,   220,   268,   269,    92,
     306,   370,   340,   142,   143,   144,   145,   146,   294,   147,
     148,   290,   149,   249,   150,   197,   151,    73,    74,    75,
      76,    77,   270,    78,   354,   155,    32,    79,   304,   359,
      30,    40,    41,   104,   263,   264,   299,   300,   335,   368,
     369,   409,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   152,   194,   117,    72,   198,    35,   158,    37,   122,
     189,    42,   232,   254,    88,   375,   218,   175,   261,   278,
      49,   235,   106,   107,    56,   236,    58,    87,   109,    95,
      60,    61,    62,    63,  -132,  -132,   138,   255,    64,    65,
     172,    61,    62,    63,    67,   393,   394,   200,   201,   152,
      31,   287,   152,   200,   201,   200,   201,   262,    33,   431,
     292,    61,    62,    63,   240,   241,   164,   140,   283,   167,
     168,   169,   170,   171,   216,   153,   432,    60,    61,    62,
      63,   177,    95,   133,   152,    64,    65,    68,   178,   256,
     245,    67,   246,   292,    50,    68,   192,   356,   242,   199,
     332,   366,   122,   133,   261,    68,   440,   323,   134,   301,
     361,   152,   152,   443,   233,   284,    69,   272,   421,   212,
     215,   390,    61,    62,    63,    95,    69,   243,   134,    83,
     141,  -132,    44,   400,   224,   244,    34,   365,   257,   228,
     196,   229,    68,   385,   239,   282,   422,    72,    84,   401,
     439,    36,   448,    45,   386,   247,   125,   191,   402,   408,
      39,   251,   252,    69,    38,   225,   226,   111,   112,   113,
     114,    60,    61,    62,    63,   126,   192,   248,   427,    64,
      65,   161,   152,   275,   162,    67,    68,    43,   202,   203,
     111,   112,   113,   114,   119,    47,   116,   237,   250,   403,
     285,   204,   315,   372,    53,   163,   109,    69,   111,   112,
     113,   114,    68,   318,    60,    61,    62,    63,   276,    54,
     138,  -213,    64,    65,  -213,  -213,   355,   133,    67,   319,
     205,    68,   282,  -213,   173,   308,    68,    55,   206,   156,
      57,   139,    72,    80,   288,   366,   174,   328,   291,   371,
     152,   140,   111,   112,   113,   114,    60,    69,   279,   367,
     165,   309,  -213,  -213,    86,    61,    62,    63,   209,   210,
    -213,    70,    59,   315,    81,   307,   200,   201,   310,    68,
      82,   326,   362,   165,   433,   113,   114,    87,    60,    61,
      62,    63,   367,    68,   138,  -213,    64,    65,  -213,  -213,
      69,   217,    67,   410,   296,   297,    89,  -213,   329,   330,
     447,   344,   345,    90,   141,   221,   363,   330,    60,    61,
      62,    63,   258,   395,   210,   140,    64,    65,    66,    68,
      96,   152,    67,   411,   210,   105,  -213,  -213,    60,    61,
      62,    63,   412,   210,  -213,   266,    64,    65,   414,   415,
      69,   108,    67,    68,   417,   418,   115,   152,    60,    61,
      62,    63,   442,   210,   138,  -213,    64,    65,  -213,  -213,
     444,   210,    67,   110,    69,   179,   118,  -213,    60,    61,
      62,    63,   119,    68,   124,   153,    64,    65,   141,   159,
     160,   424,    67,   176,   180,   140,   223,    98,    99,   100,
     101,   102,   103,    68,    69,   195,  -213,  -213,   196,   207,
     211,   213,   181,   214,  -213,    60,   435,   227,    70,    60,
      61,    62,    63,    68,    69,   230,   231,    64,    65,   234,
      51,   346,   180,    67,   182,   238,   253,   183,    70,   347,
     265,     4,   267,    68,    69,   348,   273,   184,   274,   349,
     181,   271,   201,   238,   286,   218,     1,     2,   141,     3,
     293,   350,   295,     4,    69,     5,   298,   302,   303,   351,
     316,     6,   182,     1,     2,   183,     3,   305,    70,   321,
       4,   352,     5,     7,    68,   184,   331,   353,     6,   317,
       8,   334,   338,   289,   343,     9,   111,   112,   113,   114,
       7,     1,     2,   339,   133,    69,    10,     8,    11,   341,
       5,   342,     9,   383,   364,   379,     6,   373,    12,    70,
     374,   377,    13,    10,   388,    11,   378,   380,     7,   202,
     203,   111,   112,   113,   114,    12,   381,   392,   405,    13,
       9,   324,   204,   396,   111,   112,   113,   114,   406,   397,
     398,    10,   399,    11,   111,   112,   113,   114,   419,   413,
     416,   420,   425,    12,   426,   428,   429,   430,   436,   434,
     441,   205,   437,   438,   445,   446,   188,    52,   376,   206,
     277,   360,   407,   333,   322,   222,   166,   208,   423,   325,
     337,   190,   336,   327,   391,     0,   123,   389
};

static const yytype_int16 yycheck[] =
{
      12,    90,   138,    79,    46,   141,     4,    97,     6,    81,
     133,     9,   189,   206,    54,   343,    46,   120,   211,   232,
       9,    16,    64,    65,    36,   192,    38,     3,    70,    57,
       3,     4,     5,     6,     7,     8,     9,     9,    11,    12,
     116,     4,     5,     6,    17,   373,   374,     7,     8,   138,
       3,   244,   141,     7,     8,     7,     8,   212,    95,    70,
     253,     4,     5,     6,   200,   201,   108,    40,   235,   111,
     112,   113,   114,   115,   163,   105,    87,     3,     4,     5,
       6,    84,   110,    78,   173,    11,    12,    68,    91,    61,
      16,    17,    18,   286,    83,    68,    86,    73,    22,   141,
     293,    82,   174,    78,   297,    68,   434,   284,   103,   264,
     323,   200,   201,   441,   104,   238,    89,   220,    61,   159,
     162,   102,     4,     5,     6,   153,    89,    51,   103,    28,
     103,   104,    16,     9,   176,    59,    77,   330,   210,   182,
     103,   184,    68,    94,   104,   234,    89,   189,    47,    25,
     104,    46,   104,    37,   105,    81,    29,    67,    34,   390,
       3,   203,   204,    89,    55,   177,   178,    11,    12,    13,
      14,     3,     4,     5,     6,    48,    86,   103,   409,    11,
      12,    13,   271,   226,    16,    17,    68,    95,     9,    10,
      11,    12,    13,    14,     3,     3,    52,   195,   203,    75,
     242,    22,   274,   339,   102,    37,   248,    89,    11,    12,
      13,    14,    68,    20,     3,     4,     5,     6,   230,    21,
       9,    10,    11,    12,    13,    14,   316,    78,    17,    36,
      51,    68,   321,    22,    93,    44,    68,    31,    59,    90,
      55,    30,   284,   107,   249,    82,   105,   289,   253,   338,
     339,    40,    11,    12,    13,    14,     3,    89,     5,   335,
     104,    70,    51,    52,   102,     4,     5,     6,   104,   105,
      59,   103,    58,   345,    79,   273,     7,     8,    87,    68,
      45,   286,   324,   104,   420,    13,    14,     3,     3,     4,
       5,     6,   368,    68,     9,    10,    11,    12,    13,    14,
      89,   104,    17,   392,   104,   105,    43,    22,   104,   105,
     446,   104,   105,    93,   103,    30,   104,   105,     3,     4,
       5,     6,    61,   104,   105,    40,    11,    12,    13,    68,
     103,   420,    17,   104,   105,   107,    51,    52,     3,     4,
       5,     6,   104,   105,    59,   104,    11,    12,   104,   105,
      89,   103,    17,    68,   104,   105,   105,   446,     3,     4,
       5,     6,   104,   105,     9,    10,    11,    12,    13,    14,
     104,   105,    17,    55,    89,    16,     3,    22,     3,     4,
       5,     6,     3,    68,     3,   105,    11,    12,   103,    21,
       3,   403,    17,   106,    35,    40,    61,    96,    97,    98,
      99,   100,   101,    68,    89,    63,    51,    52,   103,    56,
     103,   107,    53,   104,    59,     3,   428,    71,   103,     3,
       4,     5,     6,    68,    89,    64,   105,    11,    12,    23,
       0,    24,    35,    17,    75,    78,   103,    78,   103,    32,
       3,    33,   104,    68,    89,    38,    63,    88,   103,    42,
      53,    93,     8,    78,   103,    46,    26,    27,   103,    29,
      39,    54,    61,    33,    89,    35,    72,   105,     3,    62,
      19,    41,    75,    26,    27,    78,    29,    49,   103,   105,
      33,    74,    35,    53,    68,    88,   104,    80,    41,    85,
      60,     3,    23,     8,   103,    65,    11,    12,    13,    14,
      53,    26,    27,    50,    78,    89,    76,    60,    78,    57,
      35,    57,    65,    94,   104,    69,    41,   103,    88,   103,
     103,   103,    92,    76,   104,    78,   103,   103,    53,     9,
      10,    11,    12,    13,    14,    88,   103,   105,    25,    92,
      65,     8,    22,     5,    11,    12,    13,    14,    48,     5,
       5,    76,     5,    78,    11,    12,    13,    14,    61,   104,
     104,   103,    66,    88,    66,    75,     5,     5,   104,   103,
     103,    51,   104,    57,    25,   103,   128,    14,   345,    59,
     231,   321,   386,   297,   282,   174,   110,   153,   402,   286,
     302,   134,   299,   287,   368,    -1,    82,   367
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    27,    29,    33,    35,    41,    53,    60,    65,
      76,    78,    88,    92,   109,   110,   111,   133,   138,   139,
     140,   141,   142,   143,   144,   148,   149,   150,   152,   155,
     198,     3,   194,    95,    77,   194,    46,   194,    55,     3,
     199,   200,   194,    95,    16,    37,   151,     3,   190,     9,
      83,     0,   110,   102,    21,    31,   190,    55,   190,    58,
       3,     4,     5,     6,    11,    12,    13,    17,    68,    89,
     103,   162,   184,   185,   186,   187,   188,   189,   191,   195,
     107,    79,    45,    28,    47,   210,   102,     3,   197,    43,
      93,   158,   167,   156,   157,   187,   103,   125,    96,    97,
      98,    99,   100,   101,   201,   107,   184,   184,   103,   184,
      55,    11,    12,    13,    14,   105,    52,   195,     3,     3,
     153,   154,   193,   210,     3,    29,    48,   112,   113,   114,
     115,   123,   126,    78,   103,   159,   160,   161,     9,    30,
      40,   103,   171,   172,   173,   174,   175,   177,   178,   180,
     182,   184,   191,   105,   122,   193,    90,   145,   161,    21,
       3,    13,    16,    37,   184,   104,   156,   184,   184,   184,
     184,   184,   195,    93,   105,   158,   106,    84,    91,    16,
      35,    53,    75,    78,    88,   128,   129,   130,   114,   151,
     159,    67,    86,   134,   171,    63,   103,   183,   171,   184,
       7,     8,     9,    10,    22,    51,    59,    56,   157,   104,
     105,   103,   197,   107,   104,   184,   191,   104,    46,   163,
     164,    30,   154,    61,   184,   190,   190,    71,   125,   125,
      64,   105,   162,   104,    23,    16,   160,   194,    78,   104,
     171,   171,    22,    51,    59,    16,    18,    81,   103,   181,
     183,   184,   184,   103,   186,     9,    61,   193,    61,   146,
     147,   186,   133,   202,   203,     3,   104,   104,   165,   166,
     190,    93,   158,    63,   103,   125,   190,   130,   163,     5,
     135,   136,   191,   160,   151,   184,   103,   186,   183,     8,
     179,   183,   186,    39,   176,    61,   104,   105,    72,   204,
     205,   133,   105,     3,   196,    49,   168,   194,    44,    70,
      87,   116,   117,   118,   121,   193,    19,    85,    20,    36,
     137,   105,   137,   162,     8,   179,   183,   176,   184,   104,
     105,   104,   186,   147,     3,   206,   205,   166,    23,    50,
     170,    57,    57,   103,   104,   105,    24,    32,    38,    42,
      54,    62,    74,    80,   192,   161,    73,   131,   132,   197,
     136,   163,   184,   104,   104,   186,    82,   195,   207,   208,
     169,   191,   171,   103,   103,   122,   117,   103,   103,    69,
     103,   103,   119,    94,   124,    94,   105,   127,   104,   192,
     102,   208,   105,   122,   122,   104,     5,     5,     5,     5,
       9,    25,    34,    75,   120,    25,    48,   132,   138,   209,
     191,   104,   104,   104,   104,   105,   104,   104,   105,    61,
     103,    61,    89,   189,   190,    66,    66,   138,    75,     5,
       5,    70,    87,   171,   103,   190,   104,   104,    57,   104,
     122,   103,   104,   122,   104,    25,   103,   171,   104
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   114,   115,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   122,   122,   123,   124,   124,   125,
     125,   126,   127,   127,   128,   128,   128,   129,   129,   130,
     130,   130,   130,   130,   131,   131,   132,   132,   110,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   110,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   140,   141,   142,   143,   144,   145,   145,   146,
     146,   147,   147,   148,   149,   150,   151,   151,   151,   152,
     153,   153,   153,   154,   154,   155,   156,   156,   157,   158,
     158,   159,   159,   159,   160,   160,   161,   162,   162,   163,
     164,   165,   165,   166,   166,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   178,   178,   179,
     179,   180,   181,   181,   181,   182,   183,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   185,   185,   186,
     186,   186,   187,   187,   187,   188,   188,   188,   188,   189,
     189,   189,   190,   190,   191,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   194,   195,   195,   196,   197,   110,   198,   199,
     199,   200,   201,   201,   201,   201,   201,   201,   202,   202,
     203,   203,   133,   204,   204,   205,   206,   207,   207,   208,
     208,   209,   209,   110,   110,   210,   210
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     5,     0,     1,     1,     2,
       1,     1,     1,     6,     1,     3,     1,     1,     3,     0,
       2,     2,     3,     4,     2,     2,     2,     4,     2,     5,
       4,     5,     7,    14,     1,     3,     7,     0,     3,     0,
       3,     7,     0,     3,     2,     1,     1,     1,     3,     1,
       1,     1,     2,     2,     1,     3,     1,     1,     1,     6,
       0,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     7,     4,     4,     5,     4,     1,     1,
       3,     1,     1,     2,     2,     6,     0,     1,     1,     8,
       0,     1,     3,     3,     3,     5,     1,     3,     1,     0,
       1,     1,     3,     4,     1,     3,     4,     1,     1,     4,
       2,     1,     3,     1,     2,     2,     0,     3,     1,     3,
       0,     2,     0,     3,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     6,     5,     5,
       4,     0,     2,     4,     3,     6,     5,     6,     5,     1,
       3,     4,     1,     1,     1,     2,     6,     3,     3,     3,
       3,     2,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     3,     4,     5,     5,     4,     1,
       1,     1,     1,     3,     1,     3,     5,     1,     4,     1,
       4,     6,     1,     4,     6,     1,     1,     1,     4,     1,
       2,     1,     1,     0,     1,     1,     1,     1,     8,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     2,     6,     1,     2,     5,     1,     1,     2,     2,
       1,     1,     2,     4,     3,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1897 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 528 "sql-1.y"




