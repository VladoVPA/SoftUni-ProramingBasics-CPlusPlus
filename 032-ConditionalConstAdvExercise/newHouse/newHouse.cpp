#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
    string flowers;
    int flowersCount, budget;
    double cost, price;

    cin >> flowers >> flowersCount >> budget;

    if (flowers == "Roses")
    {
        price = 5;
        cost = price * flowersCount;
        if (flowersCount > 80)
            cost = 0.9 * cost;
    }
    else if (flowers == "Dahlias")
    {
        price = 3.8;
        cost = price * flowersCount;
        if (flowersCount > 90)
            cost = 0.85 * cost;
    }
    else if (flowers == "Tulips")
    {
        price = 2.8;
        cost = price * flowersCount;
        if (flowersCount > 80)
            cost = 0.85 * cost;
    }
    else if (flowers == "Narcissus")
    {
        price = 3;
        cost = price * flowersCount;
        if (flowersCount < 120)
            cost = 1.15 * cost;
    }
    else if (flowers == "Gladiolus")
    {
        price = 2.5;
        cost = price * flowersCount;
        if (flowersCount < 80)
            cost = 1.2 * cost;
    }

    cout.setf(std::ios::fixed);
    cout.precision(2);

    if (budget >= cost)
            cout << "Hey, you have a great garden with " << flowersCount << " " << flowers << " and " << budget - cost << " leva left." << endl;
    else
        cout << "Not enough money, you need " << cost - budget << " leva more." << endl;
}
