#ifndef UNTITLED3_PRIVATENODE_H
#define UNTITLED3_PRIVATENODE_H

#include "Node.h"

typedef struct _Node{
    Node_Type type;
} _Node;

int Node_initialize(Node node, Node_Type type);

#endif //UNTITLED3_PRIVATENODE_H
