//============================================================================
// İsim        : 06_Header_Kullanimi
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
    SelamlaSinif selamla("Merhaba Header");
    selamla.mesajiGoster();

    selamla.setSinifMesaji("Mesaj Değiştir");

    cout << "Yeni Selamlama Mesajı : " << selamla.getSinifMesaji() << endl;
    return 0;
}
