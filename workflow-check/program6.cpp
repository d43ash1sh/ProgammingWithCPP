#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        // Some code that may throw exceptions
        int numerator = 10;
        int denominator = 0;
        int result = numerator / denominator; // This will throw a std::runtime_error

        // This code will not be executed if an exception occurs above
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error &ex)
    {
        // Catch specific exception (std::runtime_error)
        std::cerr << "Caught runtime_error: " << ex.what() << std::endl;
    }
    catch (const std::logic_error &ex)
    {
        // Catch another specific exception (std::logic_error)
        std::cerr << "Caught logic_error: " << ex.what() << std::endl;
    }
    catch (...)
    {
        // Catch-all block for any other exceptions
        std::cerr << "Caught an unknown exception" << std::endl;
    }

    // The program can continue after handling exceptions
    std::cout << "Program continues..." << std::endl;

    return 0;
}
