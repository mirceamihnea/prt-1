#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <iostream>
using namespace std;

class angajat {
public:
    angajat();
    angajat(string, string);
    void print() const;
protected:
    string firstName;
    string lastName;
};
#endif


