#ifndef TUBESSTD_H_INCLUDED
#define TUBESSTD_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;
typedef elmlist *addrRelasi;
struct elmlistRelasi{
    addrRelasi child;
    addrRelasi parent;
    addrRelasi next;
};
struct listRelasi{
    addrRelasi first;
};

void createList(List &L);
void insertfirst();
void insertLast()

#endif // TUBESSTD_H_INCLUDED
