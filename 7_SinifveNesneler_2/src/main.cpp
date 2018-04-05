//============================================================================
// İsim        : 7_SinifveNesneler_2
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler 2
//============================================================================
#include<iostream>
#include<string>
using namespace std;

class VeriAlanClass
{
public:
    void mesajliFunction(string gelenVeri) const
    {
        cout << "Class'a gelen veri : " << gelenVeri << endl;
    }
};

int main(){
    string mesajGonderme;
    VeriAlanClass veriAlanClassDegisken;

    cout << "Mesaj giriniz : " ;
    getline(cin,mesajGonderme);
    cout << endl;

    veriAlanClassDegisken.mesajliFunction(mesajGonderme);

    return 0;
}
