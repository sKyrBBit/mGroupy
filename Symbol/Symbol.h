#ifndef UNTITLED3_SYMBOL_H
#define UNTITLED3_SYMBOL_H

#include "../Node/PrivateNode.h"
#include "../Data/DataType.h"

typedef struct _Symbol* Symbol;

extern Symbol Symbol_new(int size, const char value[]);
extern Data_Type Symbol_evaluate(Symbol symbol, Data_Type input); //TODO

#endif //UNTITLED3_SYMBOL_H
