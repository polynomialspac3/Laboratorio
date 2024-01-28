#include "Barra.h"
#include <iostream>


Barra::Barra(CaricatoreFile *s, QMainWindow &finestra): QProgressBar(), QLabel()  {
    QProgressBar::setGeometry(80, 120, 450, 40);
    QProgressBar::setRange(0, 100);
    QProgressBar::setValue(0);
    QProgressBar::setParent(&finestra);
    subject = s;
    attach();
    QProgressBar::setStyleSheet(
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
    QLabel::setParent(&finestra);
    QLabel::setGeometry(200, 70, 400, 40);
    QLabel::setText("sto caricando il  0" "  -esimo file");
    QLabel::setStyleSheet(
            "QLabel{"
            "text-align: center;"
            "font-size: 15px; "
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


void Barra::update(int percentuale, int numFile) {
    this->percentuale = percentuale;
    QProgressBar::setValue(percentuale);
    QLabel::setText("sto caricando il  " + QString::number(numFile) + " -esimo file");
}

int Barra::getPerc() {
    return percentuale;
}

