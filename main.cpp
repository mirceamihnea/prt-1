#include "oreAngajat.h"
#include <vector>
#include <string>
using namespace std;

void findAndPrintByMinHours(const vector<oreAngajat>& angajati, double minHours) {
    bool found = false;
    for (const auto& angajat : angajati) {
        if (angajat.getHours() >= minHours) {
            angajat.print();
            found = true;
        }
    }
    if (!found) {
        cout << "Nu au fost gasiti angajati cu ore egale sau mai multe decât " << minHours << " ore." << endl;
    }
}
void findAndPrintByID(const vector<oreAngajat>& angajati, const string& id) {
    for (const auto& angajat : angajati) {
        if (angajat.getID() == id) {
            angajat.print();
            return;
        }
    }
    cout << "Nu a fost gasit un angajat cu ID-ul " << id << "." << endl;
}

int main() {
    vector<oreAngajat> angajati = {
        oreAngajat("Andreea", "Placinta", "ID00", 45, 160),
        oreAngajat("Munteanu", "Dan", "ID01", 38, 220),
        oreAngajat("Stefania", "Voinea", "ID02", 33, 190),
        oreAngajat("Adriana", "Manolache", "ID03", 26, 220),
        oreAngajat("Edi", "Rotaru", "ID04", 30, 200),
        oreAngajat("Bianca", "Frangolea", "ID05", 27, 210),
        oreAngajat("Ciprian", "Chirica", "ID06", 28, 230),
        oreAngajat("Cristian", "Chirica", "ID07", 22, 238),
        oreAngajat("Vlad", "Ungureanu", "ID08", 24, 227),
        oreAngajat("Alexandru", "Ceocan", "ID09", 18, 240),
        oreAngajat("Oana", "Ghilusca", "ID10", 26, 240)
    };

    char optiune;
    cout << "Alegeti optiunea: " << endl;
    cout << "1. Cautati dupa numarul minim de ore" << endl;
    cout << "2. Cautati dupa ID" << endl;
    cin >> optiune;

    if (optiune == '1') {
        double minHours;
        cout << "Introduceti numarul minim de ore: ";
        cin >> minHours;
        findAndPrintByMinHours(angajati, minHours);
    }
    else if (optiune == '2') {
        string id;
        cout << "Introduceti ID-ul angajatului: ";
        cin >> id;
        findAndPrintByID(angajati, id);
    }
    else {
        cout << "Optiune invalida." << endl;
    }

    return 0;
}
