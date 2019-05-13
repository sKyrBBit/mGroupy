#include <stdlib.h>
#include "Data.h"

extern int Data_initial(Data* data, Data_Type type);
extern Atom Atom_new(double value);
extern double Atom_value(Atom atom);
extern Tuple Tuple_new(_Data left, _Data right);

int Data_initialize(Data data, Data_Type type){
    data -> type = type;
    return 0;
}
Atom Atom_new(double value){
    Atom a = (Atom)malloc(sizeof(_Atom));
    Data_initial((Data*)a, ATOM);
    a -> value = value;
    return a;
}
double Atom_value(Atom atom){
    return atom -> value;
}
Tuple Tuple_new(_Data left, _Data right){
    Tuple t = (Tuple)malloc(sizeof(_Tuple));
    Data_initial((Data*)t, TUPLE);
    t -> left = left;
    t -> right = right;
    return t;
}
