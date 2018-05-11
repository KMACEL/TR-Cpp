//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<map>
#include<string>
using namespace std;

class Test
{
private:
    string isim;
    int yas;

public:
    Test(): isim(""), yas(0){}
    Test(string isim, int yas): isim(isim), yas(yas){}
    void yazdir()
    {
        cout << " Sınıf sahibi : " << isim << " Yaşı : " << yas << endl;
    }
};

int main ()
{
    map<string, int>yas;
    yas["Mert"] = 25;
    yas["Kubra"] = 25;
    yas["Bilge"] = 0;

    yas.insert(pair<string, int>("Uraz",0));

    for(map<string, int>::iterator it = yas.begin(); it != yas.end(); it++)
    {
        //pair<string, int>yaslar = *it;
        //cout << yaslar.first << " - " << yaslar.second << endl;
        cout << it->first << " - " << it->second << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    map<string, Test> sinifli;
    sinifli["Mert"] = Test("Mert",25);
    sinifli["Kubra"] = Test("Kubra",25);
    sinifli["Bilge"] = Test("Bilge",0);

    sinifli.insert(make_pair("Uraz",Test("Uraz",0)));

    for(map<string, Test>::iterator it = sinifli.begin(); it != sinifli.end(); it++)
    {
        cout << it->first << endl;
        it->second.yazdir();
    }

    return 0;
}
