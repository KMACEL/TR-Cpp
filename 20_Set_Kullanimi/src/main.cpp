//============================================================================
// İsim        : 20_Set_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Set Giris
//============================================================================
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set<int> sayilar;
    sayilar.insert(6);
    sayilar.insert(8);
    sayilar.insert(12);
    sayilar.insert(5);
    sayilar.insert(2);

    for (set<int>::iterator it = sayilar.begin(); it != sayilar.end(); it++)
    {
        cout << "Sayilar : " << *it << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    set<int>::iterator itBul = sayilar.find(8);

    if (itBul != sayilar.end())
    {
        cout << "Bulundu : " << *itBul << endl;
    }

    if (sayilar.count(6))
    {
        cout << "Bulundu : " << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    return 0;
}
