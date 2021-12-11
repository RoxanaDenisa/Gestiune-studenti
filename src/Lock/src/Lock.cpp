#include "Lock.hpp"

//Constructor
Lock:: Lock(){
    mutexPtr=new mutex;
    mutexPtr->unlock();
    cout<<"Constructor\n";
}

 //Destructor
Lock::~Lock(){
    cout<<"Freeing\n"; 
    mutexPtr->unlock();
   

}
void Lock:: lock(){
    
    mutexPtr->lock();
    cout<<"lock\n";
    
}
void Lock:: unlock(){
    mutexPtr->unlock();
    cout<<"unlock\n";
    
}
