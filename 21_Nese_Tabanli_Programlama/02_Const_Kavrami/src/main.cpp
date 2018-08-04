//============================================================================
// İsim        : 02_Const_Kavrami
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
    void merhabaMesaj() const
    {
        // a =5; Denemez çünkü const ifadesi, class değişkenlerine etki edemez anlamı katıyor
        cout << "Merhaba Class " << endl;
    }
};

int main()
{
    MerhabaClass mrbClass;
    mrbClass.merhabaMesaj();

    return 0;
}
