#ifndef BARRA_H
#define BARRA_H

#include <QProgressBar>
#include <QLabel>
#include <QMainWindow>
#include "Observer.h"
#include "CaricatoreFile.h"


class Barra : public Observer, public QProgressBar, public QLabel {
public:
    Barra(CaricatoreFile *s, QMainWindow &finestra);

    ~Barra();
    virtual void update(int percentuale, int numFile) override;
    virtual void attach() override;
    virtual void detach() override;

    //metodi per il testing
    int getPerc() const;

private:
    int percentuale;
    CaricatoreFile *subject;
};

#endif
