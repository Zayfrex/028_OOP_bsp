#include <iostream>
#include "Bibliothek.h"
using namespace std;

Kategorie::Kategorie()
{
    Thema = "";
    Code = "";
}
/**
 * @brief Construct a new Kategorie object
 *
 * @param Thema
 * @param Code
 */
Kategorie::Kategorie(string Thema, string Code)
{
    this->Thema = Thema;
    this->Code = Code;
}

Buch::Buch()
{
    Autor = "";
    Sprache = "";
    Titel = "";
    ISBN = "";
    ausgeliehen = false;
}

Buch::Buch(string Autor, string Sprache, string Titel, string ISBN)
{
    this->Autor = Autor;
    this->Sprache = Sprache;
    this->Titel = Titel;
    this->ISBN = ISBN;
    ausgeliehen = false;
}

bool Buch::ausleihen()
{
    // Buch ist schon ausgeliehn: Fehler
    if (ausgeliehen)
        return false;
    // Ok, ich kannn das Buch ausleihen
    ausgeliehen = true;
    return true;
}

bool Buch::zurueckgeben()
{
    // Buch ist schon wieder da : Fehler
    if (ausgeliehen)
        return false;
    // Ok, ich  kann das Buch zurückgeben
    ausgeliehen = false;
    return true;
}

string Buch::toString()
{
    return "Autor: " + Autor + ",Sprache: " + Sprache + ", Titel: " + Titel + ",ISBN: " + ISBN;
}

Person::Person()
{
    LeserNr = 0;
    Name = "";
}

Person::Person(int LeserNr, string Name)
{
    this->LeserNr = LeserNr;
    if (Name.length() < 1)
    {
        cout << "Fehler in Name: zu kurz" << endl;
        return;
    }
    this->Name = Name;
}

bool Person::ausleihen(Buch &einbuch)
{
    if (einbuch.ausgeliehen == false)
    {
        // ausleihen möglich
        einbuch.ausgeliehen == true;
        ListeBuecher.push_back(einbuch);
        return true;
    }
    else
    {
        // ausleihen nich möglich
        return false;
    }
}

bool Person::zurueckgeben(Buch &einbuch)
{
    if (einbuch.ausgeliehen == true)
    {
        einbuch.ausgeliehen == false;
        vector<Buch>::iterator it;
        
        for (it=ListeBuecher.begin();it!=ListeBuecher.end();it++)
        {
            if(it->ISBN==einbuch.ISBN)
            {
                ListeBuecher.erase(it);
                break;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

string Person::toString()
{
    return "Leser: " + Name + ", Nr: " + to_string(LeserNr);
}