#include "Universitate.hpp"
 //Constructor - lista de initializare
Universitate::Universitate(){
    this -> nume = new char[strlen("") + 1];
    strcpy(this -> nume, ""); 
    this -> localitate = new char[strlen("") + 1];
    strcpy(this -> localitate, ""); 
} 
//Constructor
Universitate:: Universitate(char *n, char *l){
    nume=new char[strlen(n)+1];
    strcpy(nume,n);
    localitate=new char[strlen(l)+1];
    strcpy(localitate,l);
    cout<<"Constructor\n";
}
//Copy constructor
Universitate::Universitate(const Universitate &obj){
    
    nume=new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);
    localitate=new char[strlen(obj.localitate)+1];
    strcpy(localitate,obj.localitate);
    cout<<"Copy constructor\n";
                    
}
 //Destructor
Universitate::~Universitate(){
    cout<<"Freeing\n";
    if(nume)
        delete nume;
    if(localitate)
        delete localitate;

}
void Universitate::adaugaFacultate(Facultate &facultate)
{
    facultati.push_back(facultate);
}

void Universitate::stergeFacultate(char *nume)
{
    int i = 0;
    for (Facultate f : facultati)
    {
        if (strcmp(f.getNume(), nume) == 0)
        {
            facultati.erase(facultati.begin() + i);
            break;
        }

        i++;
    }
}
char * Universitate::getNume(){
    return this->nume;
}
char * Universitate:: getLocalitate(){
    return this->localitate;
}
void Universitate::afiseazaFacultati()
{
    for (Facultate f : facultati)
    {
        cout << f.getNume() << endl;
    }
}
