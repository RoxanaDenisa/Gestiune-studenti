#ifndef BURSIER_H
#define BURSIER_H
#include <iostream>
#include "Student.hpp"
using namespace std;

class Bursier : public Student
{
private:
    int valoare_bursa;

    
public:
    Bursier(char *n,int nota_a, int v, int s);
    Bursier(const Bursier &);
    Bursier& operator=(const Bursier& obj);
    int getValoareBursa();
    void displayBursier();
    
};

#endif //BURSIER_H