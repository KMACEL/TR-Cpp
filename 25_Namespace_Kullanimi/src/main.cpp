//============================================================================
// İsim        : 25_Namespace_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : 25_Namespace_Kullanimi
//============================================================================
#include <iostream>
#include <string>
using namespace std;

namespace ilk
{
string testVar;

void yazdir()
{
    cout << "Bu ilk Namespacetir " << testVar << endl;
}

class TestClass
{
  public:
    TestClass()
    {
        cout << "ilk içinde TestClass oluşutuldu" << endl;
    }
};
} // namespace ilk

namespace ikinci
{
int testVar;

void yazdir()
{
    cout << "Bu ikinci Namespacetir " << testVar << endl;
}

class TestClass
{
  public:
    TestClass()
    {
        cout << "ikinci içinde TestClass oluşutuldu" << endl;
    }

    void mesaj()
    {
        /* code */
        cout << "ikinci mesajjj" << endl;
    }
};
} // namespace ikinci

int main()
{
    ilk::testVar = "haha";
    ilk::yazdir();
    ilk::TestClass test;

    ikinci::testVar = 5;
    ikinci::yazdir();
    ikinci::TestClass test2;
    test2.mesaj();

    //------------------------------------------------------------

    using ilk::TestClass;
    TestClass t;
    return 0;
}
