//============================================================================
// İsim        : 11_Matematiksel_Ifadeler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Programda dört işlem yapma
//============================================================================
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // Değişken Oluşturuyoruz
    int sayisal1;
    int sayisal2;
    int sayisal3;

    // Değişkene "=" operatörü ile ilk değer atıyoruz.
    // "=" programlamada sağ taraftakini, sol tarada ata demektir
    // Örneğin 12 sayısını sol tarafta bulunan sayisal1 değişkenine ata demektir
    sayisal1 = 12;
    sayisal2 = 3;
    sayisal3 = 5;

    // Verileri gösteriyoruz.
    cout << "İLK ATAMA : " << endl;
    cout << "Sayısal 1 Değişkenin Verisi : " << sayisal1 << endl
         << "Sayısal 2 Değişkenin Verisi : " << sayisal2 << endl
         << "Sayısal 3 Değişkenin Verisi : " << sayisal3 << endl;

    cout << "\n\n---------------------------------------------------------------\n\n";

    // Eğer bir değişkenin üstüne başka bir veri atarsanız,
    // bir önceki veriyi kaybeder ve yeni veriyi aktarır.
    sayisal1 = 3;
    sayisal2 = 9;
    sayisal3 = 16;

    cout << "VERİLERİ DEĞİŞTİRME : " << endl;
    cout << "Sayısal 1 Değişkenin Verisi : " << sayisal1 << endl
         << "Sayısal 2 Değişkenin Verisi : " << sayisal2 << endl
         << "Sayısal 3 Değişkenin Verisi : " << sayisal3 << endl;

    cout << "\n\n---------------------------------------------------------------\n\n";

    // Şimdide Matematiksel İşlemler Yapalım
    sayisal1 = 3 + 5 * (2 * 7);
    sayisal2 = 9 - 9 + (5 - 3);
    sayisal3 = 16 / 2 * 5 - (5 + (27 / 5));

    cout << "VERİLER ÜZERİNDE İŞLEM YAPMA : " << endl;
    cout << "Sayısal 1 Değişkenin Verisi : " << sayisal1 << endl
         << "Sayısal 2 Değişkenin Verisi : " << sayisal2 << endl
         << "Sayısal 3 Değişkenin Verisi : " << sayisal3 << endl;

    cout << "\n\n---------------------------------------------------------------\n\n";

    // İşlemleri değişkenler ile de yapabilirsiniz. Hatta kendini bile kullanabilirsiniz

    cout << "DEĞİŞKENLERİN SON HALLERİ: " << endl;
    cout << "Sayısal 1 Değişkenin Verisi : " << sayisal1 << endl
         << "Sayısal 2 Değişkenin Verisi : " << sayisal2 << endl
         << "Sayısal 3 Değişkenin Verisi : " << sayisal3 << endl;

    cout << "İşlem : sayisal1 = sayisal1+2-sayisal2*(5/(sayisal3)); " << endl;
    sayisal1 = sayisal1 + 2 - sayisal2 * (5 / (sayisal3));
    cout << "Sonuç : " << sayisal1 << endl;

    cout << "\n\n---------------------------------------------------------------\n\n";

    // Bölme işleminde işler biraz daha farklı

    int sayi;
    sayi = 5 / 3;

    cout << "int türünde 5/3 verisinin sonucu : " << sayi << endl;

    float ondalik;
    ondalik = 5.0 / 3;
    cout << "float türünde 5/3 verisinin sonucu : " << fixed << setprecision(3) << ondalik << endl;

    return 0;
}
