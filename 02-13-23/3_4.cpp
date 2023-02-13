#include <bits/stdc++.h>

using namespace std;

class Time
{
    int hour, min, sec;

public:
    Time()
    {
        hour = min = sec = 0;
    }
    Time(int h, int m, int s)
    {
        sec = s % 60;
        min = (m + s / 60) % 60;
        hour = (h + (m + s / 60) / 60) % 24;
    }
    ~Time()
    {
        cout << "\nobject destroyed for class Time";
    }

    void getTime()
    {
        cout << hour % 12 << ':' << min << ':' << sec << hour % 12 ? " AM" : " PM";
    }

    void setTime(int &h, int &m, int &s)
    {
        sec = s % 60;
        min = (m + s / 60) % 60;
        hour = (h + (m + s / 60) / 60) % 24;
    }
    void resetTime()
    {
        hour = min = sec = 0;
    }

    void timeDifference(Time &t1, Time &t2)
    {
        int s1 = t1.hour * 3600 + t1.min * 60 + t1.sec;
        int s2 = t2.hour * 3600 + t2.min * 60 + t1.sec;
        s1 = abs(s1 - s2);
        hour = s1 / 3600;
        min = s1 / 60 - hour * 60;
        sec = s1 % 60;
        printf("\nTime Difference:%d:%d:%d", hour, min, sec);
    }
};