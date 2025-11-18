#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include <iostream>

using namespace std;
typedef bis infotype;
struct bis{

};
typedef elmlist *address;
struct elmlistParent{
    infotype info;
    address next;
};
struct listParent{
    address first;
};
#endif // PARENT_H_INCLUDED
