#include <iostream>
#include <string>

using namespace std;

int main()
{
    int peopleNum;
    string season;
    cin >> peopleNum >> season;

    double price = 0, totalCost = 0;

    if (season == "spring") {
        if (peopleNum <= 5) {
            price = 50;
        }
        else {
            price = 48;
        }
    }
    else if (season == "summer") {
        if (peopleNum <= 5) {
            price = 48.5 * 0.85;
        }
        else {
            price = 45 * 0.85;
        }
    }
    else if (season == "autumn") {
        if (peopleNum <= 5) {
            price = 60;
        }
        else {
            price = 49.5;
        }
    }
    else if (season == "winter") {
        if (peopleNum <= 5) {
            price = 86 * 1.08;
        }
        else {
            price = 85 * 1.08;
        }
    }
   
    totalCost = peopleNum * price;

    cout.setf(std::ios::fixed);
    cout.precision(2);

    cout << totalCost << " leva." << endl;
}
