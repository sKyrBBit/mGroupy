#ifndef UNTITLED3_PUBLIC_H
#define UNTITLED3_PUBLIC_H

#include "Data/Number.h"
#include "Data/Tuple.h"
#include "Data/Data.h"
#include "Symbol/If.h"
#include "Data/Nil.h"

Data evaluate(Node node){
    switch (Node_type(node)){
        case NUMBER:
            return (Data)Number_evaluate((Number)node);
        case NIL:
            return (Data)Nil_evaluate((Nil)node);
        case LIST:
            return Tuple_evaluate((List)node);
        default:
            printf(stderr, "illegal node, \"");
            printf(stderr,  node);
            printf(stderr, "\".\n");
            exit(1);
    }
}

#endif //UNTITLED3_PUBLIC_H
