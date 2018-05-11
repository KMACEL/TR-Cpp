//============================================================================
// İsim        : 6_SinifveNesneler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler
//============================================================================
#include<iostream>
using namespace std;

class MerhabaClass
{
public:
    void merhabaMesaj() const
    {
        cout << "Merhaba Class " << endl;
    }
};

int main()
{
    MerhabaClass mrbClass;
    mrbClass.merhabaMesaj();

    return 0;
}
