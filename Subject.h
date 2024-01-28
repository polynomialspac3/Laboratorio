#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"



class Subject {
public:
    virtual void addObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyAll(int percentuale, int numFile) = 0;

};




#endif
