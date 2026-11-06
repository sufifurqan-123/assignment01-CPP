#include <iostream>
using namespace std;

int main()
{
    int num, original, reverse = 0;
    int start, end;

    // Check a single number
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        cout << original << " is a Palindrome Number.\n";
    else
        cout << original << " is not a Palindrome Number.\n";

    // Print palindrome numbers within a range
    cout << "\nEnter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    if (start < 0 || end < start)
    {
        cout << "Invalid range!";
        return 0;
    }

    cout << "\nPalindrome numbers between "
         << start << " and " << end << " are:\n";

    for (int i = start; i <= end; i++)
    {
        int temp = i;
        int rev = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        if (i == rev)
        {
            cout << i << " ";
        }
    }

    return 0;
}