#include "Quote.h"
#include "../Data/Number.h"
#include "../Data/Nil.h"
#include "../Data/Tuple.h"

extern Quote Quote_new(Symbol symbol);
extern Data Quote_evaluate(Node node);

typedef struct _Quote{
    _Node parent; /* parent class */
    Symbol symbol;
} _Quote;
Quote Quote_new(Symbol symbol){
    Quote q = (Quote)malloc(sizeof(_Quote));
    Node_initialize((Node)q, QUOTE);
    q -> symbol = symbol;
    return q;
}
Data Quote_evaluate(Node node){ // TODO
    switch(node -> type){
        case NUMBER:
            ;
            Atom number = Number_evaluate((Number)node);
            printf("%f",Atom_value(number));
            return (Data)number;
        case NIL:
            ;
            Atom nil = Nil_evaluate((Nil)node);
            printf("%f",Atom_value(nil));
            return (Data)nil;
        case LIST:
            ;
            Data data = Tuple_evaluate((List)node);

        case SYMBOL:
            ;
        default:
            printf(stderr, "illegal arguments, \"");
            printf(stderr,  node);
            printf(stderr, "\" isn't symbol.\n");
            exit(1);
    }
}
