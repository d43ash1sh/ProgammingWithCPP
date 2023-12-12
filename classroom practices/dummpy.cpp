#include <iostream>

class MyClass
{
public:
    int data;

    // Default constructor
    MyClass()
    {
        std::cout << "Default constructor called" << std::endl;
        data = 0;
    }

    // Parameterized constructor
    MyClass(int value)
    {
        std::cout << "Parameterized constructor called" << std::endl;
        data = value;
    }

    // Copy constructor
    MyClass(const MyClass &other)
    {
        std::cout << "Copy constructor called" << std::endl;
        data = other.data;
    }
};

int main()
{
    // Creating an object using the default constructor
    MyClass obj1;
    obj1.data = 10;

    // Calling the copy constructor explicitly
    MyClass obj2(obj1);

    // Creating an object using the copy constructor
    MyClass obj3 = obj1;

    // Creating an object using the assignment operator
    MyClass obj4;
    obj4 = obj1;

    return 0;
}
