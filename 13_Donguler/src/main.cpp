//============================================================================
// İsim        : 13_Donguler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Döngülerin Tanıtımı
//============================================================================
#include <iostream>
using namespace std;

int main()
{
    int sayac = 0;
    // While Döngüsü
    while (true)
    {

        cout << "Huhuhuuu Sonsuza Kadar Döneceğim" << endl;
        sayac++;
        if (sayac == 10)
        {
            cout << "Tüh Sayacı Unuttum" << endl;
            break;
        }
    }

    cout << "\n------------------------------------------\n"
         << endl;

    // For Döngüsü
    for (int i = 0; i < 10; ++i)
    {
        cout << "Bende For Döngüsüyüm" << endl;
    }

    cout << "\n------------------------------------------\n"
         << endl;

    volatile int sonsuz = 0;
    int sayac2 = 0;
    while (sonsuz == 0)
    {
        sayac2++;
        cout << "Sonsuza kadar dönencek. Gerçekten !" << endl;

        if (sayac2 == 10)
        {
            cout << "Yine sayacı unutu vermişim :( " << endl;
            sonsuz++;
        }
    }

    cout << "\n------------------------------------------\n"
         << endl;
    int karakter;
    while ((karakter = cin.get()) != EOF)
    {
        cout << "Karakter : " << karakter << endl;
    }

    return 0;
}
