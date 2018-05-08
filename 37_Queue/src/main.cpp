//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<string>
#include<queue>
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
    //FIFO : First In First Out
    queue<Test>testQueue;

    testQueue.push(Test("Mert"));
    testQueue.push(Test("Kubra"));
    testQueue.push(Test("Bilge"));
    testQueue.push(Test("Uraz"));

    testQueue.back().yazdir();

    Test t1= testQueue.front();
    t1.yazdir();

    testQueue.pop();

    Test t2= testQueue.front();
    t2.yazdir();

    testQueue.pop();

    while(testQueue.size() > 0)
    {
        Test t= testQueue.front();
        t.yazdir();
        testQueue.pop();
    }

    cout << "--------------------------------------------------------" << endl;
    return 0;
}
