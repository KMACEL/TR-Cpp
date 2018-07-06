#ifndef TIME_H
#define TIME_H

class Time
{
  public:
    explicit Time(int = 0, int = 0, int = 0);
    ~Time();
    void setTime(int = 0, int = 0, int = 0);
    unsigned int &setHourKOTU(int);
    Time &setHour(int);
    Time &setMinute(int);
    Time &setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    void printUniversal();
    void printStandart() const;
    static unsigned int getCount();

  private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    static unsigned int classCount;
};

#endif
