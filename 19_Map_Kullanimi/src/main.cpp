//============================================================================
// İsim        : 19_Map_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Map Giriş
//============================================================================
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

class Test
{
  private:
    string isim;
    int yas;

  public:
    Test() : isim(""), yas(0) {}
    Test(string isim, int yas) : isim(isim), yas(yas) {}
    void yazdir()
    {
        cout << " Sınıf sahibi : " << isim << " Yaşı : " << yas << endl;
    }
};

int main()
{
    map<string, int> yas;
    yas["Mert"] = 25;
    yas["Kubra"] = 25;
    yas["Bilge"] = 0;

    yas.insert(pair<string, int>("Uraz", 0));

    for (map<string, int>::iterator it = yas.begin(); it != yas.end(); it++)
    {
        //pair<string, int>yaslar = *it;
        //cout << yaslar.first << " - " << yaslar.second << endl;
        cout << it->first << " - " << it->second << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    map<string, Test> sinifli;
    sinifli["Mert"] = Test("Mert", 25);
    sinifli["Kubra"] = Test("Kubra", 25);
    sinifli["Bilge"] = Test("Bilge", 0);

    sinifli.insert(make_pair("Uraz", Test("Uraz", 0)));

    for (map<string, Test>::iterator it = sinifli.begin(); it != sinifli.end(); it++)
    {
        cout << it->first << endl;
        it->second.yazdir();
    }

    cout << "--------------------------------------------------------" << endl;

    // unordered map : Map'ten farklı olarak, verileri sıraya yerleştirmez.
    // Bu da hız olarak ciddi derecede avantaj sağlar.
    unordered_map<string, int> sirasizMap;

    sirasizMap["Kubra"] = 25;
    sirasizMap["Erdem"] = 0;
    sirasizMap["Mert"] = 25;

    for (unordered_map<string, int>::iterator it = sirasizMap.begin(); it != sirasizMap.end(); it++)
    {
        cout << it->first << " - " << it->second << endl;
    }

    return 0;
}
