//============================================================================
// İsim        : 19_Rastgele_Sayi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Rastgele Sayi
//============================================================================
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<random>
using namespace std;

int main ()
{
    for (unsigned int i = 1; i <= 20; ++i)
    {
        cout << setw(5) << (1+ rand()%10);
        if (i%5 == 0)
        {
            cout << endl ;
        }
    }

    cout << "----------------------------------------" << endl;

    srand(static_cast<int>(time(0)));
    for (unsigned int i = 1; i <= 20; ++i)
    {
        cout << setw(5) << (1+ rand()%10);
        if (i%5 == 0)
        {
            cout << endl ;
        }
    }

    cout << "----------------------------------------" << endl;

    //ENUM AÇIKLA : Sabitler büyük harfle yazılır
    enum class Status {A,B,C = 6,D};

    Status testStatus=Status::D;

    if (testStatus == Status::B)
    {
        cout << "Status : B "  << endl;
    }
    cout << "Status : " << static_cast<int>(testStatus) << endl;

    cout << "----------------------------------------" << endl;

    default_random_engine engine(static_cast<int>(time(0)));
    uniform_int_distribution<int> randomInt(1,6);
    for (int i = 1; i <= 20; ++i)
    {
        cout << setw(5) << randomInt(engine);
        if (i%5 == 0)
        {
            cout << endl ;
        }
    }

    cout << endl;
    return 0;
}
