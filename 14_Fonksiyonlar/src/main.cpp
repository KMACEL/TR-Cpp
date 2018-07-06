//============================================================================
// İsim        : 14_Fonksiyonlar
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Fonksiyonlara Başlangıç
//============================================================================
#include <iostream>
#include <typeinfo>
using namespace std;

//--------------------------------------------------------
/*


Normal fonksiyonlar ramde ayrı bir bölgede
farklı bir programmış gibi tutulur ve çağırıldıkları zaman
ramin o bölgesinden çekilirler. Bu bir miktar performans azalmasına sebep olabilir.
inline fonksiyonlar ise çağırıldıkları her yere kopyalanırlar.
Böylece performans kaybı yaşatmazlar. Ama çok büyük fonksiyonları inline olarak tanımlamak sıkıntılı olabilir.

Derleyiciler genellike hangi fonksiyonun inline olması gerektiğine karar verebilirler.
Bu yüzden inline anahtar kelimesini kullanmak neredeyse gereksizdir.
http://yapbenzet.kocaeli.edu.tr/cpp-fonksiyonlar-ve-nesneler/
*/
inline double test()
{
    return 5.2;
}
//--------------------------------------------------------

//--------------------------------------------------------
/*
Referanslar, programlamadaki değeri oldukça yüksektir.
Referans olarak alınan parametre, aslında gönderilen değişkenin
adresini alır ve değişikliği o adres üzerinde gerçekleştirir.
Yani uzun lafın kısası o değerin bulunduğu alan değiştirilir.
Böylece geriye değer döndürmese bile aslında değeri değiştirmiştir.
*/
void referanssiz(int x)
{
    x = 5;
}

void referansli(int &y)
{
    y = 12;
}
//--------------------------------------------------------

//--------------------------------------------------------
/*
Argüman, ilk değerlerdir. Yani siz o değişkene değer vermeseniz bile otomatik
ilgili değerleri alır.
*/
void argumanli(int x1 = 3, int x2 = 5, int x3 = 16)
{
    cout << "X1 : " << x1 << endl;
    cout << "X2 : " << x2 << endl;
    cout << "X3 : " << x3 << endl;
    cout << "-----------------------------" << endl;
}
//--------------------------------------------------------

//--------------------------------------------------------
/*
Bir değişken herhangibir fonksiyonun dışında kullanılırsa global değişken olur.
Eğer aynı isimli farklı bir değişken yerel kullanılırsa, :: parametresi ile globale
erişebilmektedir.
*/
int benMuzurBirDegiskenim = 12;
//--------------------------------------------------------

//--------------------------------------------------------
/*
Bir fonksiyonu aşırı yükleyebiliriz. Bu ne anlama gelmektedir ?
Yani aynı isimli bir fonksiyon aldığı tiplere göre farklı işlemler yaptırabiliriz.
Ama önemli nokta farklı tipler alması gerekmektedir.
*/
void yukle(int a)
{
    cout << "void yukle(int a)" << endl;
}

void yukle(double c)
{
    cout << "void yukle(double c)" << endl;
}

void yukle(double c, int b)
{
    cout << "void yukle(double c, int b)" << endl;
}
//--------------------------------------------------------

//--------------------------------------------------------
/*
Şablonlar bizi bir çok dertten kurtarır. Eğer bazı işlemler tiplerin
türüne göre ufak değişiklikler gerektiriyorsa her işlem için tekrar
fonksiyon yazmak gerekmemektedir. template sayesinde derleyici bizim için ilgili
foksiyonları otomatik yazacaktır.
*/
template <typename T>
void maximum(T deger1) // void yerine T de denebilir
{
    cout << "Gelen Tip : " << typeid(deger1).name() << endl;
}
//--------------------------------------------------------

//--------------------------------------------------------
/*
Rekürsif FOnksiyonlar çok tehlikelidir fakat bazı zamanlar hayat kurtarmaktadır.
*/
unsigned long faktoriyel(unsigned long fak)
{
    if (fak <= 1)
    {
        return 1;
    }
    else
    {
        return fak * faktoriyel(fak - 1);
    }
}
//--------------------------------------------------------

int main()
{
    // inline denemesi
    cout << test() << endl;

    cout << "-----------------------------" << endl;
    // Referansa gönderince değerin değiştiğinin görüldüğü kısım
    int x = 2;
    cout << "X değeri : " << x << endl;
    referanssiz(x);
    cout << "X Yeni değeri : " << x << endl;

    cout << "-----------------------------" << endl;

    int y = 6;
    cout << "Y değeri : " << y << endl;
    referansli(y);
    cout << "Y Yeni değeri : " << y << endl;
    //referanslar ilk değer almalı

    cout << "-----------------------------" << endl;
    // Alınan argümana göre değer bilgisi
    argumanli();
    argumanli(5, 4);
    argumanli(2, 3, 7);

    cout << "-----------------------------" << endl;
    // AYnı isimli yerel ve global değişken
    double benMuzurBirDegiskenim = 22.68;

    cout << "İçerideki Değişken Verisi : " << benMuzurBirDegiskenim << endl
         << "Dışarıdaki Değişken Verisi : " << ::benMuzurBirDegiskenim << endl;

    cout << "-----------------------------" << endl;
    // Bir fonksiyonu aşırı yükleme
    yukle(15);
    yukle(1.8);
    yukle(66.7, 362);

    cout << "-----------------------------" << endl;
    // Şablon yapısı
    maximum(5);
    maximum(12.6);
    maximum('f');

    cout << "-----------------------------" << endl;
    // rekürsif hesaplama
    cout << "Faktoriyel : " << faktoriyel(5) << endl;
    return 0;
}
