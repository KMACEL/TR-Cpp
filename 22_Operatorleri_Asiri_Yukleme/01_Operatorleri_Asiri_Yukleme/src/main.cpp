//============================================================================
// İsim        : 01_Operatorleri_Asiri_Yukleme
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : 01_Operatorleri_Asiri_Yukleme
//============================================================================
#include <iostream>
using namespace std;

class Asiri
{
  public:
    int toplam, deger;

    Asiri operator+(const Asiri &test)
    {
        Asiri asiri;
        asiri.toplam = test.deger * 3;
        return asiri;
    }

    void yaz(Asiri a)
    {
        cout << "Deger : " << a.toplam << "  :  " << a.deger << endl;
    }
};

int main()
{
    Asiri a;
    a.deger = 5;

    a = a + a;
    a.yaz(a);

    return 0;
}
