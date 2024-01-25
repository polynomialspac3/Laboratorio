#ifndef PULSANTE_H
#define PULSANTE_H

#include <list>
#include <unistd.h>
#include <QPushButton>
#include "Subject.h"


class CaricatoreFile : public Subject, public QPushButton  {

private:
    std::list<Observer*> observers;

public:
    CaricatoreFile();
    virtual ~CaricatoreFile();
    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notifyAll(int percentuale) override;
    void carica(); // cambio di stato che l'interfaccia del Subject non ha



};




#endif