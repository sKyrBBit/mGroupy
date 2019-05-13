#include "Number.h"

extern Number Number_new(double value);
extern Atom Number_evaluate(Number number);

typedef struct _Number{
    _Node parent; /* parent class */
    double value;
} _Number;
Number Number_new(const double value){
    Number n = (Number)malloc(sizeof(_Number));
    Node_initialize((Node)n, NUMBER);
    n -> value = value;
    return n;
}
Atom Number_evaluate(Number number){
    return Atom_new(number -> value);
}