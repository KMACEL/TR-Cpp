//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include <iostream>
#include <string>
#include "hayvan.h"
#include "kedi.h"
#include "kopek.h"
using namespace std;

void sesCikar(Hayvan);

int main()
{
    Kopek kopek;
    kopek.setSes("Hav Hav");

    Kedi kedi;
    kedi.setSes("miyaaav");

    sesCikar(kedi);
    return 0;
}

void sesCikar(Hayvan h)
{
    cout << "Ses : " << h.getSes() << endl;
}
