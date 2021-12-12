#include "src/Student/src/Bursier.hpp"
#include "src/Facultate/src/Facultate.hpp"
#include "src/Universitate/src/Universitate.hpp"
#include "src/Lock/src/Lock.cpp"
#include <iostream>
#include <memory>
#include <thread>
using namespace std;
Lock l;
Student s;
char nume_f1[30] = "Automatica si Calculatoare";
char sectie1[40]="Calculatoare si Tehnologia Informatiei";
Facultate f=Facultate (nume_f1, sectie1);
int numar;
void adaugare_student(){
    char n[20];
    int nota;
    int varsta;
    int count=0;
    
    while(count<numar){
        
        l.lock();
        cout<<"Introduceti numele ";
        cin>>n;        
        cout<<"Nota ";
        cin>>nota;
        cout<<"Varsta ";
        cin>>varsta;
        s=Student(n,nota,varsta);
        f.adaugaStudent(s);
        l.unlock();
        count++;
        }

    }

void afisare(){
    int i=0;
    while (i<numar){
       
        l.lock();
        f.afis(i);
        l.unlock();
        i++;
    }

}
int main(){
/*    char nume_s1[20] = "Stefania Farcas";
    Student student1(nume_s1, 10, 19);
    student1.display();

    char nume_s2[20] = "Ionescu Razvan";
    Student student2(nume_s2, 9, 18);
    student2.display();

    char nume_s3[20] = "Ionete Georgia";
    Student student3(nume_s3, 8, 18);
    student3.display();

    //Atribuire inlantuita - copy assignment operator
    student1=student2=student3;
    student1.display();

    //self-assign
    student1=student1;
    student1.display();
    
    char nume4[20] = "Ioana Popescu";
    Bursier bursier1(nume4, 10, 18, 1000);
    bursier1.displayBursier();

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
*/
    char nume_s1[20] = "Stefania Farcas";
    char nume_s2[20] = "Ionescu Razvan";
    unique_ptr<Student> loc_cazare_camin = make_unique<Student>(nume_s1, 9, 20);
    shared_ptr<Student> situatie_secretara;
    shared_ptr<Student> situatie_profesor = make_shared<Student>(nume_s2, 10, 21);
    situatie_secretara=situatie_profesor;
    cout<<situatie_secretara->getNota()<<"\n";

    cout<<"Dati numarul de studenti pe care vreti sa ii adaugati ";
    cin>>numar;
    thread s1(adaugare_student);
    thread s2(afisare);
    s1.join();
    s2.join();
}