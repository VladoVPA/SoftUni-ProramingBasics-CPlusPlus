#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string season;
    int budget, fishermens;
    double cost, discount;

    cin >> budget >> season >> fishermens;

    if (fishermens <= 6)
        discount = 0.9;
    else if (fishermens <= 11)
        discount = 0.85;
    else if (fishermens >= 12)
        discount = 0.75;

    if (season == "Spring")
    {
        cost = 3000 * discount;
        if (fishermens % 2 == 0)
            cost = cost - 0.05 * cost;
    }
    else if (season == "Summer" || season == "Autumn")
    {
        cost = 4200 * discount;
        if (fishermens % 2 == 0 && season != "Autumn")
            cost = cost - 0.05 * cost;
    }
    else if (season == "Winter")
    {
        cost = 2600 * discount;
        if (fishermens % 2 == 0)
            cost = cost - 0.05 * cost;
    }

    cout.setf(std::ios::fixed);
    cout.precision(2);

    if (budget >= cost)
        cout << "Yes! You have " << budget - cost << " leva left." << endl;
    else
        cout << "Not enough money! You need " << cost - budget << " leva." << endl;
}
