//============================================================================
// İsim        : 12_Kosullu Ifadeler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Koşulsal ifadeleri ve kullanım biçimi
//============================================================================
#include <iostream>

using namespace std;

int main()
{
    int sayi1 = 0;
    int sayi2 = 0;

    cout << "Lütfen ilk sayıyı giriniz : ";
    cin >> sayi1;

    cout << "Lütfen ikinci sayıyı giriniz : ";
    cin >> sayi2;

    if (sayi1 > sayi2)
    {
        cout << "İlk girilen sayı, ikincisinden büyük" << endl;
    }
    else if (sayi1 < sayi2)
    {
        cout << "İlk girilen sayı, ikincisinden küçük" << endl;
    }
    else if (sayi1 == sayi2)
    {
        cout << "İlk girilen sayı, ikincisiyle eşit" << endl;
    }
    else
    {
        cout << "Sayı Hatalı" << endl;
    }

    cout << "\n\n---------------------------------------------\n\n";

    int sayi3 = 0;
    cout << "Lütfen ilk sayıyı giriniz : ";
    cin >> sayi3;

    switch (sayi3)
    {
    case 0:
        cout << "Sayı 0" << endl;
        break;
    case 1:
        cout << "Sayı 1" << endl;
        break;
    case 2:
        cout << "Sayı 2" << endl;
        break;
    case 3:
        cout << "Sayı 3" << endl;
        break;
    case 4:
        cout << "Sayı 4" << endl;
        break;
    case 5:
        cout << "Sayı 5" << endl;
        break;
    default:
        cout << "Sayı 0 ile 5 arasında değil" << endl;
        break;
    }

    return 0;
}
