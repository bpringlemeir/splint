
/*  A Bison parser, made from signature.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse lslparse
#define yylex lsllex
#define yyerror lslerror
#define yylval lsllval
#define yychar lslchar
#define yydebug lsldebug
#define yynerrs lslnerrs
#define	LST_SIMPLEID	257
#define	LST_LOGICALOP	258
#define	LST_EQOP	259
#define	LST_SIMPLEOP	260
#define	LST_MAPSYM	261
#define	LST_FIELDMAPSYM	262
#define	LST_MARKERSYM	263
#define	LST_ifTOKEN	264
#define	LST_thenTOKEN	265
#define	LST_elseTOKEN	266
#define	LST_LBRACKET	267
#define	LST_RBRACKET	268
#define	LST_SELECTSYM	269
#define	LST_SEPSYM	270
#define	LST_OPENSYM	271
#define	LST_CLOSESYM	272
#define	LST_COLON	273
#define	LST_COMMA	274
#define	LST_EOL	275
#define	LST_COMMENTSYM	276
#define	LST_WHITESPACE	277
#define	LST_QUANTIFIERSYM	278
#define	LST_EQUATIONSYM	279
#define	LST_EQSEPSYM	280
#define	LST_COMPOSESYM	281
#define	LST_LPAR	282
#define	LST_RPAR	283
#define	LST_assertsTOKEN	284
#define	LST_assumesTOKEN	285
#define	LST_byTOKEN	286
#define	LST_convertsTOKEN	287
#define	LST_enumerationTOKEN	288
#define	LST_equationsTOKEN	289
#define	LST_exemptingTOKEN	290
#define	LST_forTOKEN	291
#define	LST_generatedTOKEN	292
#define	LST_impliesTOKEN	293
#define	LST_includesTOKEN	294
#define	LST_introducesTOKEN	295
#define	LST_ofTOKEN	296
#define	LST_partitionedTOKEN	297
#define	LST_traitTOKEN	298
#define	LST_tupleTOKEN	299
#define	LST_unionTOKEN	300
#define	LST_BADTOKEN	301

#line 36 "signature.y"


# include "bison.reset"

# include <stdio.h>
# include "lclintMacros.nf"
# include "llbasic.h"
# include "lslparse.h"
# include "signature.h"

void lslerror (char *);
/*@dependent@*/ /*@null@*/ lslOp importedlslOp;

/*@-noparams@*/ /* Can't list params since YYSTYPE isn't defined yet. */
static void yyprint (/*FILE *p_file, int p_type, YYSTYPE p_value */);
/*@=noparams@*/

# define YYPRINT(file, type, value) yyprint (file, type, value)

# define YYDEBUG 1

# include "bison.head"


#line 73 "signature.y"
typedef union {
  ltoken ltok;  /* a leaf is also an ltoken */
  unsigned int count;
  /*@only@*/  ltokenList ltokenList;
  /*@only@*/  opFormNode opform;
  /*@owned@*/ sigNode signature;
  /*@only@*/  nameNode name;
  /*@owned@*/ lslOp operator;
  /*@only@*/  lslOpList operators;
} YYSTYPE;
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		62
#define	YYFLAG		-32768
#define	YYNTBASE	48

#define YYTRANSLATE(x) ((unsigned)(x) <= 301 ? yytranslate[x] : 62)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,    11,    13,    15,    22,    24,    27,
    30,    34,    38,    43,    48,    54,    58,    63,    68,    74,
    77,    81,    85,    87,    89,    91,    92,    94,    96,   100,
   102,   104,   108,   109,   111,   113,   117,   119
};

static const short yyrhs[] = {    49,
     0,    50,     0,    49,    50,     0,    51,    19,    57,     0,
    61,     0,    52,     0,    10,     9,    11,     9,    12,     9,
     0,    53,     0,     9,    53,     0,    53,     9,     0,     9,
    53,     9,     0,    17,    54,    18,     0,     9,    17,    54,
    18,     0,    17,    54,    18,     9,     0,     9,    17,    54,
    18,     9,     0,    13,    54,    14,     0,     9,    13,    54,
    14,     0,    13,    54,    14,     9,     0,     9,    13,    54,
    14,     9,     0,    15,     3,     0,     9,    15,     3,     0,
     9,     8,     3,     0,     6,     0,     4,     0,     5,     0,
     0,    55,     0,     9,     0,    55,    56,     9,     0,    20,
     0,    16,     0,    58,     7,    60,     0,     0,    59,     0,
    60,     0,    59,    20,    60,     0,     3,     0,     3,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   139,   141,   146,   150,   156,   158,   162,   164,   166,   168,
   170,   172,   174,   176,   178,   181,   184,   187,   190,   193,
   196,   201,   206,   208,   210,   213,   215,   218,   220,   223,
   225,   228,   231,   233,   236,   238,   241,   247
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","LST_SIMPLEID",
"LST_LOGICALOP","LST_EQOP","LST_SIMPLEOP","LST_MAPSYM","LST_FIELDMAPSYM","LST_MARKERSYM",
"LST_ifTOKEN","LST_thenTOKEN","LST_elseTOKEN","LST_LBRACKET","LST_RBRACKET",
"LST_SELECTSYM","LST_SEPSYM","LST_OPENSYM","LST_CLOSESYM","LST_COLON","LST_COMMA",
"LST_EOL","LST_COMMENTSYM","LST_WHITESPACE","LST_QUANTIFIERSYM","LST_EQUATIONSYM",
"LST_EQSEPSYM","LST_COMPOSESYM","LST_LPAR","LST_RPAR","LST_assertsTOKEN","LST_assumesTOKEN",
"LST_byTOKEN","LST_convertsTOKEN","LST_enumerationTOKEN","LST_equationsTOKEN",
"LST_exemptingTOKEN","LST_forTOKEN","LST_generatedTOKEN","LST_impliesTOKEN",
"LST_includesTOKEN","LST_introducesTOKEN","LST_ofTOKEN","LST_partitionedTOKEN",
"LST_traitTOKEN","LST_tupleTOKEN","LST_unionTOKEN","LST_BADTOKEN","top","operatorList",
"operator","name","opForm","anyOp","middle","placeList","separator","signature",
"domain","sortList","sortId","opId", NULL
};
#endif

static const short yyr1[] = {     0,
    48,    49,    49,    50,    51,    51,    52,    52,    52,    52,
    52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
    52,    52,    53,    53,    53,    54,    54,    55,    55,    56,
    56,    57,    58,    58,    59,    59,    60,    61
};

static const short yyr2[] = {     0,
     1,     1,     2,     3,     1,     1,     6,     1,     2,     2,
     3,     3,     4,     4,     5,     3,     4,     4,     5,     2,
     3,     3,     1,     1,     1,     0,     1,     1,     3,     1,
     1,     3,     0,     1,     1,     3,     1,     1
};

static const short yydefact[] = {     0,
    38,    24,    25,    23,     0,     0,    26,     0,    26,     1,
     2,     0,     6,     8,     5,     0,    26,     0,    26,     9,
     0,    28,     0,    27,    20,     0,     3,    33,    10,    22,
     0,    21,     0,    11,     0,    16,    31,    30,     0,    12,
    37,     4,     0,    34,    35,    17,    13,     0,    18,    29,
    14,     0,     0,    19,    15,     0,    32,    36,     7,     0,
     0,     0
};

static const short yydefgoto[] = {    60,
    10,    11,    12,    13,    14,    23,    24,    39,    42,    43,
    44,    45,    15
};

static const short yypact[] = {    -3,
-32768,-32768,-32768,-32768,    11,    -4,     0,     8,     0,    -3,
-32768,    -1,-32768,    13,-32768,    17,     0,    22,     0,    18,
    20,-32768,    19,   -12,-32768,    14,-32768,    31,-32768,-32768,
    21,-32768,    23,-32768,    27,    28,-32768,-32768,    29,    30,
-32768,-32768,    33,    24,-32768,    34,    36,    35,-32768,-32768,
-32768,    31,    31,-32768,-32768,    37,-32768,-32768,-32768,    42,
    48,-32768
};

static const short yypgoto[] = {-32768,
-32768,    39,-32768,-32768,    45,     4,-32768,-32768,-32768,-32768,
-32768,   -23,-32768
};


#define	YYLAST		50


static const short yytable[] = {     1,
     2,     3,     4,    37,    21,     5,     6,    38,    22,     7,
    25,     8,    26,     9,     2,     3,     4,    28,    16,    30,
    31,    29,    33,    17,    32,    18,    34,    19,    57,    58,
    35,    40,    36,    41,    46,    48,    49,    50,    51,    52,
    47,    61,    54,    53,    55,    59,    56,    62,    27,    20
};

static const short yycheck[] = {     3,
     4,     5,     6,    16,     9,     9,    10,    20,     9,    13,
     3,    15,     9,    17,     4,     5,     6,    19,     8,     3,
    17,     9,    19,    13,     3,    15,     9,    17,    52,    53,
    11,    18,    14,     3,    14,     9,     9,     9,     9,     7,
    18,     0,     9,    20,     9,     9,    12,     0,    10,     5
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 139 "signature.y"
{ lslOpList_free (yyvsp[0].operators); ;
    break;}
case 2:
#line 142 "signature.y"
{ lslOpList x = lslOpList_new ();
		g_importedlslOp = yyvsp[0].operator;
		lslOpList_add (x, yyvsp[0].operator);
 		yyval.operators = x; ;
    break;}
case 3:
#line 147 "signature.y"
{ lslOpList_add (yyvsp[-1].operators, yyvsp[0].operator);
		yyval.operators = yyvsp[-1].operators; ;
    break;}
case 4:
#line 151 "signature.y"
{ yyval.operator = makelslOpNode (yyvsp[-2].name, yyvsp[0].signature); ;
    break;}
case 5:
#line 157 "signature.y"
{ yyval.name = makeNameNodeId (yyvsp[0].ltok); ;
    break;}
case 6:
#line 159 "signature.y"
{ yyval.name = makeNameNodeForm (yyvsp[0].opform); ;
    break;}
case 7:
#line 163 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-5].ltok, OPF_IF, opFormUnion_createMiddle (0), ltoken_undefined); ;
    break;}
case 8:
#line 165 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[0].ltok, OPF_ANYOP, opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 9:
#line 167 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_MANYOP, opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 10:
#line 169 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_ANYOPM, opFormUnion_createAnyOp (yyvsp[-1].ltok), ltoken_undefined); ;
    break;}
case 11:
#line 171 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MANYOPM, opFormUnion_createAnyOp (yyvsp[-1].ltok), ltoken_undefined); ;
    break;}
case 12:
#line 173 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MIDDLE, opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 13:
#line 175 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MMIDDLE, opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 14:
#line 177 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_MIDDLEM, opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 15:
#line 179 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_MMIDDLEM, 
			      opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 16:
#line 182 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_BMIDDLE, 
			      opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 17:
#line 185 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_BMMIDDLE, 
			      opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 18:
#line 188 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_BMIDDLEM, 
			    opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 19:
#line 191 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_BMMIDDLEM, 
			    opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 20:
#line 194 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_SELECT, 
			    opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 21:
#line 197 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MSELECT, 
			    opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 22:
#line 202 "signature.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MMAP, 
			    opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 23:
#line 207 "signature.y"
{ yyval.ltok = yyvsp[0].ltok; ;
    break;}
case 24:
#line 209 "signature.y"
{ yyval.ltok = yyvsp[0].ltok; ;
    break;}
case 25:
#line 211 "signature.y"
{ yyval.ltok = yyvsp[0].ltok; ;
    break;}
case 26:
#line 214 "signature.y"
{ yyval.count = 0; ;
    break;}
case 27:
#line 216 "signature.y"
{ yyval.count = yyvsp[0].count; ;
    break;}
case 28:
#line 219 "signature.y"
{ yyval.count = 1; ;
    break;}
case 29:
#line 221 "signature.y"
{ yyval.count = yyvsp[-2].count + 1; ;
    break;}
case 30:
#line 224 "signature.y"
{ yyval.ltok = yyvsp[0].ltok; ;
    break;}
case 31:
#line 226 "signature.y"
{ yyval.ltok = yyvsp[0].ltok; ;
    break;}
case 32:
#line 229 "signature.y"
{ yyval.signature = makesigNode (yyvsp[-1].ltok, yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 33:
#line 232 "signature.y"
{ yyval.ltokenList = ltokenList_new (); ;
    break;}
case 34:
#line 234 "signature.y"
{ yyval.ltokenList = yyvsp[0].ltokenList; ;
    break;}
case 35:
#line 237 "signature.y"
{ yyval.ltokenList = ltokenList_singleton (yyvsp[0].ltok); ;
    break;}
case 36:
#line 239 "signature.y"
{ yyval.ltokenList = ltokenList_push (yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 37:
#line 242 "signature.y"
{ 
	  yyval.ltok = yyvsp[0].ltok; 
	  ltoken_setText (yyval.ltok, processTraitSortId (ltoken_getText (yyvsp[0].ltok))); 
	;
    break;}
case 38:
#line 248 "signature.y"
{ yyval.ltok = yyvsp[0].ltok; ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 249 "signature.y"


# include "bison.reset"

extern char *yytext;

void lslerror (char *s) 
{
  llfatalbug 
    (cstring_makeLiteral 
     ("There has been a problem parsing an LSL signature. This is believed to "
      "result from a problem with gcc version 2.95 optimizations, "
      "but it has not been confirmed.  Please try rebuidling LCLint "
      "without the -O<n> option."));

}

static void yyprint (FILE *file, int type, YYSTYPE value)
{
  fprintf (file, " (%u:%u type: %d; text: %s) ", 
	   ltoken_getLine (value.ltok), 
	   ltoken_getCol (value.ltok), 
	   type, 
	   ltoken_getRawTextChars (value.ltok));
}

extern void PrintToken (ltoken tok) {
  char *codStr;
  
  switch (ltoken_getCode (tok)) 
    {
    case NOTTOKEN:          codStr = "*** NOTTOKEN ***"; break;
    case LST_QUANTIFIERSYM: codStr = "QUANTIFIERSYM"; break;
    case LST_LOGICALOP:     codStr = "LOGICALOP: "; break; 
    case LST_SELECTSYM:     codStr = "LST_SELECTSYM"; break;
    case LST_OPENSYM:	    codStr = "LST_OPENSYM"; break;
    case LST_SEPSYM:	    codStr = "SEPSYM"; break;
    case LST_CLOSESYM:	    codStr = "LST_CLOSESYM"; break;
    case LST_SIMPLEID:	    codStr = "LST_SIMPLEID"; break;
    case LST_MAPSYM:	    codStr = "MAPSYM"; break;
    case LST_MARKERSYM:	    codStr = "LST_MARKERSYM"; break;
    case LST_COMMENTSYM:    codStr = "COMMENTSYM"; break;
    case LST_SIMPLEOP:	    codStr = "SIMPLEOP"; break;
    case LST_COLON:         codStr = "LST_COLON"; break;
    case LST_COMMA:	    codStr = "COMMA"; break;
    case LST_LBRACKET:	    codStr = "LST_LBRACKET"; break;
    case LST_LPAR:	    codStr = "LST_LPAR"; break;
    case LST_RBRACKET:	    codStr = "LST_RBRACKET"; break;
    case LST_RPAR:          codStr = "LST_RPAR"; break;
    case LST_EQOP:          codStr = "LST_EQOP"; break;
    case LST_WHITESPACE:    codStr = "WHITESPACE,"; break;
    case LST_EOL:           codStr = "LST_EOL"; break;
    case LST_elseTOKEN:     codStr = "elseTOKEN"; break;
    case LST_ifTOKEN:       codStr = "ifTOKEN"; break;
    case LST_thenTOKEN:     codStr = "thenTOKEN"; break;
    case LST_BADTOKEN:      codStr = "*** BADTOKEN ***"; break;
    case LEOFTOKEN: /* can't reach LEOFTOKEN easily */
      codStr = "LEOFTOKEN"; break;
    default:
      codStr = "*** invalid token code ***";
      break;
    } /* end switch */
  
  /* only used for debugging */
  printf ("%u:%u: Token Code (%u): %s",
	  ltoken_getLine (tok), ltoken_getCol (tok), 
	  ltoken_getCode (tok), codStr);
  if (ltoken_getRawText (tok) != 0) 
    {
      printf (", Token String (%lu): %s\n", 
	      ltoken_getRawText (tok), ltoken_getRawTextChars (tok));
    }
  else printf ("\n");
}




