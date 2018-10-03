//============================================================================
// İsim        : 19_Map_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Map Giriş
//============================================================================
#include <iostream>
#include <map>
#include <array>
#include <string>
using namespace std;

class Ogrenci
{
  public:
    string ogrenciNo;
    string isim;
    string soyIsim;
    int **ders;

  public:
    Ogrenci() {}
    Ogrenci(string ogrenciNo, string isim, string soyIsim) : ogrenciNo(ogrenciNo), isim(isim), soyIsim(soyIsim) {}

    void yazdir()
    {
        cout << " Sınıf sahibi No : " << ogrenciNo << " İsim : " << isim << " Soyisim : " << soyIsim << endl;
    }

    void arrayCreate(int dersSayisi)
    {
        // array<int, dersSayisi> createArray;
        ders = new int *[dersSayisi];
        for (int i = 0; i < 2; ++i)
            ders[i] = new int[2];
    }
};

int main()
{
    int ogrenciSayisi;
    int dersSayisi;
    map<string, Ogrenci> ogrenciMap;

    cout << "Ogrenci sayisi : ";
    cin >> ogrenciSayisi;

    cout << "Ders : ";
    cin >> dersSayisi;

    for (int i = 0; i < ogrenciSayisi; i++)
    {
        string ogrenciNo = "";
        string ogrenciIsim = "";
        string ogrenciSoyisim = "";

        cout << "Ogrenci No :";
        cin >> ogrenciNo;

        cout << "Ogrenci İsim :";
        cin >> ogrenciIsim;

        cout << "Ogrenci Soyisim :";
        cin >> ogrenciSoyisim;

        ogrenciMap.insert(make_pair(ogrenciNo, Ogrenci(ogrenciNo, ogrenciIsim, ogrenciSoyisim)));
    }

    for (map<string, Ogrenci>::iterator it = ogrenciMap.begin(); it != ogrenciMap.end(); it++)
    {
        it->second.arrayCreate(dersSayisi);
    }

    for (map<string, Ogrenci>::iterator it = ogrenciMap.begin(); it != ogrenciMap.end(); it++)
    {
        for (int i = 0; i < dersSayisi; i++)
        {
            cout << it->second.isim << " ogrenci ," << i + 1 << " vize notu gir :";
            cin >> it->second.ders[i][0];

            cout << it->second.isim << " ogrenci ," << i + 1 << " final notu gir :";
            cin >> it->second.ders[i][1];
        }
    }

    for (map<string, Ogrenci>::iterator it = ogrenciMap.begin(); it != ogrenciMap.end(); it++)
    {
        for (int i = 0; i < dersSayisi; i++)
        {
            cout << it->second.isim << "Ogrencinin " << i+1 << ". ders ortalaması : " << (it->second.ders[i][0] + it->second.ders[i][1])/2 << endl;
        }
    }

    /* ogrenciMap["11"] = Ogrenci("11", "Mert", "Acel");
    ogrenciMap.insert(make_pair("12", Ogrenci("12", "Uraz", "Acel")));

    for (map<string, Ogrenci>::iterator it = ogrenciMap.begin(); it != ogrenciMap.end(); it++)
    {
        cout << it->first << endl;
        it->second.yazdir();
    }
    */

    return 0;
}
