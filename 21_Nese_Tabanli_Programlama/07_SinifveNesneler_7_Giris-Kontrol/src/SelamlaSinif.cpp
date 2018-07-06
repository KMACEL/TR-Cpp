#include <iostream>
#include "SelamlaSinif.h"

using namespace std;

SelamlaSinif::SelamlaSinif(string ilkAtama)
{
    setSinifMesaji(ilkAtama);
}

void SelamlaSinif::setSinifMesaji(string setMesaj)
{
    if (setMesaj.size() < 10)
    {
        sinifMesaji = setMesaj;
    }
    else if (setMesaj.size() >= 10)
    {
        sinifMesaji = setMesaj.substr(0, 10);
        cerr << "Gelen Mesaj : - " << sinifMesaji
             << " - Sınır olan 10 karakteri aşmakta " << endl;
    }
}

string SelamlaSinif::getSinifMesaji() const
{
    return sinifMesaji;
}

void SelamlaSinif::mesajiGoster() const
{
    cout << "Sınıf İçi Mesaj : " << sinifMesaji << endl;
}
