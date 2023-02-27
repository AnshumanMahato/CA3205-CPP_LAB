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
        cout << ((hour % 12) ? (hour % 12) : 12) << ':'
             << min << ':'
             << sec
             << ((hour / 12) ? " PM" : " AM");
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

    void calcTimeDifference(Time &t1, Time &t2)
    {
        int s1 = t1.hour * 3600 + t1.min * 60 + t1.sec;
        int s2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
        s1 = abs(s1 - s2);
        hour = s1 / 3600;
        min = s1 / 60 - hour * 60;
        sec = s1 % 60;
        printf("\nTime Difference:%d:%d:%d", hour, min, sec);
    }
};

int main()
{
    Time t1;
    cout << "Intialized using default constructor:\n";
    t1.getTime();
    int h, m, s;
    cout << "\nEnter time (HH MM SS) format:\n";
    cin >> h >> m >> s;
    Time t2(h, m, s), t3({11, 15, 47});
    cout << "\nIntialized using parameterized constructor\n";
    t2.getTime();
    t1.calcTimeDifference(t2, t3);
    t1.resetTime();
    cout << "\nTime reset succesfully\n";
    t1.getTime();
    return 0;
}