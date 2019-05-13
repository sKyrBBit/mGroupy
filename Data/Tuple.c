#include "../public.h"
#include "Tuple.h"
#include "../Symbol/Symbol.h"
#include "../Symbol/Quote.h"

extern List List_new(Node left, Node right);
extern Node List_left(List list);
extern Node List_right(List list);
extern Data Tuple_evaluate(List list);

typedef struct _List{
    _Node parent; /* parent class */
    Node left;
    Node right;
} _List;
List List_new(Node left, Node right){
    List l = (List)malloc(sizeof(_List));
    Node_initialize((Node)l, LIST);
    l -> left = left;
    l -> right = right;
    return l;
}
Node List_left(List list){
    return list -> left;
}
Node List_right(List list){
    return list -> right;
}
Data Tuple_evaluate(List list){ // TODO
    Node left = List_left((List)list);
    switch (Node_type(left)){
        case SYMBOL:
            return Symbol_evaluate(left, evaluate(List_right(list)));
        case IF:
            return If_evaluate();
        case QUOTE:
            return Quote_evaluate(List_right(list));
        case LAMBDA:
        case DEFINE:
            break;
        case TUPLE:
            break;
        default:
            printf(stderr, "left, \"");
            printf(stderr, left);
            printf(stderr, "\" isn't symbol.\n");
            exit(1);
    }
}
