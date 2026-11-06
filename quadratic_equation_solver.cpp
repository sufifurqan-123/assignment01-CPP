#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant;
    double root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Check whether coefficient a is valid
    if (a != 0)
    {
        discriminant = (b * b) - (4 * a * c);

        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            cout << "Roots are Real and Distinct\n";
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        }
        else
        {
            if (discriminant == 0)
            {
                root1 = -b / (2 * a);

                cout << "Roots are Real and Equal\n";
                cout << "Root 1 = Root 2 = " << root1;
            }
            else
            {
                double realPart = -b / (2 * a);
                double imaginaryPart =
                    sqrt(-discriminant) / (2 * a);

                cout << "Roots are Imaginary (Complex)\n";

                cout << "Root 1 = " << realPart
                     << " + " << imaginaryPart << "i\n";

                cout << "Root 2 = " << realPart
                     << " - " << imaginaryPart << "i\n";
            }
        }
    }
    else
    {
        cout << "Invalid Equation: a cannot be zero.";
    }

    return 0;
}