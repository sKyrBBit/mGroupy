/* never used */

#include "Boolean.h"

extern Boolean Boolean_new(boolean value);
extern boolean Boolean_evaluate(Boolean boolean);

typedef struct _Boolean{
    _Node parent; /* parent class */
    boolean value;
} _Boolean;
Boolean Boolean_new(const boolean value){
    Boolean b = (Boolean)malloc(sizeof(_Boolean));
    Node_initialize((Node)b, BOOLEAN);
    b -> value = value;
    return b;
}
boolean Boolean_evaluate(Boolean boolean){
    return boolean -> value;
}