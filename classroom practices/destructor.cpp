#include <iostream>
using namespace std;
class A
{
private:
    int a;
    A()
    {
        cout << "Create A";
    }
    ~A()
    {
        cout << "Deleting desc";
    }
    int main()
    {
        A b;
        return 0;
    }