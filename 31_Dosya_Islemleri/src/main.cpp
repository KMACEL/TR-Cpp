//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;


int main ()
{
    ofstream dosyaOlustur("deneme.txt",ios::out);
    if (!dosyaOlustur)
    {
        cerr << "Dosya oluşturma hatası" << endl;
        exit ( EXIT_FAILURE );
    }

    dosyaOlustur << "Merhaba Dünya" << endl;
    dosyaOlustur << "Nasıl Gidiyor Dünya" << endl;
    dosyaOlustur << "Kendine İYİ Bak Dünya" << endl;

    //---------------------------------------------------------------

    ofstream dosyaEkle("varolan.txt",ios::app);
    if (!dosyaEkle)
    {
        cerr << "Dosya oluşturma hatası" << endl;
        exit ( EXIT_FAILURE );
    }
    dosyaEkle << "Silmeden Ekledim Bak Bunu" << endl;

    //---------------------------------------------------------------


    return 0;
}
