//============================================================================
// İsim        : 17_Static_Donusumler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Static Dönüşümler
//============================================================================
#include<iostream>
#include <typeinfo>
#include<iomanip>
using namespace std;
 // acehreli.org/turkcecpp/tur_donusumu_islecleri.html
int main ()
{
    int sayisal = 7;
    double ondalik = 3.25;

    double sayisaldanCevirilenOndalik;
    int ondaliktanCevirilenOndalik;

    sayisaldanCevirilenOndalik = static_cast<double>(sayisal)/2;
    cout << typeid(sayisaldanCevirilenOndalik).name() << " : " << setprecision(4)<< sayisaldanCevirilenOndalik << endl;

    ondaliktanCevirilenOndalik = static_cast<int>(ondalik);
    cout << typeid(ondaliktanCevirilenOndalik).name() << " : " << ondaliktanCevirilenOndalik << endl;

    return 0;
}
