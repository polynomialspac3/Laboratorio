#include <QApplication>
#include <QMainWindow>
#include "CaricatoreFile.h"
#include "Barra.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QMainWindow finestra;
    finestra.setWindowTitle("Barra di Progresso");
    finestra.setFixedSize(600, 400);

    CaricatoreFile *cf = new CaricatoreFile;
    cf->setParent(&finestra);

    Barra b (cf);
    b.setParent(&finestra);


    finestra.show();

    return a.exec();
}
