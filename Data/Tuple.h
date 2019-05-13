#ifndef UNTITLED3_TUPLE_H
#define UNTITLED3_TUPLE_H

#include "Data.h"
#include "../Node/PrivateNode.h"

typedef struct _List* List;

extern List List_new(Node left, Node right);
extern Node List_left(List list);
extern Node List_right(List list);
extern Data Tuple_evaluate(List list);

#endif //UNTITLED3_TUPLE_H
