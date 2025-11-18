#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>

using namespace std;
typedef penumpang infotype;
struct penumpang{
} ;
typedef elmlist *address;
struct elmlistChild{
    infotype info;
    address next;
    address prev;
};
struct listChild{
    address first;
    address last;
};

#endif // CHILD_H_INCLUDED
