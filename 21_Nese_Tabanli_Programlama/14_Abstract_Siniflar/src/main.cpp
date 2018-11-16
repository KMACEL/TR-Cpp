//============================================================================
// İsim        : 14_Abstract_Sinif
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Abstract Sınıflar
//============================================================================
#include <iostream>
#include <string>
using namespace std;

class AbstractSinif
{
  public:
    virtual void mesajGoster() = 0;
};

class Sinif1 : public AbstractSinif
{
  public:
    void mesajGoster() override
    {
        cout << "Sınıf 1 Mesaj " << endl;
    }
};

class Sinif2 : public AbstractSinif
{
  public:
    void mesajGoster() override
    {
        cout << "Sınıf 2 Mesaj " << endl;
    }
};

int main()
{
    AbstractSinif *a = new Sinif1;
    a->mesajGoster();
    return 0;
}
