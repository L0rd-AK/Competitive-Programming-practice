%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
%}

%option noyywrap

%%

"mytype"    { return MYTYPE; }
"show"      { return SHOW; }
[a-zA-Z]+   { yylval.str = strdup(yytext); return ID; }
[0-9]+      { yylval.num = atoi(yytext); return NUMBER; }
";"         { return ';'; }
"="         { return '='; }
"+"         { return '+'; }
"-"         { return '-'; }
"*"         { return '*'; }
"/"         { return '/'; }
"("         { return '('; }
")"         { return ')'; }
[ \t\n]     ; /* Ignore whitespace */
.           { fprintf(stderr, "Lex error: Invalid token '%s'\n", yytext); }

%%