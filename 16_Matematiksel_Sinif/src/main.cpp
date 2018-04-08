//============================================================================
// İsim        : 16_Matematiksel_Sİnif
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Matematiksel Sınıf
//============================================================================
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
    double amount;
    double principal;
    double rate= .05;
    cout << "setw " << setw(21) << "Test Yapıyoruz Şu An" << endl;
    cout << fixed << setprecision(2);

    for (unsigned int year = 1 ; year <= 10; ++year)
    {
        amount = principal * pow(1.0+rate,year);
        cout << setw(4) << year << setw(21) << amount << endl;
    }

    /*
    ceil(x) : yukarı yuvarla
    cos(x) : kosinus
    exp(x) : e üzeri x
    fabs(x) : mutlak değer
    floor(x) : aşağı yuvarla
    fmod(x,y) : x/y den kalan ondalık
    log(x) : x in e tabanında logaritması
    log10(x) : x in 10 tabanına logaritmaso
    pow(x,y) : x in y dereceden kuvveti
    sin(x) : kosinus
    sqrt(x) : x in karekökü
    tan(x) : ranjant
    */
    return 0;
}
