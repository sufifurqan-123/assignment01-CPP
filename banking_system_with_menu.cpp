#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 1000, amount;

    do
    {
        cout << "\n===== BANKING SYSTEM =====";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0)
                {
                    balance += amount;
                    cout << "Amount deposited successfully!";
                }
                else
                {
                    cout << "Invalid deposit amount!";
                }
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= 0)
                {
                    cout << "Invalid withdrawal amount!";
                }
                else if (amount > balance)
                {
                    cout << "Insufficient balance!";
                }
                else
                {
                    balance -= amount;
                    cout << "Withdrawal successful!";
                }
                break;

            case 3:
                cout << "Available Balance: Rs. " << balance;
                break;

            case 4:
                cout << "Thank you for using our banking system!";
                break;

            default:
                cout << "Invalid choice! Please try again.";
        }

    } while (choice != 4);

    return 0;
}