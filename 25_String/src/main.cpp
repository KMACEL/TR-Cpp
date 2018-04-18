//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<string>

using namespace std;

int main ()
{
    string sozel;

    if(sozel.empty())
    {
        cout << "Sozel Değişken Verisi Boş..." << endl;
    }

    cout << "------------------------------------" << endl;

    sozel = "Test";
    if(!sozel.empty())
    {
        cout << "Sozel Değişken Verisi : "<< sozel << endl;
    }

    cout << "------------------------------------" << endl;

    string sozel2= " Deneme";
    sozel += sozel2;
    cout << "String Toplama : " << sozel << endl;

    cout << "------------------------------------" << endl;

    cout << "Biraz Keselim : " << sozel.substr(2,5) << endl;

    cout << "------------------------------------" << endl;

    sozel = "Neber Kardeş";
    cout << "Başka türlü keselim : " << sozel.substr(6) << endl;

    cout << "------------------------------------" << endl;

    string yeni(sozel);
    cout << "Yeni sozel : " << yeni << endl;

    cout << "------------------------------------" << endl;

    cout << "Harf Çekme : " << sozel[2] << sozel[7] << endl;

    cout << "------------------------------------" << endl;
    cout << "at Tan önce : " << sozel << endl;
    sozel.at(2)='Q';
    cout << "at Tan sonra : " << sozel << endl;


    return 0;
}
