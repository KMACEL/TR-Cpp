//============================================================================
// İsim        : 09_Degiskenler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Değişkenleri anlamak ve kullanmak
//============================================================================
#include <iostream>
#include <string>

using namespace std;
int main()
{
    // Sayısal İfadeler
    int sayisalIfadeler = 285;
    cout << "Sayısal İfade : " << sayisalIfadeler << endl;

    // Ondalıklı İfadeler
    float ondalikIfadeler = 0.25;
    cout << "Ondalıklı İfade : " << ondalikIfadeler << endl;

    // Sözel İfadeler
    string sozelIfadeler = "Merhabalar Dünya";
    cout << "Sözel İfade : " << sozelIfadeler << endl;

    // karaktersel İfadeler
    char karakterselIfadeler = 'v';
    cout << "Karaktersel İfade : " << karakterselIfadeler << endl;

    cout << "-------------------------------------------" << endl;
    sayisalIfadeler = 172;
    ondalikIfadeler = 286.147;
    sozelIfadeler = "Nasıl gidiyorr...";
    karakterselIfadeler = 'T';
    //Hepsi
    cout << "\nSayısal İfaden : " << sayisalIfadeler << endl
         << "Ondalıklı İfadeler : " << ondalikIfadeler << endl
         << "Sözel İfadeler : " << sozelIfadeler << endl
         << "Karaktersel İfadeler " << karakterselIfadeler << endl;

    return 0;
}
/*
    long double x;
    double x;
    float x;
    unsigned long long int x;   | unsigned long long x;
    long long int x;            | long long int x;
    unsigned long int x;        | unsigned long x;
    long int x;                 | long x;
    unsigned int x;
    int x;
    unsigned short int x;       | unsigned short;
    short int x;
    unsigned char;
    char x;
    signed char x;
    bool x;
  
    unsigned long long l1 = 18446744073709550592ull; // C++11
    unsigned long long l2= 18'446'744'073'709'550'592llu; // C++14
    unsigned long long l3= 1844'6744'0737'0955'0592uLL; // C++14
    unsigned long long l4= 184467'440737'0'95505'92LLU; // C++14

*/