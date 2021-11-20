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
    delete nume;

}
char * Student::getNume(){
    return this->nume;
}
int Student:: getNotaAdmitere(){
    return this->nota_admitere;
}
int Student:: getVarsta(){
    return varsta;
}
void Student:: display(){
    
    cout<<"Studentul "<<getNume()<<" a obtinut nota "<<getNotaAdmitere()<<"\n";
    
}
void Student:: display(int age){
    cout<<"Studentul "<<nume<< " cu varsta de "<<varsta<<" ani a obtinut nota "<<nota_admitere<<"\n";
}