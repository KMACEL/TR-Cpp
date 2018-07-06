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

int main()
{
    auto l = []() -> string { return "Merhaba  Dünya"; };
    cout << "Mesaj : " << l() << endl;

    cout << "-----------------------------------------" << endl;

    auto l2 = []() -> void { cout << "Bu da içinde" << endl; };
    l2();

    cout << "-----------------------------------------" << endl;
    int a = 5;
    auto l3 = [&a]() -> void { a = 2; };

    cout << "a : " << a << endl;
    l3();
    cout << "Lambda sonrası a : " << a << endl;

    cout << "-----------------------------------------" << endl;

    auto l4 = [](int b) -> int { return b * 2; };
    cout << "2 ile Çarpacak : " << l4(4) << endl;

    cout << "-----------------------------------------" << endl;

    int b = 3;
    int c = 8;
    auto l5 = [&]() -> void {b = 4; c = 2; };

    cout << "b : " << b << " c : " << c << endl;
    l5();
    cout << "Lambda Sonrası b : " << b << " c : " << c << endl;

    cout << "-----------------------------------------" << endl;

    int d = 7;
    int e = 12;
    auto l6 = [=]() -> void {
        cout << "d : " << d << " e : " << e << endl;
    };
    l6();

    cout << "-----------------------------------------" << endl;

    auto glambda = [](auto a, auto &&b) { return a < b; };
    bool bKontrol = glambda(7, 8.56);
    if (bKontrol)
    {
        cout << "İlk değer ikincisinden küçük" << endl;
    }
    else
    {
        cout << "İlk değer ikincisinden büyük" << endl;
    }

    auto vglambda = [](auto printer) {
        return [=](auto &&... ts) {
            printer(forward<decltype(ts)>(ts)...);
            return [=] { printer(ts...); };
        };
    };

    auto p = vglambda([](auto v1, auto v2, auto v3) { cout << v1 << " " << v2 << " " << v3 << endl; });
    auto q = p(1, 'a', 3.14);
    q();

    return 0;
}
