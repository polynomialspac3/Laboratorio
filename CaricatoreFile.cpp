#include "CaricatoreFile.h"
#include "QDebug"

CaricatoreFile::CaricatoreFile() : QPushButton(){
    setGeometry(200, 250, 180, 40);
    setText("Carica il File");
    setStyleSheet("QPushButton { background-color: green; "
                  "color: white; border: 2px solid darkblue; }"
                  "QPushButton:hover { background-color: lightgreen; }");

    connect(this, &QPushButton::clicked, this, &CaricatoreFile::carica);
};

CaricatoreFile::~CaricatoreFile(){

};

void CaricatoreFile::addObserver(Observer* o) {
    observers.push_back(o);
}

void CaricatoreFile::removeObserver(Observer* o) {
    observers.remove(o);
}

void CaricatoreFile::notifyAll(int percentuale) {
    for (auto o : observers) {
        o->update(percentuale);
    }
}

void CaricatoreFile::carica() {
    for (int i = 0; i<101; i++){
        usleep(100000);
        notifyAll(i);

    };

    //qDebug() << "Button Clicked!";
}





