//============================================================================
// İsim        : 14_Donguler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Donguler
//============================================================================
#include<iostream>
using namespace std;

int main ()
{
    int sayac=0;
    // While
    while(true){

        cout << "Huhuhuuu Sonsuza Kadar Döneceğim"<< endl;
        sayac++;
        if (sayac ==10){
            cout << "Tüh Sayacı Unuttum" << endl ;
            break;
        }
    }

    cout << "\n\n" << endl ;
    for (int i = 0; i < 10; ++i)
    {
        cout << "Bende For Döngüsüyüm" << endl ;
    }

    int karakter;
    while((karakter=cin.get()) != EOF)
    {
        cout << "Karakter : " << karakter << endl ;
    }

    return 0;
}
