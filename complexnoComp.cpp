
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double real1, imag1;
    double real2, imag2;

    // Input first complex number
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> real1 >> imag1;

    // Input second complex number
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> real2 >> imag2;

    // Calculate magnitudes
    double magnitude1 = sqrt(real1 * real1 + imag1 * imag1);
    double magnitude2 = sqrt(real2 * real2 + imag2 * imag2);

    // Compare magnitudes
    if (magnitude1 > magnitude2)
    {
        cout << "First complex number has higher magnitude." << endl;
    }
    else if (magnitude2 > magnitude1)
    {
        cout << "Second complex number has higher magnitude." << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}
