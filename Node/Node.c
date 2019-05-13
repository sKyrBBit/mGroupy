#include "PrivateNode.h"

extern Node_Type Node_type(Node node);

int Node_initialize(Node node, const Node_Type type){
    node -> type = type;
    return 1;
}
Node_Type Node_type(Node node){
    return node -> type;
}