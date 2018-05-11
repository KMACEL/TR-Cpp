#ifndef CALISAN_H
#define CALISAN_H
#include<iostream>
#include<string>
using namespace std;
class Calisan
{
private:
    string isim;
    string soyisim;
    string telefon;
    string adres;
    int maas;

public:
    Calisan(string, string, string, string, int);
    ~Calisan();
    void setIsim(string);
    string getIsim();
    void setSoyIsim(string);
    string getSoyIsim();
    void setTelefon(string);
    string getTelefon();
    void setAdres(string);
    string getAdres();
    void setMaas(int);
    int getMaas();
    void zam(int);
    void avans(int);
    void getBilgi();
};

#endif
