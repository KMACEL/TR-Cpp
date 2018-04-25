//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
using namespace std;

int main ()
{
    dongu:
    int sayi = 0;
    int sayac = 0;
    int kontrol = 0;

    cout << "Bit Sayısı Hesaplanacak Sayıyı Giriniz : " ;
    cin >> sayi;

    for (int i = 0; i < 32; ++i)
    {
        kontrol = sayi & (1 << i);
        if (kontrol != 0)
        {
            sayac++;
        }
    }

    cout << "Girilen Sayıdaki 1 olan bit sayısı : " << sayac << endl << endl;
    goto dongu;
    return 0;
}
