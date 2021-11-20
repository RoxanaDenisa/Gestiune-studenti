#ifndef UNIVERSITATE_H
#define UNIVERSITATE_H

#include "../../Facultate/src/Facultate.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Universitate
{
    char *nume;
    char *localitate;
    vector<Facultate> facultati;
public:
    Universitate();
    Universitate(char *n, char *l);
    //Copy constructor
    Universitate(const Universitate &);
    //destructor
    ~Universitate();
    void adaugaFacultate(Facultate &facultate);
    void stergeFacultate(char *nume);
    char *getNume();
    char *getLocalitate();
    void afiseazaFacultati();

};

#endif //UNIVERSITATE_H