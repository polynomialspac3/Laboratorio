
#include <qt/QtWidgets/QApplication>
#include "gtest/gtest.h"
#include "../CaricatoreFile.h"
#include "../Barra.h"


class pulsantetest : public ::testing::Test{
public:
    CaricatoreFile *p = new CaricatoreFile();
    QMainWindow window;
    Barra b = Barra(p, window);

    CaricatoreFile *cf = new CaricatoreFile();
    Barra b1 = Barra (cf, window);
    Barra b2 = Barra(cf, window);
    Barra b3 = Barra(cf, window);
    Barra b4 = Barra(cf, window);
    Barra b5 = Barra(cf, window);

};

class ObserverTest : public Observer{
public:
    void update(int percentuale, int numFile){
        this->percentuale = percentuale;
        this->numF = numFile;
    }

    void attach(){}

    void detach(){}

    int getPerc(){
        return percentuale;
    }

    int getNum(){
        return numF;
    }

private:
    int percentuale;
    int numF;

};

TEST(ObserverTest, aggiorna){
    ObserverTest ot;
    ot.update(22, 5);

    ASSERT_EQ(22, ot.getPerc());
    ASSERT_EQ(5, ot.getNum());

}

TEST_F(pulsantetest, percentuale){
    p->notifyAll(42, 1);
    ASSERT_EQ(42, b.getPerc());

    b.update(42, 1);
    ASSERT_EQ(42, b.getPerc());

};


TEST_F(pulsantetest, removeObs) {
    cf->removeObserver(&b3);

    ASSERT_EQ(4, cf->getNumeroObserver());
}

TEST_F(pulsantetest, detachObs){
    b4.detach();
    b2.detach();

    ASSERT_EQ(3, cf->getNumeroObserver());
};



int main(int argc, char **argv, char *argv2[]) {
    ::testing::InitGoogleTest(&argc, argv);

    QApplication a(argc, argv2);

    return RUN_ALL_TESTS();
}
