#include <iostream>
#include "SelamlaSinif.h"
using namespace std;

// :: sayesinde SelamlaSinif ile bağlantı oluşturmasını sağlar
SelamlaSinif::SelamlaSinif(uint64_t ilkAtama) : sinifMesaji(ilkAtama)
{
}

void SelamlaSinif::setSinifMesaji(uint64_t setMesaj)
{
    sinifMesaji = setMesaj;
}

uint64_t SelamlaSinif::getSinifMesaji() const
{
    return sinifMesaji;
}

void SelamlaSinif::mesajiGoster() const
{
    cout << "Sınıf İçi Mesaj : " << sinifMesaji << endl;
}

SelamlaSinif SelamlaSinif::getSelamla(){
    return SelamlaSinif(25); // Eğer explicit olmasaydı sadece 25 diyebilirdik
}