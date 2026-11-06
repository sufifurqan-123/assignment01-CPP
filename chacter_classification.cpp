#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
        // Uppercase vowels
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Uppercase Vowel";
            break;

        // Lowercase vowels
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Lowercase Vowel";
            break;

        default:

            if ((ch >= 'A' && ch <= 'Z') ||
                (ch >= 'a' && ch <= 'z'))
            {
                cout << "Consonant";
            }
            else if (ch >= '0' && ch <= '9')
            {
                cout << "Digit";
            }
            else
            {
                cout << "Special Character";
            }
    }

    return 0;
}