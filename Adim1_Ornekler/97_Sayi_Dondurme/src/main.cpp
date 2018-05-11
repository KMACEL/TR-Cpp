//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
using namespace std;

int main ()
{
    int sayi;
    int son;
    int donusum;
    cout << "Lütfen tersini alacağınız sayıyı giriniz : " ;
    cin >> sayi;

    while(sayi > 0)
    {
        son = sayi % 10;
        sayi= sayi / 10;
        donusum = donusum * 10 + son;
    }
    cout <<  donusum << endl;
    return 0;
}
