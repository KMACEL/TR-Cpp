//============================================================================
// İsim        : 01_Siniflara_Giris
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler
//============================================================================
#include <iostream>
using namespace std;

class MerhabaClass
{
  private:
    int a;

  public:
    void merhabaMesaj() 
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
