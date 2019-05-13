#include <math.h>
#include "Nil.h"

extern Nil Nil_new();
extern Atom Nil_evaluate(Nil nil);

typedef struct _Nil{
    _Node parent; /* parent class */
    double value;
} _Nil;
Nil Nil_new(){
    Nil n = (Nil)malloc(sizeof(_Nil));
    Node_initialize((Node)n, NIL);
    n -> value = NAN;
    return n;
}
Atom Nil_evaluate(Nil nil){
    return Atom_new(nil -> value);
}
