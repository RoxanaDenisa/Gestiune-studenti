#include "Facultate.hpp"
 //Constructor - lista de initializare
Facultate::Facultate(){
    this -> nume = new char[strlen("") + 1];
    strcpy(this -> nume, ""); 
    this -> sectie = new char[strlen("") + 1];
    strcpy(this -> sectie, ""); 
} 
//Constructor
Facultate:: Facultate(char *n, char *s){
    nume=new char[strlen(n)+1];
    strcpy(nume,n);
    sectie=new char[strlen(s)+1];
    strcpy(sectie,s);
    cout<<"Constructor\n";
}
//Copy constructor
Facultate::Facultate(const Facultate &obj){
    
    nume=new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);
    sectie=new char[strlen(obj.sectie)+1];
    strcpy(sectie,obj.sectie);
    cout<<"Copy constructor\n";
                    
}
 //Destructor
Facultate::~Facultate(){
    cout<<"Freeing\n";
    if (nume)
        delete nume;
    if(sectie)
        delete sectie;

}
void Facultate::adaugaStudent(Student &student)
{
    studenti.push_back(student);
}

void Facultate::stergeStudent(char *nume)
{
    int i = 0;
    for (Student s : studenti)
    {
        if (strcmp(s.getNume(), nume) == 0)
        {
            studenti.erase(studenti.begin() + i);
            break;
        }

        i++;
    }
}
char * Facultate::getNume(){
    return this->nume;
}
char * Facultate:: getSectie(){
    return this->sectie;
}
void Facultate::afiseazaStudenti()
{
    for (Student s : studenti)
    {
        cout << s.getNume() << endl;
    }
}
void Facultate::afis(int i){
     studenti.at(i).display();
}