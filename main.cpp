#include "src/Student/src/Student.hpp"
#include "src/Facultate/src/Facultate.hpp"
#include "src/Universitate/src/Universitate.hpp"
#include <iostream>
using namespace std;

int main(){
    char nume_s1[20] = "Stefania Steaburdea";
    Student student1(nume_s1, 10, 19);
    student1.display();

    char nume_s2[20] = "Mazilu Razvan";
    Student student2(nume_s2, 9, 18);
    student2.display();

    char nume_f1[30] = "Automatica si Calculatoare";
    char sectie1[40]="Calculatoare si Tehnologia Informatiei";
    Facultate ac(nume_f1, sectie1);
    ac.adaugaStudent(student1);
    ac.adaugaStudent(student2);
    ac.afiseazaStudenti();

    char nume_u1[] = "Politehnica";
    char localitate1[]="Timisoara";
    Universitate poli(nume_u1, localitate1);
    poli.adaugaFacultate(ac);
    poli.afiseazaFacultati();
}