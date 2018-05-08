//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Test{
private:
    string isim;

public:
    Test(string isim) : isim(isim){}
    void yazdir()
    {
        cout << "Sınıf Sahibi : " << isim << endl;
    }
};

int main ()
{
    //LIFO : Last In First Out
    stack<Test>testStact;

    testStact.push(Test("Mert"));
    testStact.push(Test("Kubra"));
    testStact.push(Test("Bilge"));
    testStact.push(Test("Uraz"));


    Test t1= testStact.top();
    t1.yazdir();

    testStact.pop();

    Test t2= testStact.top();
    t2.yazdir();

    testStact.pop();

    while(testStact.size() > 0)
    {
        Test t= testStact.top();
        t.yazdir();
        testStact.pop();
    }

    cout << "--------------------------------------------------------" << endl;
    return 0;
}
