#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char *nume;
    int nota_admitere;
    int varsta;
public:
    //Constructor - lista de initializare
     Student(); 
    //Constructor
    Student(char *n,int nota_a, int v);
    //Copy constructor
    Student(const Student &obj);
     //Destructor
    ~Student();
    //gettere
    char *getNume();
    int getNotaAdmitere();
    int getVarsta();
    void display();
    //overloading display
     void display(int age);


};

#endif //STUDENT_H