//============================================================================
// İsim        : 20_Depolama_Omur
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Depolama Ömürleri
//============================================================================
#include<iostream>
#include <typeinfo>
using namespace std;
//--------------------------------------------------------
inline double test()
{
    return 5.2;
}
//--------------------------------------------------------

//--------------------------------------------------------
void referanssiz(int x)
{
    x=5;
}

void referansli(int &y)
{
    y=12;
}
//--------------------------------------------------------

//--------------------------------------------------------
void argumanli(int x1=3, int x2=5, int x3=16)
{
    cout << "X1 : " << x1 << endl;
    cout << "X2 : " << x2 << endl;
    cout << "X3 : " << x3 << endl;
    cout << "-----------------------------" << endl;
}
//--------------------------------------------------------

//--------------------------------------------------------
int benMuzurBirDegiskenim = 12;
//--------------------------------------------------------

//--------------------------------------------------------
void yukle(int a)
{
    cout << "void yukle(int a)" << endl;
}

void yukle(double c)
{
    cout << "void yukle(double c)" << endl;
}

void yukle(double c, int b)
{
    cout << "void yukle(double c, int b)" << endl;
}
//--------------------------------------------------------

//--------------------------------------------------------
template <typename T>
void maximum (T deger1) // void yerine T de denebilir
{
    cout << "Gelen Tip : " << typeid(deger1).name() << endl;
}
//--------------------------------------------------------

//--------------------------------------------------------
unsigned long faktoriyel(unsigned long fak)
{
    if (fak<=1)
    {
        return 1;
    }else
    {
        return fak*faktoriyel(fak -1);
    }
}
//--------------------------------------------------------

int main ()
{
    cout << test() << endl;

    cout << "-----------------------------" << endl;

    int x = 2;
    cout << "X değeri : " << x << endl;
    referanssiz(x);
    cout << "X Yeni değeri : " << x << endl;

    cout << "-----------------------------" << endl;

    int y = 6;
    cout << "Y değeri : " << y << endl;
    referansli(y);
    cout << "Y Yeni değeri : " << y << endl;
    //referanslar ilk değer almalı

    cout << "-----------------------------" << endl;

    argumanli();
    argumanli(5,4);
    argumanli(2,3,7);

    cout << "-----------------------------" << endl;

    double benMuzurBirDegiskenim = 22.68;

    cout << "İçerideki Değişken Verisi : " << benMuzurBirDegiskenim << endl <<
            "Dışarıdaki Değişken Verisi : " << ::benMuzurBirDegiskenim << endl;

    cout << "-----------------------------" << endl;

    yukle(15);
    yukle(1.8);
    yukle(66.7,362);

    cout << "-----------------------------" << endl;

    maximum(5);
    maximum(12.6);
    maximum('f');

    cout << "-----------------------------" << endl;

    cout << "Faktoriyel : " << faktoriyel(5) << endl;
    return 0;
}
