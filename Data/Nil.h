#ifndef UNTITLED3_NIL_H
#define UNTITLED3_NIL_H

#include "Data.h"
#include "../Node/PrivateNode.h"

typedef struct _Nil* Nil;

extern Nil Nil_new();
extern Atom Nil_evaluate(Nil nil);

#endif //UNTITLED3_NIL_H
