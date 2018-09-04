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
    SelamlaSinif selamla(55);
    selamla.mesajiGoster();

    uint64_t test = 24;
    SelamlaSinif selamla2(test);
    selamla2.mesajiGoster();

    uint64_t test2 = 62;
    SelamlaSinif selamla3{test2};
    selamla3.mesajiGoster();

    /*int test3 = 74;
    SelamlaSinif selamla4{test3};
    selamla4.mesajiGoster();*/

    SelamlaSinif selamla5(selamla5.getSelamla());
    selamla5.mesajiGoster();

    return 0;
}
