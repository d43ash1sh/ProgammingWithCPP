#include <iostream>
using namespace std;

class TimeMinutes
{
    int minute;

public:
    int getMinute() // Member Function
    {
        return minute;
    }
    TimeMinutes()
    {
        minute = 0;
    }
    TimeMinutes(int, int);
    void setMinutes(int);
    void display();
};

TimeMinutes ::TimeMinutes(int hours, int min)
{
    minute = hours * 60 + min;
}
void TimeMinutes ::setMinutes(int min)
{
    minute = min;
}
void TimeMinute ::display()
{
    cout << endl
         << minute << " minute(s)" << endl;
}
class TimeHours
{
    float hrs;
public
    TimeHours()
    {
        hrs = 0;
    }
    TimeHours(int, int);
    void display();
    operator TimeMinute();
    void operator=(TimeMinutes);
};
TimeHours ::TimeHours(int hour, int min)
{
    hrs = hour + (float)min / 60;
}
void TimeHours ::display()
{
    cout << "\n Overloaded casting operator \n";
    TimeMinute t;
    t.setMinute(hrs * 60);
    return t;
}