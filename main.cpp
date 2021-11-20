#include "src/Student/src/Student.hpp"
//#include "src/Facultate/src/Facultate.hpp"
//#include "src/Universitate/src/Universitate.hpp"
#include <iostream>
using namespace std;

int main(){
    char nume1[20] = "Stefania Steaburdea";
    Student student1(nume1, 10, 19);
    student1.display();
}