#include <iostream>
using namespace std;

int main()
{
    int num, digit;
    int sum = 0, product = 1;

    cout << "Enter an integer: ";
    cin >> num;

    // Handle negative numbers
    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        sum = 0;
        product = 0;
    }
    else
    {
        while (num > 0)
        {
            digit = num % 10;

            sum = sum + digit;
            product = product * digit;

            num = num / 10;
        }
    }

    cout << "\nSum of digits: " << sum;
    cout << "\nProduct of digits: " << product;

    return 0;
}