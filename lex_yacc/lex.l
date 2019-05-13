/* define part */
%{
static int lex_return(int c){
    return c;
}
%}

%option yylineno
%s COMMENT

char    [a-zA-Z_]
charnum {char}|[0-9]

%%

"("        { return lex_return( LEFT );    }
")"        { return lex_return( RIGHT );   }
"nil"      { return lex_return( NIL );     }
"is_atom?" { return lex_return( IS_ATOM ); }
"equal?"   { return lex_return( EQUAL );   }
"if"       { return lex_return( IF );      }
"quote"    { return lex_return( QUOTE );   }
"lambda"   { return lex_return( LAMBDA );  }
"define"   { return lex_return( DEFINE );  }
"true"     { return lex_return( TRUE );    }
"false"    { return lex_return( FALSE );   }

[ \t] ;
(([1-9][0-9]*)|0)(\.[0-9]*)? {
    double temp;
    sscanf(yytext, "%lf", &temp);
    yylval.double_value = temp;
    return lex_return( NUMBER );
}
{char} {
    yylval.char_value = yytext[0];
    return lex_return( SYMBOL);
}
. {
    char c = yytext[0];

    fprintf(stderr, "%s::lexical error", c);
    exit(1);
}
%%
/* C part */
/* empty */