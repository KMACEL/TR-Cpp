#include<iostream>
#include<iomanip>
#include<stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

Time::~Time()
{
    cout << "Class Bitti " << endl;
}

void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if(h >= 0 && h < 24)
    {
        hour=h;
    }else
    {
        throw invalid_argument("Lütfen Saat verisini 0 ile 24 arasında değer giriniz...");
    }
}

unsigned int &Time::setHourKOTU(int h)
{
    if(h >= 0 && h < 24)
    {
        hour=h;
    }else
    {
        throw invalid_argument("Lütfen Saat verisini 0 ile 24 arasında değer giriniz...");
    }
    return hour;
}


void Time::setMinute(int m)
{
    if(m >= 0 && m < 60)
    {
        minute=m;
    }else
    {
        throw invalid_argument("Lütfen dakika verisini 0 ile 60 arasında değer giriniz...");
    }
}

void Time::setSecond(int s)
{
    if(s >= 0 && s < 60)
    {
        second=s;
    }else
    {
        throw invalid_argument("Lütfen saniye verisini 0 ile 60 arasında değer giriniz...");
    }
}

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second;
}

void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::printStandart() const
{
    cout << setfill('0') << setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12)
    << ":"  << setw(2) <<second << (hour < 12 ? " AM" : " PM") << endl;
}
