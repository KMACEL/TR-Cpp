//============================================================================
// İsim        : 11_SinifveNesneler_6_Header-Arayuz
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler 6 - Header ve Arayüzler
//============================================================================
#include<iostream>
#include"SelamlaSinif.h"

using namespace std;

int main()
{
    SelamlaSinif("test").mesajiGoster();
    
    SelamlaSinif selamla("Merhaba Header");
    selamla.mesajiGoster();

    selamla.setSinifMesaji("Mesaj Değiştir");

    cout << "Yeni Selamlama Mesajı : " << selamla.getSinifMesaji() << endl ;
    return 0;
}
