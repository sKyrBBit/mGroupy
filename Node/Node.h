#ifndef UNTITLED3_NODE_H
#define UNTITLED3_NODE_H

#include <stdio.h>
#include <stdlib.h>

#include "../Symbol/Symbol.h"

typedef enum Type{
    NUMBER,
    BOOLEAN,
    SYMBOL,
    IF,
    QUOTE,
    LAMBDA,
    DEFINE,
    NIL,
    LIST
} Node_Type;

typedef struct _Node* Node;
extern Node_Type Node_type(Node node);

#endif //UNTITLED3_NODE_H
