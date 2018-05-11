//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
//#include"calisan.h"
#include"muhendis.h"
#include"error.h"
using namespace std;


int main ()
{
//    Calisan calisan("Mert", "Acel", "05437819000", "Kocaeli/Gebze", 1250); abstract olduğu çin hata
//    calisan.getBilgi();

    Muhendis muhendis("Mert", "Acel", "05437819000", "Kocaeli/Gebze", 1250);
    muhendis.getBilgi();
    muhendis.zam(200,3);
    muhendis.getBilgi();

    try
    {
        muhendis.avans(8000);
        muhendis.getBilgi();
    }
    catch (AvanasHata &a)
    {
        cout << "Avans Hata : " << a.limit() << endl;
    }

    try
    {
        muhendis.avans(3000);
    }
    catch (AvanasHata &a)
    {
        cout << "Avans Hata 2 : " << a.limit() << endl;
    }

    return 0;
}
