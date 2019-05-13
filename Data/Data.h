#ifndef UNTITLED3_DATA_H
#define UNTITLED3_DATA_H

typedef enum {
    ATOM,
    TUPLE
} Data_Type;

typedef struct _Data{
    Data_Type type;
} _Data;
typedef _Data* Data;
extern int Data_initialize(Data data, Data_Type type);

typedef struct _Atom{
    _Data parent; /* parent class */
    double value;
} _Atom;
typedef _Atom* Atom;
extern Atom Atom_new(double value);
extern double Atom_value(Atom atom);

typedef struct _Tuple{
    _Data parent; /* parent class */
    _Data left;
    _Data right;
} _Tuple;
typedef _Tuple* Tuple;
extern Tuple Tuple_new(_Data left, _Data right);
extern Data Tuple_left(Tuple tuple);

#endif //UNTITLED3_DATA_H
