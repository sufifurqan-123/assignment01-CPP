#include <iostream>
using namespace std;

int main()
{
    double amount, discount, finalPrice;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount < 0)
    {
        cout << "Invalid purchase amount!";
        return 0;
    }

    // Nested conditional operator
    discount = (amount < 100) ? 0 :
               (amount <= 500) ? 10 :
               (amount <= 1000) ? 15 : 20;

    // Calculate discount amount
    double discountAmount = amount * discount / 100;

    // Calculate final price
    finalPrice = amount - discountAmount;

    cout << "\nPurchase Amount: Rs. " << amount;
    cout << "\nDiscount: " << discount << "%";
    cout << "\nDiscount Amount: Rs. " << discountAmount;
    cout << "\nFinal Price: Rs. " << finalPrice;

    return 0;
}