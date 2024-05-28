#include "oreAngajat.h"
#include <iomanip>
using namespace std;

oreAngajat::oreAngajat(string fn, string ln, string id, double w, double h) {
    firstName = fn;
    lastName = ln;
    this->id = id;
    wage = w;
    hours = h;
}

void oreAngajat::print() const {
    angajat::print();
    cout << "ID: " << id << endl;
    if (hours > 200) {
        cout << "(Acest angajat a lucrat peste program, primind astfel o marire a salariului de 15%)" << " " << endl;
        const_cast<oreAngajat*>(this)->setwage((15 * wage) / 100 + wage);
    }
    cout << "este platit net cu "
        << setiosflags(ios::fixed | ios::showpoint)
        << setprecision(2) << getPaynet() << " Lei" << endl;

    cout << "este platit brut cu "
        << setiosflags(ios::fixed | ios::showpoint)
        << setprecision(3) << getPaybrut() << " Lei" << endl;

    cout << "numarul bonurilor de masa sunt "
        << setiosflags(ios::fixed | ios::showpoint)
        << setprecision(4) << getPaybon() << " Lei" << endl;
}

double oreAngajat::getPaynet() const {
    net = wage * hours;
    return net;
}

double oreAngajat::getPaybrut() const {
    brut = float(net * 40 / 100);
    return brut;
}

double oreAngajat::getPaybon() const {
    bon = float(hours / 8);
    return bon;
}

string oreAngajat::getID() const {
    return id;
}

double oreAngajat::getHours() const {
    return hours;
}

