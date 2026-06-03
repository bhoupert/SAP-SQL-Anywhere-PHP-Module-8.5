/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

#ifndef YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef ZENDDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define ZENDDEBUG 1
#  else
#   define ZENDDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define ZENDDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined ZENDDEBUG */
#if ZENDDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 41 "Zend/zend_language_parser.y" /* yacc.c:1921  */

#include "zend_compile.h"

#line 60 "Zend/zend_language_parser.h" /* yacc.c:1921  */

/* Token type.  */
#ifndef ZENDTOKENTYPE
# define ZENDTOKENTYPE
  enum zendtokentype
  {
    END = 0,
    T_THROW = 258,
    PREC_ARROW_FUNCTION = 259,
    T_INCLUDE = 260,
    T_INCLUDE_ONCE = 261,
    T_REQUIRE = 262,
    T_REQUIRE_ONCE = 263,
    T_LOGICAL_OR = 264,
    T_LOGICAL_XOR = 265,
    T_LOGICAL_AND = 266,
    T_PRINT = 267,
    T_YIELD = 268,
    T_DOUBLE_ARROW = 269,
    T_YIELD_FROM = 270,
    T_PLUS_EQUAL = 271,
    T_MINUS_EQUAL = 272,
    T_MUL_EQUAL = 273,
    T_DIV_EQUAL = 274,
    T_CONCAT_EQUAL = 275,
    T_MOD_EQUAL = 276,
    T_AND_EQUAL = 277,
    T_OR_EQUAL = 278,
    T_XOR_EQUAL = 279,
    T_SL_EQUAL = 280,
    T_SR_EQUAL = 281,
    T_POW_EQUAL = 282,
    T_COALESCE_EQUAL = 283,
    T_COALESCE = 284,
    T_BOOLEAN_OR = 285,
    T_BOOLEAN_AND = 286,
    T_AMPERSAND_NOT_FOLLOWED_BY_VAR_OR_VARARG = 287,
    T_AMPERSAND_FOLLOWED_BY_VAR_OR_VARARG = 288,
    T_IS_EQUAL = 289,
    T_IS_NOT_EQUAL = 290,
    T_IS_IDENTICAL = 291,
    T_IS_NOT_IDENTICAL = 292,
    T_SPACESHIP = 293,
    T_IS_SMALLER_OR_EQUAL = 294,
    T_IS_GREATER_OR_EQUAL = 295,
    T_PIPE = 296,
    T_SL = 297,
    T_SR = 298,
    T_INSTANCEOF = 299,
    T_INT_CAST = 300,
    T_DOUBLE_CAST = 301,
    T_STRING_CAST = 302,
    T_ARRAY_CAST = 303,
    T_OBJECT_CAST = 304,
    T_BOOL_CAST = 305,
    T_UNSET_CAST = 306,
    T_POW = 307,
    T_CLONE = 308,
    T_NOELSE = 309,
    T_ELSEIF = 310,
    T_ELSE = 311,
    T_LNUMBER = 312,
    T_DNUMBER = 313,
    T_STRING = 314,
    T_NAME_FULLY_QUALIFIED = 315,
    T_NAME_RELATIVE = 316,
    T_NAME_QUALIFIED = 317,
    T_VARIABLE = 318,
    T_INLINE_HTML = 319,
    T_ENCAPSED_AND_WHITESPACE = 320,
    T_CONSTANT_ENCAPSED_STRING = 321,
    T_STRING_VARNAME = 322,
    T_NUM_STRING = 323,
    T_EVAL = 324,
    T_NEW = 325,
    T_EXIT = 326,
    T_IF = 327,
    T_ENDIF = 328,
    T_ECHO = 329,
    T_DO = 330,
    T_WHILE = 331,
    T_ENDWHILE = 332,
    T_FOR = 333,
    T_ENDFOR = 334,
    T_FOREACH = 335,
    T_ENDFOREACH = 336,
    T_DECLARE = 337,
    T_ENDDECLARE = 338,
    T_AS = 339,
    T_SWITCH = 340,
    T_ENDSWITCH = 341,
    T_CASE = 342,
    T_DEFAULT = 343,
    T_MATCH = 344,
    T_BREAK = 345,
    T_CONTINUE = 346,
    T_GOTO = 347,
    T_FUNCTION = 348,
    T_FN = 349,
    T_CONST = 350,
    T_RETURN = 351,
    T_TRY = 352,
    T_CATCH = 353,
    T_FINALLY = 354,
    T_USE = 355,
    T_INSTEADOF = 356,
    T_GLOBAL = 357,
    T_STATIC = 358,
    T_ABSTRACT = 359,
    T_FINAL = 360,
    T_PRIVATE = 361,
    T_PROTECTED = 362,
    T_PUBLIC = 363,
    T_PRIVATE_SET = 364,
    T_PROTECTED_SET = 365,
    T_PUBLIC_SET = 366,
    T_READONLY = 367,
    T_VAR = 368,
    T_UNSET = 369,
    T_ISSET = 370,
    T_EMPTY = 371,
    T_HALT_COMPILER = 372,
    T_CLASS = 373,
    T_TRAIT = 374,
    T_INTERFACE = 375,
    T_ENUM = 376,
    T_EXTENDS = 377,
    T_IMPLEMENTS = 378,
    T_NAMESPACE = 379,
    T_LIST = 380,
    T_ARRAY = 381,
    T_CALLABLE = 382,
    T_LINE = 383,
    T_FILE = 384,
    T_DIR = 385,
    T_CLASS_C = 386,
    T_TRAIT_C = 387,
    T_METHOD_C = 388,
    T_FUNC_C = 389,
    T_PROPERTY_C = 390,
    T_NS_C = 391,
    T_ATTRIBUTE = 392,
    T_INC = 393,
    T_DEC = 394,
    T_VOID_CAST = 395,
    T_OBJECT_OPERATOR = 396,
    T_NULLSAFE_OBJECT_OPERATOR = 397,
    T_COMMENT = 398,
    T_DOC_COMMENT = 399,
    T_OPEN_TAG = 400,
    T_OPEN_TAG_WITH_ECHO = 401,
    T_CLOSE_TAG = 402,
    T_WHITESPACE = 403,
    T_START_HEREDOC = 404,
    T_END_HEREDOC = 405,
    T_DOLLAR_OPEN_CURLY_BRACES = 406,
    T_CURLY_OPEN = 407,
    T_PAAMAYIM_NEKUDOTAYIM = 408,
    T_NS_SEPARATOR = 409,
    T_ELLIPSIS = 410,
    T_BAD_CHARACTER = 411,
    T_ERROR = 412
  };
#endif

/* Value type.  */
#if ! defined ZENDSTYPE && ! defined ZENDSTYPE_IS_DECLARED
typedef zend_parser_stack_elem ZENDSTYPE;
# define ZENDSTYPE_IS_TRIVIAL 1
# define ZENDSTYPE_IS_DECLARED 1
#endif



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */
