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

void CaricatoreFile::notifyAll(int percentuale, int numFile) {
    for (auto o : observers) {
        o->update(percentuale, numFile);
    }
}

void CaricatoreFile::carica() {
    int totSize = 0;
    for (auto f : files) {
        totSize += f->getSize();
    }
    int i =0 ;
    for (auto f : files){
        i++;
        bitCar += f->getSize();
        int percentuale = (bitCar * 100) / totSize;
        notifyAll(percentuale, i);
        usleep(90000);
    }

}

void CaricatoreFile::addFile(File* f) {
    files.push_back(f);
};




