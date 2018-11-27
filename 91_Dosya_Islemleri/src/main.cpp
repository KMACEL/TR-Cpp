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
    //long konum;
    dosyaOku.seekg(3); // satır
    while(dosyaOku >> dosya)
    {
        //konum=dosyaOku.tellg();
        //cout << "Konum : " << konum << " Veri : " <<  dosya << endl;
        cout << dosya << endl;
    }

    //---------------------------------------------------------------

    cout << "---------------------------------------------------------------" << endl;
    string dosyaIsmi = "varolan.txt";
    ifstream dosyaOkumakIcinAc;

    dosyaOkumakIcinAc.open(dosyaIsmi);

    if(dosyaOkumakIcinAc.is_open())
    {
        string satir;
        while(!dosyaOkumakIcinAc.eof())
        {
            getline(dosyaOkumakIcinAc,satir);
            cout << satir << endl;
        }
    }
    else
    {
        cout << "Dosya Açılamadı : " << dosyaIsmi << endl;
        return 1;
    }

    cout << "---------------------------------------------------------------" << endl;

    string dosyaIsmi2 = "verili.txt";
    ifstream dosyaOkumakIcinAc2;

    dosyaOkumakIcinAc2.open(dosyaIsmi2);

    if(dosyaOkumakIcinAc2.is_open())
    {
        string satir2;
        string satirSon;
        while(dosyaOkumakIcinAc2)
        {
            getline(dosyaOkumakIcinAc2,satir2,':');
            dosyaOkumakIcinAc2 >> satirSon;
            dosyaOkumakIcinAc2 >> ws;
            if(!dosyaOkumakIcinAc2)
            {
                break;
            }

            cout << satir2 << " - " << satirSon << endl;
        }
    }
    else
    {
        cout << "Dosya Açılamadı : " << dosyaIsmi2 << endl;
        return 1;
    }
    cout << "---------------------------------------------------------------" << endl;

    //---------------------------------------------------------------

    struct Insan
    {
        string isim;
        string soyisim;
        int yas;
    };

    Insan insan={"Mert","Acel",24};
    cout << insan.isim << " - " << insan.soyisim << " - " << insan.yas << endl;

    string dosyaIsmiBinary = "binary.bin";
    ofstream yazBinary;

    yazBinary.open(dosyaIsmiBinary, ios::binary);

    if(yazBinary.is_open())
    {
        //yazBinary.write((char *)&insan,sizeof(Insan));
        yazBinary.write(reinterpret_cast<char *>(&insan),sizeof(Insan));

        yazBinary.close();
    }
    else
    {
        cout << "Dosya Oluşturulamadı : " << dosyaIsmiBinary << endl;
    }

    //---------------------------------------------------------------
    cout << "---------------------------------------------------------------" << endl;

    Insan insan2={};
    string dosyaIsmiBinary2 = "binary.bin";
    ifstream okuBinary;

    okuBinary.open(dosyaIsmiBinary2, ios::binary);

    if(okuBinary.is_open())
    {
        okuBinary.read(reinterpret_cast<char *>(&insan2),sizeof(Insan));
        okuBinary.close();
    }
    else
    {
        cout << "Dosya Okunamadı : " << dosyaIsmiBinary2 << endl;
    }
    cout << "Okunan : " << insan2.isim << " - " << insan2.soyisim << " - " << insan2.yas << endl;

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
