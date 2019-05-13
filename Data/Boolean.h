/* never used */

#ifndef UNTITLED3_BOOLEAN_H
#define UNTITLED3_BOOLEAN_H

#include "../Node/PrivateNode.h"

typedef struct _Boolean* Boolean;
typedef enum {
    true,
    false
} boolean;

extern Boolean Boolean_new(boolean value);
extern boolean Boolean_evaluate(Boolean boolean);

#endif //UNTITLED3_BOOLEAN_H
