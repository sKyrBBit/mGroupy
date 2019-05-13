#ifndef UNTITLED3_QUOTE_H
#define UNTITLED3_QUOTE_H

#include "Symbol.h"
#include "../Data/Data.h"

typedef struct _Quote* Quote;

extern Quote Quote_new(Symbol symbol);
extern Data Quote_evaluate(Node node);

#endif //UNTITLED3_QUOTE_H
