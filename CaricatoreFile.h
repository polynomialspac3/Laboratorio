#ifndef PULSANTE_H
#define PULSANTE_H

#include <list>
#include <unistd.h>
#include <QPushButton>
#include "Subject.h"
#include "File.h"


class CaricatoreFile : public Subject, public QPushButton  {

private:
    std::list<Observer*> observers;
    std::list<File*> files;
    int caricato = 0;

public:
    CaricatoreFile();
    virtual ~CaricatoreFile();
    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notifyAll(int percentuale, int numFile) override;
    void carica(); // cambio di stato che l'interfaccia del Subject non ha
    void addFile(File* f);

    //metodi per il testing
    int getNumeroObserver() const;

};




#endif