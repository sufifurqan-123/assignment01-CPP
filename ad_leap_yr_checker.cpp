#include <iostream>
using namespace std;

// Nested if-else leap year check
bool isLeap(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;   // divisible by 400
            } else {
                return false;  // divisible by 100 but not 400
            }
        } else {
            return true;       // divisible by 4 but not 100
        }
    } else {
        return false;          // not divisible by 4
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeap(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
        cout << "Next 5 leap years: ";

        int count = 0;
        int next = year + 1;
        while (count < 5) {
            if (isLeap(next)) {
                cout << next << " ";
                count++;
            }
            next++;
        }
        cout << endl;
    }

    return 0;
}