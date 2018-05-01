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
    dosyaEkle << "Bunuda Ekledim" << endl;
    dosyaEkle.close();
    //---------------------------------------------------------------

    ofstream yeniDosya;
    yeniDosya.open("YeniDosya.txt",ios::out);
    yeniDosya << "Yeni Açtım ve EKledim." << endl;
    yeniDosya.close();
    //---------------------------------------------------------------

    ifstream dosyaOku("varolan.txt",ios::in);
    if (!dosyaOku)
    {
        cerr << "Dosya oluşturma hatası" << endl;
        exit ( EXIT_FAILURE );
    }

    string dosya;
    long konum;
    dosyaOku.seekg(3); // satır
    while(dosyaOku >> dosya)
    {
        //konum=dosyaOku.tellg();
        //cout << "Konum : " << konum << " Veri : " <<  dosya << endl;
        cout << dosya << endl;
    }

    //---------------------------------------------------------------

    
    return 0;
}

// ios::app - Her veriyi sonuna ekler
// ios::out - Yoksa yaratır verileri ekler, varsa dosya iini siler
// ios::trunc - Dosyanın içeriğini siler
// ios::ate -
// ios::in - Dosya içerisini okumak için kullanılır
// ios::binary

// dosyaOku.seekg(5, ios::beg); - baştan 5 satırdan başla
// dosyaOku.seekg(5, ios::cur); -
// dosyaOku.seekg(5, ios::end);
