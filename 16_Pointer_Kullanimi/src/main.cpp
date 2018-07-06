//============================================================================
// İsim        : 16_Pointer_Kullanımı
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Pointer Anlama
//============================================================================
#include <iostream>
using namespace std;

void kupReferans(int *);
void diziGoster(const int *, int diziEleman);

int main()
{
    int sayi = 5;
    int *ilkPtr = nullptr;
    ilkPtr = &sayi;

    cout << "ilkPtr Değeri : " << ilkPtr << endl;
    cout << "*ilkPtr Değeri : " << *ilkPtr << endl;
    cout << "&ilkPtr Değeri : " << &ilkPtr << endl;
    cout << "sayi Değeri : " << sayi << endl;
    cout << "&sayi Değeri : " << &sayi << endl;

    cout << "-----------------------------" << endl;

    int numara = 5;
    cout << "Şu an numara içindeki veri : " << numara << endl;

    kupReferans(&numara);
    cout << "Yeni numara içindeki veri : " << numara << endl;

    cout << "-----------------------------" << endl;

    int dizi[10] = {1, 3, 5, 7, 9, 2, 78, 1598, 78541, 12};
    cout << "Dizi Boyutu : " << sizeof(dizi) / sizeof(dizi[0]) << endl;
    diziGoster(dizi, sizeof(dizi) / sizeof(dizi[0]));

    return 0;
}

void kupReferans(int *kupPtr)
{
    *kupPtr = *kupPtr * *kupPtr * *kupPtr;
}

void diziGoster(const int *diziPtr, int diziEleman)
{
    cout << "İkinci Eleman : " << *(diziPtr + 1) << endl;

    for (int i = 0; i < diziEleman; ++i)
    {
        cout << *diziPtr++ << endl;
    }
}
