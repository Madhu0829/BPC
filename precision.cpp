#include <iostream>

int main() {
    double value = 1234.5678;

    // Set precision to 2
    std::cout.precision(2);

    // Output the value with the set precision, width, and fill character
    std::cout << value << std::endl;

    return 0;
}