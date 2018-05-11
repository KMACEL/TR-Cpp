#include<iostream>
#include<string>
#include"muhendis.h"
#include"error.h"
using namespace std;

Muhendis::Muhendis(string isim = "", string soyisim = "",
                string telefon = "", string adres = "",
                int maas = 0) : Calisan(isim,soyisim,telefon,adres,maas)
{
    /*setIsim(isim);
    setSoyIsim(soyisim);
    setTelefon(telefon);
    setAdres(adres);
    setMaas(maas);*/
}

Muhendis::~Muhendis()
{
    cout << getIsim() << " " << getSoyIsim() << " İsmine Sahip Mühendi Sınıfının Sonu" << endl;
}

void Muhendis::zam(int zam,int yapilanIs)
{
    setMaas(getMaas()+zam*yapilanIs);
}

int Muhendis::avans(int avans)
{
    if (avans > (getMaas()*2))
    {
        throw AvanasHata();
        //return 0 ;
    }else{
        this->avansVar = avans;
        return this->avansVar;
    }
}
