#ifndef BARRA_H
#define BARRA_H

#include <QProgressBar>
#include "Observer.h"
#include "CaricatoreFile.h"


class Barra : public Observer, public QProgressBar {
public:
    Barra(CaricatoreFile *s);

    ~Barra();
    virtual void update(int percentuale) override;
    virtual void attach() override;
    virtual void detach() override;

    virtual int getPerc();

private:
    int percentuale;
    CaricatoreFile *subject;
};

#endif
