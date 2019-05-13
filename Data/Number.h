#ifndef UNTITLED3_NUMBER_H
#define UNTITLED3_NUMBER_H

#include "Data.h"
#include "../Node/PrivateNode.h"

typedef struct _Number* Number;

extern Number Number_new(double value);
extern Atom Number_evaluate(Number number);

#endif //UNTITLED3_NUMBER_H
