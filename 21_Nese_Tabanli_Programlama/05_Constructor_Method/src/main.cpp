//============================================================================
// İsim        : 05_Constructor_Method
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler
//============================================================================
#include <iostream>
#include <string>
using namespace std;

class IlkDegerli
{
  private:
    string sinifMesaji;

  public:
    explicit IlkDegerli(string ilkAtama) : sinifMesaji(ilkAtama)
    {
    }

    void setSinifMesaji(string setMesaj)
    {
        sinifMesaji = setMesaj;
    }

    string getSinifMesaji() const
    {
        return sinifMesaji;
    }

    void mesajiGoster() const
    {
        cout << "Sınıf İçi Mesaj : " << sinifMesaji << endl;
    }
};

void test (IlkDegerli i){
    i.mesajiGoster();
}

int main()
{
    IlkDegerli ilkDegerliSinif("Merhaba Bu İlk Değer");
    ilkDegerliSinif.mesajiGoster();

    cout << "Sınıf Mesajını Göster : " << ilkDegerliSinif.getSinifMesaji() << endl;

    string girilenDeger;
    cout << "Yeni mesaj gir : ";
    getline(cin, girilenDeger);

    ilkDegerliSinif.setSinifMesaji(girilenDeger);

    ilkDegerliSinif.mesajiGoster();

    cout << "Sınıf Mesajını Göster : " << ilkDegerliSinif.getSinifMesaji() << endl;

test(ilkDegerliSinif);
test((IlkDegerli)"mehaba");
    return 0;
}
