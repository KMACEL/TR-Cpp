//============================================================================
// İsim        : 10_Siniflar_Genel_Tekrar_2
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler
//============================================================================
#include <iostream>
#include "calisan.h"
using namespace std;

int main()
{
    Calisan mert;
    mert.getBilgi();

    Calisan kubra("Kübra");
    kubra.getBilgi();

    Calisan uraz("Uraz","Acel");
    uraz.getBilgi();

    Calisan bilge;
    bilge.setIsim("Bilge");
    bilge.setSoyIsim("Acel");
    bilge.setTelefon("05437811111");
    bilge.setAdres("Gebze");
    bilge.setMaas(5000);
    bilge.getBilgi();


    return 0;
}
