//============================================================================
// İsim        : unique_ptr
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : unique_ptr Kullanımı
//============================================================================
// https://cppturkiye.wordpress.com/2016/01/25/c11-zeki-akilli-gostericiler-smart-pointers/
#include <iostream>
#include <memory>

using namespace std;

struct test
{
    int a;
    int c;
    string b;

    test()
    {
        cout << "test constructor" << endl;
    }

    ~test()
    {
        cout << "~test deconstructor" << endl;
    }
};

void func(unique_ptr<test> &e)
{
    e->a = 99;
}

int main()
{
    unique_ptr<test> uptr(new test);

    cout << "func begin" << endl;
    func(uptr);
    cout << "func end" << endl;

    cout << uptr->a << endl;
}
