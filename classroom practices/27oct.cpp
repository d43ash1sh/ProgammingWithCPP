#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    void input(int, int);
    friend complex operator-(complex &, complex &);
    void output();
};
void complex::input(int a, int b)
{
    real = a;
    imag = b;
}
void complex::output()
{
    if (imag >= 0)
        cout << "\n"
             << real << "+" << imag << "i" << endl;
    else
        cout << "\n"
             << real << imag << "i" << endl;
}
complex operator-(complex &x, complex &y)
{
    complex temp;
    temp.real = x.real - y.real;
    temp.imag = x.imag - y.imag;
    return temp;
}
int main()
{
    complex A, B, C;

    A.input(2, 3);
    A.output();

    B.input(5, -1);
    B.output();

    C = A - B;
    C.output();
    return 0;
}