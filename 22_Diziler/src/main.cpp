//============================================================================
// İsim        : 20_Depolama_Omur
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Depolama Ömürleri
//============================================================================
#include<iostream>
#include<iomanip>
#include<array>
#include<cstddef>
#include<random>
#include<algorithm>
#include<string>
#include<vector>
#include<stdexcept>

using namespace std;

void staticDizi()
{
    static array<int, 3> staticDizimiz;
    for (size_t i = 0; i < staticDizimiz.size(); ++i)
    {
        staticDizimiz[i]+=5;
    }

    cout << "Static Array Verileri : " << endl;
    for (size_t i = 0; i < staticDizimiz.size(); ++i)
    {
        cout << staticDizimiz[i] << "," ;
    }
    cout << "Static Array Son" << endl << endl;
}

void printArray(const array<array<int,3>,2> &gelenDizi)
{
    for(auto const &satir:gelenDizi)
    {
        for(auto const &eleman:satir)
        {
            cout << eleman << " - ";
        }
        cout << endl;
    }
}


void printArray2(const array<array<int,3>,2> &gelenDizi)
{
    for(size_t satir=0; satir < gelenDizi.size();++satir)
    {
        for(size_t sutun=0; sutun<gelenDizi[satir].size();++sutun)
        {
            cout << satir << ". Satir " << sutun << ". Sutun Elemanı : " << gelenDizi[satir][sutun] << endl;
        }
    }
}

void vectorYazdir(const vector<int> &deger)
{
    cout << "Vektör Verileri : " << endl;
    for(int eleman : deger)
    {
        cout << eleman << endl;
    }
    cout << "--------" << endl;
}


int main ()
{
    array<int, 2> ilkDizi;
    ilkDizi[0]=2;
    ilkDizi[1]=5;

    cout << "İlk Dizi : " << ilkDizi[1] << endl;

    cout << "-----------------------------" << endl;

    array<int, 10> dongulu;

    for (size_t i = 0; i < dongulu.size(); ++i)
    {
        dongulu[i]=0;
    }

    for (size_t i = 0; i < dongulu.size(); ++i)
    {
        cout << setw(4)  <<  i << setw(7)  << dongulu[i] << endl;
    }

    cout << "-----------------------------" << endl;

    array<int,5> baslangicDegerli={3,25,32,88,11};
    for (size_t i = 0; i < baslangicDegerli.size(); ++i)
    {
        cout << setw(4) << i << setw(5) << ":" << setw(5) << baslangicDegerli[i] << endl;
    }

    cout << "-----------------------------" << endl;

    const size_t diziBoyutu = 5;
    array<int, diziBoyutu> degiskenliDizi={7,2,3,5,9};

    for (size_t i = 0; i < degiskenliDizi.size(); ++i)
    {
        cout << setw(4) << i << setw(5) << ":" << setw(5) << degiskenliDizi[i] << endl;
    }

    cout << "-----------------------------" << endl;


    default_random_engine engine(static_cast<int>(time(0)));
    uniform_int_distribution<int> randomInt(1,6);

    const size_t diziBoy=7;
    array<int, diziBoy>frekans={};

    for (size_t i = 0; i < 6000000; ++i)
    {
        ++frekans[randomInt(engine)];
    }

    cout << "Face" << setw(10) << "Frekans" << endl;
    for (size_t i = 1; i < frekans.size(); ++i)
    {
        cout << setw(4) << i  << setw(10) << frekans[i] << endl;
    }

    cout << "-----------------------------" << endl;

    staticDizi();
    staticDizi();
    staticDizi();

    cout << "-----------------------------" << endl;

    array<int, 10>  iterasyon = {26,7,98,4,12,3,65,47,95,22};

    for (int iter : iterasyon )
    {
        cout << "iter İlk Değer: " << iter << endl;
    }
    cout << "---------------" << endl;

    for (int &iter : iterasyon )
    {
        iter*=2;
    }

    for (int iter : iterasyon )
    {
        cout << "iter referanstan sonra : " << iter << endl;
    }

    cout << "-----------------------------" << endl;

    const size_t diziEleman=7;
    array<string, diziEleman> renkler={"Sarı", "Mavi", "Yeşil", "Beyaz", "Kırmızı", "Mor", "Siyah"};

    cout << "Renkler : " <<endl;
    for(string renk:renkler)
    {
        cout << renk << " ";
    }

    sort(renkler.begin(), renkler.end());
    cout << "\nSıralamadan sonra Renkler : " << endl;
    for(string renk:renkler)
    {
        cout << renk << " ";
    }

    cout << "\n---------------" << endl;

    if (binary_search(renkler.begin(),renkler.end(),"Beyaz"))
    {
        cout << "Beyaz Bu Dizinin Elemanı" << endl;
    }

    cout << "-----------------------------" << endl;

    const size_t rows=2;
    const size_t columns=3;
    array<array<int, columns>,rows> dizi1 = {1,3,7,
                                             6,9,4};
    printArray(dizi1);
    printArray2(dizi1);

    cout << "-----------------------------" << endl;

    vector<int> sayisalVector(2);

    cout << "Vektor Boyut : " << sayisalVector.size() << endl;
    vectorYazdir(sayisalVector);

    cout << "\n---------------" << endl;

    sayisalVector.push_back(1);
    sayisalVector.push_back(7);
    sayisalVector.push_back(6);
    sayisalVector.push_back(3);
    cout << "Vektor Boyut : " << sayisalVector.size() << endl;
    vectorYazdir(sayisalVector);

    cout << "\n---------------" << endl;

    sayisalVector.pop_back();
    cout << "Vektor Boyut : " << sayisalVector.size() << endl;
    vectorYazdir(sayisalVector);

    cout << "\n---------------" << endl;

    cout << "Son Eleman : " << sayisalVector.back() << endl;

    cout << "\n---------------" << endl;

    sayisalVector.insert(sayisalVector.begin()+1,68);
    cout << "Vektor Boyut : " << sayisalVector.size() << endl;
    vectorYazdir(sayisalVector);

    cout << "\n---------------" << endl;

    sayisalVector.erase(sayisalVector.begin()+0,sayisalVector.end()-2);
    cout << "Vektor Boyut : " << sayisalVector.size() << endl;
    vectorYazdir(sayisalVector);

    cout << "\n---------------" << endl;

    sayisalVector.clear();
    cout << "Vektor Boyut : " << sayisalVector.size() << endl;
    vectorYazdir(sayisalVector);

    cout << "-----------------------------" << endl;

    try
    {
        cout << "Ulaşabilecek miyiz acaba ? : " << sayisalVector.at(3) << endl;
    }
    catch (out_of_range &ex)
    {
        cerr << "Hata Oluştu : " << ex.what() << endl;
    }

    return 0;
}
