//============================================================================
// İsim        : 20_Depolama_Omur
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Depolama Ömürleri
//============================================================================
#include<iostream>

using namespace std;

int main ()
{
    // Ram de hız kazandıran bir türdür.
    // Her değişkende kullanılması önerilmez.
    register unsigned int test = 5 ;
    cout << "test : " << test << endl;

    static signed int test2 =2;
    return 0;
}
