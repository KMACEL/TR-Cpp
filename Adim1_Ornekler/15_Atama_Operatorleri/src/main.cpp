//============================================================================
// İsim        : 15_Atama_Operatorleri
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Atama Operatörleri
//============================================================================
#include<iostream>
using namespace std;

int main ()
{
    int a=0;

    // Tip 1
    a = a + 3;
    cout << "a = a + 3; Değeri : " << a << endl;
    // Tip 2
    a=0;
    a+=3;
    cout << "a+=3; Değeri : " << a << endl;

    // Tip 3
    a=0;
    ++a;
    cout << "++a Değeri : " << a << endl;

    // Tip 4
    a=0;
    a++;
    cout << "a++; Değeri : " << a << endl;

    // Tip 5
    a=0;
    while (a++ < 10)
    {
        cout << "A Değeri : " << a << endl;
    }

    cout << "-------------------------------" << endl;
    // Tip 6
    a=0;
    while (++a < 10)
    {
        cout << "A Değeri : " << a << endl;
    }

    return 0;
}
