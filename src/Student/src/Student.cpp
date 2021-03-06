#include "Student.hpp"
 //Constructor - lista de initializare
Student::Student():nota_admitere(0), varsta(0){
    this -> nume = new char[strlen("") + 1];
    strcpy(this -> nume, ""); 
} 

//Constructor
Student:: Student(char *n,int nota_a, int v){
    nume=new char[strlen(n)+1];
    strcpy(nume,n);
    nota_admitere=nota_a;
    varsta=v;
    cout<<"Constructor\n";
}

//Copy constructor
Student::Student(const Student &obj){
    varsta=obj.varsta;
    nota_admitere=obj.nota_admitere;
    nume=new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);
    cout<<"Copy constructor\n";
                    
}
 //Destructor
Student::~Student(){
    cout<<"Freeing\n";
    if(nume)
        delete nume;

}
char * Student::getNume(){
    return this->nume;
}
int Student:: getNota(){
    return this->nota_admitere;
}
int Student:: getVarsta(){
    return this->varsta;
}
void Student:: display(){
    
    cout<<"Studentul "<<getNume()<<" a obtinut nota "<<getNota()<<"\n";
    
}
void Student:: display(int age){
    cout<<"Studentul "<<getNume()<< " cu varsta de "<<getVarsta()<<" a obtinut nota "<<getNota()<<"\n";
}

//copy assignment operator
Student& Student::operator=(const Student& s)
{
    //check for self-assign
    if(this == &s) {
        //identity test
        cout<<"self-assign"<<"\n";
        return *this;
    }
    this -> nume =new char[strlen(s.nume)+1];
    strcpy(this->nume, s.nume);
    this -> nota_admitere = s.nota_admitere;
    this -> varsta = s.varsta;
    
    return *this;
}