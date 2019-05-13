cmake_minimum_required(VERSION 3.14)
project(untitled3 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled3 main.c lex_yacc/lex.yy.c Node/Node.c Node/Node.h Node/PrivateNode.h Data/Number.c Data/Number.h Data/Boolean.c Data/Boolean.h Data/Nil.c Data/Nil.h Data/Tuple.c Data/Tuple.h Symbol/Symbol.c Symbol/Symbol.h Symbol/If.c Symbol/If.h Data/Data.c Data/Data.h public.h Symbol/Quote.c Symbol/Quote.h Symbol/Lambda.c Symbol/Lambda.h Symbol/Define.c Symbol/Define.h lex_yacc/yacc.tab.c)