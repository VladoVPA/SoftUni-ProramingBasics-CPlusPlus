#include <iostream>

using namespace std;

int main()
{
    const double PRICE_PER_SQURM = 7.61;
    const double discount = 0.18;
    double yardSize, totalPrice, finalPrice;

    cin >> yardSize;

    totalPrice = yardSize * PRICE_PER_SQURM;
    finalPrice = totalPrice - discount * totalPrice;


    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount * totalPrice << " lv." << endl;
}
