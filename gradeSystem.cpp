#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    int failedSubjects = 0;
    double percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // Count failed subjects
    if (m1 < 40)
        failedSubjects++;

    if (m2 < 40)
        failedSubjects++;

    if (m3 < 40)
        failedSubjects++;

    if (m4 < 40)
        failedSubjects++;

    if (m5 < 40)
        failedSubjects++;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    // Nested if-else for grade
    if (failedSubjects > 1)
    {
        cout << "Repeat Year";
    }
    else
    {
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