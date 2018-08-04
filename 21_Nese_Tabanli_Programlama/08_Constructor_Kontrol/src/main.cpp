//============================================================================
// İsim        : 08_Constructor_Kontrol
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler
//============================================================================
#include <iostream>
#include "SelamlaSinif.h"
using namespace std;

int main()
{
    SelamlaSinif selam("Merhaba Zalim Dolu Dünya");
    selam.mesajiGoster();

    selam.setSinifMesaji("Merhaba");

    cout << "Gelen : " << selam.getSinifMesaji() << endl;
    return 0;
}
