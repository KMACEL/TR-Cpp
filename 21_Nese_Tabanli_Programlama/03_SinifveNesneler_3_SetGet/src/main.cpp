//============================================================================
// İsim        : 03_SinifveNesneler_3_SetGet
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler 3 - Set Get
//============================================================================
#include <iostream>
#include <string>
using namespace std;

class GetSetli
{
  private:
    string gelenMesaj;

  public:
    void setMesaj(string mesaj)
    {
        gelenMesaj = mesaj;
    }

    string getMesaj() const
    {
        return gelenMesaj;
    }

    void mesajiGoster() const
    {
        cout << "Senin Mesajın : " << gelenMesaj << endl;
    }
};

int main()
{
    GetSetli getSetTest;
    string gonderilecekMesaj;

    cout << "Var olan mesaj : " << getSetTest.getMesaj() << endl;

    cout << "Bir mesaj giriniz : ";
    getline(cin, gonderilecekMesaj);

    // cin << test1 << test2 << test3 ;
    getSetTest.setMesaj(gonderilecekMesaj);
    getSetTest.mesajiGoster();

    cout << "Getten Gelen Mesaj : " << getSetTest.getMesaj() << endl;
    return 0;
}
