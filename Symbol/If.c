#include "../public.h"
#include "If.h"

extern If If_new(Node condition, Node _then, Node _else);
extern Data If_evaluate(Node condition, Node _then, Node _else);

typedef struct _If{
    _Node parent; /* parent class */
    Node condition;
    Node _then;
    Node _else;
} _If;
If If_new(Node condition, Node _then, Node _else){
    If i = (If)malloc(sizeof(_If));
    Node_initialize((Node)i, IF);
    i -> condition = condition;
    i -> _then = _then;
    i -> _else = _else;
    return i;
}
Data If_evaluate(Node condition, Node _then, Node _else){
    if (condition -> type != NIL){
        return evaluate(_then);
    } else {
        return evaluate(_else);
    }
}