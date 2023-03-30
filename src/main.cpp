#include <iostream>
#include "Bibliothek.h"
using namespace std;

int main()
{
    system("cls");
    Kategorie k;
    Kategorie k1("Technik", "Te");

    Buch b;
    Buch b1("xxyy", "Deutsch", "Mathe", "345-3456-234");

    std::cout << k.Thema << "-" << k.Code << endl;
    std::cout << k1.Thema << "-" << k1.Code << endl;

    cout << b1.toString() << endl;
    if (b1.ausleihen() == false)
        cout << "Das Buch " << b1.toString() << " ist schon ausgeliehen!" << endl;
    if (b1.zurueckgeben() == false)
        cout << "Das Buch " << b1.toString() << " ist schon ausgeliehen!" << endl;
    else
        cout << "Das Buch " << b1.toString() << " ist korrekt zurueckgegeben worden!" << endl;

    if (b1.zurueckgeben() == false)
        cout << "Das Buch " << b1.toString() << " ist nicht ausgeliehen!" << endl;
    else
        cout << "Das Buch " << b1.toString() << " ist korrekt zurueckgegeben worden!" << endl;

    Person Alessio(32, "Alessio Qoglione");
    cout << Alessio.toString() << endl;

    Alessio.ausleihen(b1);
    if (b1.ausgeliehen == true)
        cout << "Das Buch " << b1.toString() << " ist ausgeliehen!" << endl;
    else
        cout << "ERRROR!" << endl;

    Alessio.zurueckgeben(b1);
    if (b1.ausgeliehen == false)
        cout << "Das Buch " << b1.toString() << " wurde schon zurueckgegeben!" << endl;
}