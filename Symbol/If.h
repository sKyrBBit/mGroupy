#ifndef UNTITLED3_IF_H
#define UNTITLED3_IF_H

#include "../Node/PrivateNode.h"
#include "../Data/Data.h"

typedef struct _If* If;

extern If If_new(Node condition, Node _then, Node _else);
extern Data If_evaluate(Node condition, Node _then, Node _else);

#endif //UNTITLED3_IF_H
