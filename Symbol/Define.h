#ifndef UNTITLED3_DEFINE_H
#define UNTITLED3_DEFINE_H

#include "../Node/Node.h"
#include "Lambda.h"

typedef struct _Define* Define;

extern Define Define_new(Node input, Node output);
extern void Define_evaluate(Symbol symbol, Lambda lambda);

#endif //UNTITLED3_DEFINE_H
