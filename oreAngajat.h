#ifndef ORE_ANGAJAT_H
#define ORE_ANGAJAT_H

#include "angajat.h"
#include <iostream>
using namespace std;

class oreAngajat : public angajat {
public:
    oreAngajat(string, string, string, double, double);
    double getPaynet() const;
    double getPaybrut() const;
    double getPaybon() const;
    double getHours() const;
    void print() const;
    string getID() const;

    void setwage(int s) {
        wage = s;
    }
    int getwage() const {
        return wage;
    }

private:
    string id;
    double wage;
    double hours;
    mutable double net;
    mutable double brut;
    mutable double bon;
};
#endif


