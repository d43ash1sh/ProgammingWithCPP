#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void input(int, int, int);
    friend Time operator+(Time &, Time &);
    void output();
};
void Time::input(int a, int b, int c)
{
    if (c >= 60)
    {
        c = c - 60;
        b = b + 1;
    }
    if (b >= 60)
    {
        b = b - 60;
        a = a + 1;
    }

    hour = a;
    minute = b;
    second = c;
}

void Time::output()
{
    cout << "\n"
         << hour << "hr:" << minute << "min:" << second << "sec" << endl;
}

int main()
{
    Time c1, c2;
    c1.input(1, 2, 60);
    c1.output();
    c2.input(4, 65, 6);
    c2.output();
    return 0;
}