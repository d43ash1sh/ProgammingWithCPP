#include <iostream>

// Global variable
int num = 10;

int main()
{
    // Local variable with the same name
    int num = 5;

    // Access local variable
    std::cout << "Local num: " << num << std::endl;

    // Access global variable using the scope resolution operator
    std::cout << "Global num: " << ::num << std::endl;

    return 0;
}
