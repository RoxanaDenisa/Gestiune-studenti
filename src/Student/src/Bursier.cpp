#include "Bursier.hpp"

Bursier::Bursier(char *n,int nota_a, int v, int valoare_bursa)
    : Student(n,nota_a, v),
      valoare_bursa(valoare_bursa) {}

Bursier::Bursier(const Bursier& obj)
: Student(obj), // invoke base class copy ctor
valoare_bursa(obj.valoare_bursa){}

Bursier& Bursier::operator=(const Bursier& obj)
{
cout<<"Bursier copy assignment operator ";
Student::operator=(obj); // assign base class parts
valoare_bursa = obj.valoare_bursa;
return *this;
}

int Bursier::getValoareBursa()
{
    return this->valoare_bursa;
}
void Bursier::displayBursier()
{
     cout<<"Studentul "<<getNume()<<" a obtinut nota "<<getNotaAdmitere()<< " avand bursa de "<<getValoareBursa()<<"lei"<<"\n";
}

