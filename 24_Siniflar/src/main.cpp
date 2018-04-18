//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<stdexcept>
#include "Time.h"
using namespace std;


int main ()
{
    Time t{3,5,7};
    cout << "Get Count : " << Time::getCount() << endl;
    t.printUniversal();
    t.printStandart();

    cout << "----------------" << endl;
    t.setTime(10,2,3);

    t.printUniversal();
    t.printStandart();

    try
    {
        t.setTime(578,125,687);
        t.printUniversal();
        t.printStandart();
    }
    catch (invalid_argument &e)
    {
        cout << "Hata oldu. Girişi kontrol ediniz..." <<  e.what() << endl;
    }

    cout << "----------------" << endl;
    t.printUniversal();
    t.printStandart();

    cout << "----------------" << endl;
    try
    {
        Time t2{13,25};
        t2.printUniversal();
        t2.printStandart();

        t2.setHour(16);
        cout << "Get Hour : " << t2.getHour() << endl;

        t2.setSecond(69);
        cout << "Get Second : " << t2.getHour() << endl;

    }
    catch (invalid_argument &e)
    {
        cout << "HATA : " << e.what() << endl;
    }

    cout << "----------------" << endl;

    Time t3;
    t3.printUniversal();
    t3.printStandart();

    cout << "Get Hour : " << t3.getHour() << endl;

    unsigned int &testHour = t3.setHourKOTU(20);
    cout << "Get Hour : " << t3.getHour() << endl;
    testHour=38;
    cout << "Get Hour : " << t3.getHour() << endl;

    cout << "----------------" << endl;

    Time t4{15,15,15};
    t4.printUniversal();
    t4.printStandart();

    Time t5{20,20,20};
    t5.printUniversal();
    t5.printStandart();

    t4=t5;
    t4.printUniversal();
    t4.printStandart();

    cout << "----------------" << endl;

    const Time t6{2,5,7};
    //t6.printUniversal();
    t6.printStandart();

    cout << "----------------" << endl;

    Time t7{2,2,2};
    cout << "Get Count : " << Time::getCount() << endl;
    t7.printUniversal();
    t7.printStandart();

    t7.setHour(20).setMinute(15).setSecond(5);
    t7.printUniversal();
    t7.printStandart();

    t7.setHour(11).printStandart();

    cout << "----------------" << endl;

    Time t8{1,5,9};
    cout << "Get Count : " << Time::getCount() << endl;

    return 0;
}
