/* define part */
%{
#define YYDEBUG 1
#define YYERROR_VERBOSE 1

static void yyerror(const char *s){
  fputs(s,stderr);
  fputs("\n",stderr);
}
static int yywrap(void){
  return 1;
}
%}

%union {
  double double_value;
  char char_value;
  Node node_value;
}

%token <double_value> NUMBER
%token <char_value> SYMBOL
%token LEFT RIGHT NIL IS_ATOM EQUAL IF QUOTE LAMBDA DEFINE
%type <node_value> atom list sexp

%%

sexp   : atom                 { $$ = $1;                      }
       | LEFT list RIGHT      { $$ = $2;                      }
       ;
atom   : NUMBER               { $$ = Number_new($1);          }
       | SYMBOL               { $$ = Symbol_new($1);          }
       | IF                   { $$ = If_new();                }
       | QUOTE                { $$ = Quote_new();             }
       | LAMBDA               { $$ = Lambda_new();            }
       | DEFINE               { $$ = Define_new();            }
       | NIL                  { $$ = Nil_new();               }
       ;
list   : sexp                 { $$ = List_new($1, Nil_new()); }
       | sexp list            { $$ = List_new($1, $2);        }
       ;
%%
/* C part */
#include "lex.yy.c"

int main(){
  yyparse();
}
