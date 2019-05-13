#include "Symbol.h"

extern Symbol Symbol_new(int size, const char value[]);
extern double Symbol_call(Symbol symbol, double input);

typedef struct _Symbol{
    _Node parent; /* parent class */
    void (*method) (Data_Type input);
    char value[];
} _Symbol;
Symbol Symbol_new(const int size, const char value[]){
    Symbol s = (Symbol)malloc(sizeof(_Symbol));
    Node_initialize((Node)s, SYMBOL);
    s -> method = _Symbol_call;
    for (int i = 0; i < size; i++){
        s -> value[i] = value[i];
    }
    return s;
}
Data_Type Symbol_evaluate(Symbol symbol, Data_Type input){
    return (*(symbol -> method))(input);
}
static Data_Type _Symbol_call(Data_Type input);
static Data_Type _Symbol_call(Data_Type input){
    return Atom;
}