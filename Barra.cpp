#include "Barra.h"
#include <iostream>


Barra::Barra(CaricatoreFile *s): QProgressBar() {
    setGeometry(80, 120, 450, 40);
    setRange(0, 100);
    setValue(0);
    subject = s;
    attach();
    setStyleSheet(
            "QProgressBar::chunk {"
            "background-color: lightgreen;"
            "}"

            "QProgressBar {"
            "background: white;"
            "border: 2px solid gray;"
            "text-align: center; "
            "font-size: 15px; "
            "border-radius: 5px; "
            "padding: 1px; "
            "}"
    );

}

Barra::~Barra(){
    detach();
};


void Barra::attach() {
    subject->addObserver(this);

}


void Barra::detach() {
    subject->removeObserver(this);
}


void Barra::update(int percentuale) {
    this->percentuale = percentuale;
    setValue(percentuale);
}

int Barra::getPerc() {
    return percentuale;
}

