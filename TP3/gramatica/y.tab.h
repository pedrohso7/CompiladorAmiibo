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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT_TYPE = 258,
    FLOAT_TYPE = 259,
    STRING_TYPE = 260,
    BOOLEAN_TYPE = 261,
    VECTOR_TYPE = 262,
    CHAR_TYPE = 263,
    DATE_TYPE = 264,
    RELACIONAL_IGUALDADE = 265,
    RELACIONAL_NEGACAO = 266,
    RELACIONAL_MAIORQUE = 267,
    RELACIONAL_MENORQUE = 268,
    RELACIONAL_MAIORIGUAL = 269,
    RELACIONAL_MENORIGUAL = 270,
    RELACIONAL_OR = 271,
    RELACIONAL_AND = 272,
    MATEMATICO_SOMA = 273,
    MATEMATICO_SUBTRACAO = 274,
    MATEMATICO_MULTIPLICACAO = 275,
    MATEMATICO_DIVISAO = 276,
    MATEMATICO_MOD = 277,
    MATEMATICO_POW = 278,
    MATEMATICO_INCREMENTO = 279,
    MATEMATICO_DECREMENTO = 280,
    DESCONHECIDO = 281,
    IF_TOKEN = 282,
    ELSE_IF_TOKEN = 283,
    ELSE_TOKEN = 284,
    FOR_TOKEN = 285,
    WHILE_TOKEN = 286,
    RETURN_TOKEN = 287,
    BREAK_TOKEN = 288,
    CREATE_FUNC_TOKEN = 289,
    PRINT_TOKEN = 290,
    SCANF_TOKEN = 291,
    ABRIR_PARENTESES_TOKEN = 292,
    FECHAR_PARENTESES_TOKEN = 293,
    ABRIR_CHAVE_TOKEN = 294,
    FECHAR_CHAVE_TOKEN = 295,
    ABRIR_COLCHETE_TOKEN = 296,
    FECHAR_COLCHETE_TOKEN = 297,
    ATRIB_TOKEN = 298,
    VIRGULA_TOKEN = 299,
    VAR_TOKEN = 300,
    COMMENT_TOKEN = 301,
    EOL_TOKEN = 302,
    INT = 303,
    FLOAT = 304,
    DATE = 305,
    STRING = 306,
    CHAR = 307,
    BOOLEAN = 308,
    VECTOR = 309
  };
#endif
/* Tokens.  */
#define INT_TYPE 258
#define FLOAT_TYPE 259
#define STRING_TYPE 260
#define BOOLEAN_TYPE 261
#define VECTOR_TYPE 262
#define CHAR_TYPE 263
#define DATE_TYPE 264
#define RELACIONAL_IGUALDADE 265
#define RELACIONAL_NEGACAO 266
#define RELACIONAL_MAIORQUE 267
#define RELACIONAL_MENORQUE 268
#define RELACIONAL_MAIORIGUAL 269
#define RELACIONAL_MENORIGUAL 270
#define RELACIONAL_OR 271
#define RELACIONAL_AND 272
#define MATEMATICO_SOMA 273
#define MATEMATICO_SUBTRACAO 274
#define MATEMATICO_MULTIPLICACAO 275
#define MATEMATICO_DIVISAO 276
#define MATEMATICO_MOD 277
#define MATEMATICO_POW 278
#define MATEMATICO_INCREMENTO 279
#define MATEMATICO_DECREMENTO 280
#define DESCONHECIDO 281
#define IF_TOKEN 282
#define ELSE_IF_TOKEN 283
#define ELSE_TOKEN 284
#define FOR_TOKEN 285
#define WHILE_TOKEN 286
#define RETURN_TOKEN 287
#define BREAK_TOKEN 288
#define CREATE_FUNC_TOKEN 289
#define PRINT_TOKEN 290
#define SCANF_TOKEN 291
#define ABRIR_PARENTESES_TOKEN 292
#define FECHAR_PARENTESES_TOKEN 293
#define ABRIR_CHAVE_TOKEN 294
#define FECHAR_CHAVE_TOKEN 295
#define ABRIR_COLCHETE_TOKEN 296
#define FECHAR_COLCHETE_TOKEN 297
#define ATRIB_TOKEN 298
#define VIRGULA_TOKEN 299
#define VAR_TOKEN 300
#define COMMENT_TOKEN 301
#define EOL_TOKEN 302
#define INT 303
#define FLOAT 304
#define DATE 305
#define STRING 306
#define CHAR 307
#define BOOLEAN 308
#define VECTOR 309

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
