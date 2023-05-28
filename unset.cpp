#include <iostream>

using namespace std;

int main() {
    double value = 1234.5678;

    // Set the scientific flag
     cout.setf( ios::scientific);

    // Output the value with scientific notation
     cout << value <<  endl;

    // Turn off the scientific flag
     cout.unsetf( ios::scientific);

    // Output the value without scientific notation
     cout << value <<  endl;

    return 0;
}