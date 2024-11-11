/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 268 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
