//============================================================================
// İsim        : 07_Header_Sinif
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
    SelamlaSinif("test").mesajiGoster();

    SelamlaSinif selamla("Merhaba Header");
    selamla.mesajiGoster();

    selamla.setSinifMesaji("Mesaj Değiştir");

    cout << "Yeni Selamlama Mesajı : " << selamla.getSinifMesaji() << endl;
    return 0;
}
