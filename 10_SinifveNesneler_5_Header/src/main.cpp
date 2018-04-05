//============================================================================
// İsim        : 10_SinifveNesneler_5_Header
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler 5 - Header
//============================================================================
#include<iostream>
#include"SelamlaSinif.h"
using  namespace std;
int main()
{
    SelamlaSinif selamla("Merhaba Header");
    selamla.mesajiGoster();

    selamla.setSinifMesaji("Mesaj Değiştir");

    cout << "Yeni Selamlama Mesajı : " << selamla.getSinifMesaji() << endl ;
    return 0;
}
