#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    int daysInMonth;
    int totalDays = 0;

    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;

    // Step 1: Validate month, year and day
    if (year < 1 || month < 1 || month > 12 || day < 1)
    {
        cout << "Invalid Date!";
        return 0;
    }

    // Step 2: Calculate days in the given month
    if (month == 2)
    {
        if (year % 400 == 0 ||
            (year % 4 == 0 && year % 100 != 0))
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
    {
        daysInMonth = 30;
    }
    else
    {
        daysInMonth = 31;
    }

    // Step 3: Validate day
    if (day > daysInMonth)
    {
        cout << "Invalid Date!";
        return 0;
    }

    // Step 4: Calculate total days before the given year
    int y = year - 1;

    totalDays = 365 * y + y / 4 - y / 100 + y / 400;

    // Step 5: Add days of previous months
    for (int i = 1; i < month; i++)
    {
        if (i == 2)
        {
            if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            {
                totalDays += 29;
            }
            else
            {
                totalDays += 28;
            }
        }
        else if (i == 4 || i == 6 ||
                 i == 9 || i == 11)
        {
            totalDays += 30;
        }
        else
        {
            totalDays += 31;
        }
    }

    // Step 6: Add the current day
    totalDays += day;

    // Step 7: Calculate weekday
    int weekday = totalDays % 7;

    // Step 8: Display weekday using switch
    switch (weekday)
    {
        case 0:
            cout << "Sunday";
            break;

        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;
    }

    cout << "\nValid Date!";

    return 0;
}