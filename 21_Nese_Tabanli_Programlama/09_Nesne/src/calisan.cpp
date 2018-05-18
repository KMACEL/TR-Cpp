#include<string>
#include<iostream>
#include"calisan.h"

using namespace std;

Calisan::Calisan(string isim = "", string soyisim = "",
                string telefon = "", string adres = "",
                int maas = 0)
{
    setIsim(isim);
    setSoyIsim(soyisim);
    setTelefon(telefon);
    setAdres(adres);
    setMaas(maas);
}

Calisan::~Calisan()
{
    cout << getIsim() << " " << getSoyIsim() << " Kullanıcısının Sınıf Oturumu Sona Erdi" << endl;
}

void Calisan::setIsim(string isim)
{
    this->isim = isim;
}
string Calisan::getIsim()
{
    return this->isim;
}


void Calisan::setSoyIsim(string soyisim)
{
    this->soyisim = soyisim;
}
string Calisan::getSoyIsim()
{
    return this->soyisim;
}


void Calisan::setTelefon(string telefon)
{
    this->telefon = telefon;
}
string Calisan::getTelefon()
{
    return this->telefon;
}


void Calisan::setAdres(string adres)
{
    this->adres = adres;
}
string Calisan::getAdres()
{
    return this->adres;
}


void Calisan::setMaas(int maas)
{
    this->maas=maas;
}
int Calisan::getMaas()
{
    return this->maas;
}


void Calisan::zam(int maas)
{
    this->maas+=maas;
}


void Calisan::avans(int)
{

}

void Calisan::getBilgi()
{
    cout << endl << endl
        << "Çalışan İsim : " << getIsim() << endl
        << "Çalışan Soy İsim :" << getSoyIsim() << endl
        << "Çalışan Telefon :" << getTelefon() << endl
        << "Çalışan Adres : " << getAdres() << endl
        << "Çalışan Maaş : " << getMaas() << endl << endl;
 }
