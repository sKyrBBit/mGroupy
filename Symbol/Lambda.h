#ifndef UNTITLED3_LAMBDA_H
#define UNTITLED3_LAMBDA_H

#include "../Node/Node.h"
#include "../Data/Data.h"

typedef struct _Lambda* Lambda;
extern Lambda Lambda_new(Node input, Node output);
extern void (*lambda)(Data data) Lambda_evaluate(List list, );

#endif //UNTITLED3_LAMBDA_H
