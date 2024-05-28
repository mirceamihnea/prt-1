#include "angajat.h"
#include <iostream>
using namespace std;

angajat::angajat() {
    firstName = "";
    lastName = "";
}

angajat::angajat(string fn, string ln) {
    firstName = fn;
    lastName = ln;
}

void angajat::print() const {
    cout << "Angajatul " << firstName << " " << lastName << endl;
}


