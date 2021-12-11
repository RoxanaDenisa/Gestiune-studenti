#ifndef FACULTATE_H
#define FACULTATE_H

#include "../../Student/src/Student.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Facultate
{
    char *nume;
    char *sectie;
    vector<Student> studenti;
public:
    Facultate();
    Facultate(char *n, char *s);
    //Copy constructor
    Facultate(const Facultate &);
    //destructor
    ~Facultate();
    void adaugaStudent(Student &student);
    void stergeStudent(char *nume);
    char *getNume();
    char *getSectie();
    void afiseazaStudenti();
    void afis(int i);

};

#endif //FACULTATE_H