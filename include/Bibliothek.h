#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Kategorie
{
public:
    string Thema;
    string Code;

    Kategorie();
    Kategorie(string, string);
};

class Buch
{
public:
    string Sprache;
    string Titel;
    string Autor;
    string ISBN;
    bool ausgeliehen;

    Buch();
    Buch(string, string, string, string);

    bool ausleihen();
    bool zurueckgeben();

    string toString();
};

class Person
{
public:
    int LeserNr;
    string Name;
    vector<Buch> ListeBuecher;

    Person();
    Person(int,string);

    bool ausleihen(Buch&);
    bool zurueckgeben(Buch&);

    string toString();
};