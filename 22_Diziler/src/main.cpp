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

    
    return 0;
}
