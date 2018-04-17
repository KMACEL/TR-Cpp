#ifndef TIME_H
#define TIME_H

class Time
{
public:
    explicit Time(int = 0 , int = 0 , int = 0 );
    ~Time();
    void setTime(int = 0,int = 0 ,int = 0);
    unsigned int &setHourKOTU(int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    void printUniversal();
    void printStandart() const;

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif
