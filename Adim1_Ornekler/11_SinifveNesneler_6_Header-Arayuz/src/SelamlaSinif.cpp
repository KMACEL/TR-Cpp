#include<iostream>
#include"SelamlaSinif.h"
using namespace std;

// :: sayesinde SelamlaSinif ile bağlantı oluşturmasını sağlar
SelamlaSinif::SelamlaSinif(string ilkAtama) : sinifMesaji(ilkAtama)
{
}

void SelamlaSinif::setSinifMesaji(string setMesaj)
{
    sinifMesaji=setMesaj;
}

string SelamlaSinif::getSinifMesaji() const
{
    return sinifMesaji;
}

void SelamlaSinif::mesajiGoster() const
{
    cout << "Sınıf İçi Mesaj : " << sinifMesaji << endl ;
}
