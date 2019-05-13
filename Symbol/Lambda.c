#include "Lambda.h"


extern Lambda Lambda_new(Node input, Node output);
extern void (*lambda)(Data data) Lambda_evaluate(List list, );

typedef struct _Lambda{
    _Node parent; /* parent class */
    Node input;
    Node output;
} _Lambda;
Lambda Lambda_new(Node input, Node output){
    Lambda l = (Lambda)malloc(sizeof(_Lambda));
    Node_initialize((Node)l, LAMBDA);
    l -> input = input;
    l -> output = output;
    return l;
}
void (*lambda)(Data data) Lambda_evaluate(List list, ){ //TODO

}