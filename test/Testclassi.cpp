
#include <qt/QtWidgets/QApplication>
#include "gtest/gtest.h"
#include "../CaricatoreFile.h"
#include "../Barra.h"


class pulsantetest : public ::testing::Test{
public:
    CaricatoreFile *p;
    Barra b = Barra(nullptr);
    //CaricatoreFile *cf = new CaricatoreFile;

    //Barra b (cf);

    pulsantetest(){
        auto *p = new CaricatoreFile();
        Barra b(p);

    }
};



TEST_F(pulsantetest, percentuale){

    b.update(42);
    ASSERT_EQ(42, b.getPerc());
};


TEST_F(pulsantetest, notifica) {

}

TEST_F(pulsantetest, aggiungiobs){
    Barra *b1 = new Barra(p);


};

TEST_F(pulsantetest, updatePercentuale){

};

int main(int argc, char **argv, char *argv2[]) {
    ::testing::InitGoogleTest(&argc, argv);

    QApplication a(argc, argv2);

    return RUN_ALL_TESTS();
}
