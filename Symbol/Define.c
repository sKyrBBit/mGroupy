#include "Define.h"

extern Define Define_new(Node input, Node output);
extern void Define_evaluate(Symbol symbol, Lambda lambda);

typedef struct _Define{
    _Node parent; /* parent class */
    Node input;
    Node output;
} _Define;
Define Define_new(Node input, Node output){
    Define d = (Define)malloc(sizeof(_Define));
    Node_initialize((Node)d, DEFINE);
    d -> input = input;
    d -> output = output;
    return d;
}
void Define_evaluate(Symbol symbol, Lambda lambda){

}