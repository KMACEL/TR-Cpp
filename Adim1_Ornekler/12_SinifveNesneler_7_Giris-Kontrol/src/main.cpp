//============================================================================
// İsim        : 12_SinifveNesneler_7_Giris-Kontrol
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler 7 - Giris Kontrol
//============================================================================
#include<iostream>
#include"SelamlaSinif.h"
using namespace std;

int main(){
    SelamlaSinif selam("Merhaba Zalim Dolu Dünya");
    selam.mesajiGoster();

    selam.setSinifMesaji("Merhaba");

    cout << "Gelen : " << selam.getSinifMesaji() << endl ;
    return 0;
}
