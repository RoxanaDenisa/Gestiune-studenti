#ifndef LOCK_H
#define LOCK_H

#include <iostream>
#include <string.h>
#include <mutex>
using namespace std;

class Lock
{
private:
    mutex *mutexPtr;
    
public:
    //Constructor
    explicit Lock();

    //Copy constructor = folosesc keywordul delete pentru a evita ca functia generata de compilator sa nu fie apelata
    Lock(const Lock &obj)=delete;

     //Destructor
    ~Lock();

    void lock();
    void unlock();

};

#endif //LOCK_H