//============================================================================
// İsim        : 9_SinifveNesneler_4_Constructor
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Sınıflar ve Nesneler 4 - Constructor
//============================================================================
#include<iostream>
#include<string>
using namespace std;

class IlkDegerli
{
public:
    explicit IlkDegerli (string ilkAtama) : sinifMesaji(ilkAtama)
    {

    }

    void setSinifMesaji(string setMesaj)
    {
        sinifMesaji=setMesaj;
    }

    string getSinifMesaji() const
    {
        return sinifMesaji;
    }

    void mesajiGoster() const
    {
        cout << "Sınıf İçi Mesaj : " << sinifMesaji << endl ;
    }

private:
    string sinifMesaji;
};

int main()
{
    IlkDegerli ilkDegerliSinif("Merhaba Bu İlk Değer");
    ilkDegerliSinif.mesajiGoster();

    cout << "Sınıf Mesajını Göster : " << ilkDegerliSinif.getSinifMesaji() << endl ;

    string girilenDeger;
    cout << "Yeni mesaj gir : " ;
    getline(cin,girilenDeger);

    ilkDegerliSinif.setSinifMesaji(girilenDeger);

    ilkDegerliSinif.mesajiGoster();

    cout << "Sınıf Mesajını Göster : " << ilkDegerliSinif.getSinifMesaji() << endl ;

    return 0;
}
