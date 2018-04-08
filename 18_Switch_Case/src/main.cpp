//============================================================================
// İsim        : 18_Switch_Case
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Switch Case
//============================================================================
#include<iostream>
using namespace std;

int main ()
{
    int a = 10;

    switch (a)
    {
    case 0:
        cout << "a : " << 0 << endl;
        break;
    case 10:
        cout << "a : " << 10 << endl;
        break;
    default:
        cout << " a '0' ve '10' değil" << endl ;
        break;
    }
    return 0;
}
