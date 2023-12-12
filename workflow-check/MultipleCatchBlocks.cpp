#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        int numerator = 10, denominator = 0;
        if (denominator == 0)
        {
            throw std::invalid_argument("Division by zero");
        }
        int result = numerator / denominator;

        // Accessing an out-of-bounds element in an array
        int arr[5] = {1, 2, 3, 4, 5};
        int value;
        if (value < 0 || value >= (sizeof(arr) / sizeof(arr[0])))
        {
            throw std::out_of_range("Array index out of bounds");
        }
        value = arr[value];
    }
    catch (const std::invalid_argument &ex)
    {
        std::cerr << "Invalid Argument Error: " << ex.what() << std::endl;
    }
    catch (const std::out_of_range &ex)
    {
        std::cerr << "Out-of-range Error: " << ex.what() << std::endl;
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Unknown Exception: " << ex.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Unknown Exception" << std::endl;
    }

    return 0;
}
