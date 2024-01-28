#include <QApplication>
#include <QMainWindow>
#include <QLabel>
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

    Barra b (cf, finestra);

    File *f1 = new File(200);
    File *f2 = new File(330);
    File *f3 = new File(203);
    File *f4 = new File(330);
    File *f5 = new File (394);
    File *f6 = new File(310);
    File *f7 = new File (180);
    File *f8 = new File(310);
    File *f9 = new File (180);
    cf->addFile(f1);
    cf->addFile(f2);
    cf->addFile(f3);
    cf->addFile(f4);
    cf->addFile(f5);
    cf->addFile(f6);
    cf->addFile(f7);
    cf->addFile(f8);
    cf->addFile(f9);


    finestra.show();

    return a.exec();
}
