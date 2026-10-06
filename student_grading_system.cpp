#include <iostream>
using namespace std;

int main()
{
    float marks[5], total = 0, percentage;
    int failedSubjects = 0;

    // Input marks
    cout << "Enter marks of 5 subjects (out of 100):\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];

        if (marks[i] < 40)
        {
            failedSubjects++;
        }
    }

    // Calculate percentage
    percentage = total / 5;

    cout << "\nTotal Marks = " << total << "/500";
    cout << "\nPercentage = " << percentage << "%\n";

    // Check for Repeat Year
    if (failedSubjects > 1)
    {
        cout << "Result: Repeat Year";
    }
    else
    {
        // Nested if-else for grading
        if (percentage >= 80)
        {
            cout << "Grade: A";
        }
        else
        {
            if (percentage >= 70)
            {
                cout << "Grade: B";
            }
            else
            {
                if (percentage >= 60)
                {
                    cout << "Grade: C";
                }
                else
                {
                    if (percentage >= 50)
                    {
                        cout << "Grade: D";
                    }
                    else
                    {
                        cout << "Grade: F";
                    }
                }
            }
        }
    }

    return 0;
}