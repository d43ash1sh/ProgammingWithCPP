#include <iostream>
#include <stdexcept>
int main()
{
    try
    {
        // Example: Division by zero
        int numerator = 10,
            denominator = 0;
        int result = numerator / denominator;
    }
    catch (const std::runtime_error &ex)
    {
        std::cerr << "Runtime Error: " << ex.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Caught an exception of unknown type" << std::endl;
    }
    return 0;
}
