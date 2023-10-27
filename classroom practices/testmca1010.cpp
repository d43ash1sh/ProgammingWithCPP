#include <iostream>
using namespace std;
class item
{
    static int count; // declaration
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "\n Count";
        cout << count << "\n";
    }
};
int item::count; // definition
int main()
{
    item a; // count 0
    a.getcount();
    item b, c;
    b.getcount();
    c.getcount();
    a.getdata(1);
    b.getdata(2);
    c.getdata(3);
    a.getdata(44);
    cout << "\n After data entry: ";
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}
