#include <iostream>
// Include the <limits> header for accessing information about data type limits.
#include <limits>

int main() {

    // int - 4-byte integer (minimum/maximum values):
    // Define an integer a and print it to the screen
    std::cout << "integer a = " << a << std::endl;
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
    

    // Precision of float and double:
    std::cout.precision(20);
    // Define a float b with the value of pi : 3.14159265358979323846
    std::cout << "float b = \t" << b << std::endl;

    // Define a double c with the value of pi : 3.14159265358979323846
    std::cout << "double c = \t" << c << std::endl;
    std::cout << "Full      \t" << "3.14159265358979323846" << std::endl;



    // Display minimum and maximum values for float and double:
    std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << std::endl;

    std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << std::endl;

    // We also have some more niche types:
    // short - 2-byte integer (minimum/maximum values):
    // Minimum value: -32,768
    // Maximum value: 32,767
    short a_short = -2;
    std::cout << "Minimum value for short: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "Maximum value for short: " << std::numeric_limits<short>::max() << std::endl;

    // long - 8-byte integer (minimum/maximum values):
    // Minimum value: -9,223,372,036,854,775,808
    // Maximum value: 9,223,372,036,854,775,807
    long b_long = 43;
    std::cout << "Minimum value for long: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "Maximum value for long: " << std::numeric_limits<long>::max() << std::endl;

    // unsigned int - 4-byte unsigned integer (minimum/maximum values):
    // Minimum value: 0
    // Maximum value: 4,294,967,295
    unsigned int c_unsigned = 0;
    std::cout << "Minimum value for unsigned int: " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "Maximum value for unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl;

    return 0;
}
