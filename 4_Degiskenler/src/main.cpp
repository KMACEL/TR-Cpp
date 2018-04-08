//============================================================================
// İsim        : 4_Degiskenler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Değişkenler
//============================================================================
#include<iostream>
#include<string>
using namespace std;
int main(){
    int sayisalIfadeler = 0;
    float ondalikIfadeler = 0.0;
    string sozelIfadeler = "";
    char karakterselIfadeler = 'v';

    cout << "Lutfen sayısal bir ifade giriniz : " ;
    cin >> sayisalIfadeler;

    cout << "Lutfen ondalıklı bir ifade giriniz : " ;
    cin >> ondalikIfadeler;

    cout << "Lutfen sözel bir ifade giriniz : " ;
    cin >> sozelIfadeler;

    cout << "Lutfen karaktersel bir ifade giriniz : " ;
    cin >> karakterselIfadeler;

    cout << "\n\nSayısal İfaden : " << sayisalIfadeler     << endl <<
            "Ondalıklı İfadeler : " << ondalikIfadeler     << endl <<
            "Sözel İfadeler : "     << sozelIfadeler       << endl <<
            "karaktersel İfadeler " << karakterselIfadeler << endl ;

    return 0;
}
/*
    long double x;
    double x;
    float x;
    unsigned long long int x; | unsigned long long x;
    long long int x; | long long int x;
    unsigned long int x; | unsigned long x;
    long int x; | long x;
    unsigned int x;
    int x;
    unsigned short int x; | unsigned short;
    short int x;
    unsigned char;
    char x;
    signed char x;
    bool x;
*/
