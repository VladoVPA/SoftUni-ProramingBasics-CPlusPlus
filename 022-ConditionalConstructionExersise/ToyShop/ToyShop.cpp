
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double excursionMoney;
    int puzzelQuant, dollQuant, bearQuant, minionQuant, truckQuant;

    cin >> excursionMoney >> puzzelQuant >> dollQuant >> bearQuant >> minionQuant >> truckQuant;

    const double PUZZLE_PRIZE = 2.6;
    const double DOLL_PRIZE = 3.0;
    const double BEAR_PRIZE = 4.1;
    const double MINION_PRIZE = 8.2;
    const double TRUCK_PRIZE = 2.0;

    int quantity = puzzelQuant + dollQuant + bearQuant + minionQuant + truckQuant;

    double orderMoney = puzzelQuant * PUZZLE_PRIZE 
        +
        dollQuant * DOLL_PRIZE
        +
        bearQuant * BEAR_PRIZE
        +
        minionQuant * MINION_PRIZE 
        + 
        truckQuant * TRUCK_PRIZE;

    double totalMoney;
        
    if (quantity >= 50)
        totalMoney = 0.9 * (orderMoney - orderMoney * 0.25);    // 0.9 because 10 % goes for rent
    else
        totalMoney = 0.9 * (orderMoney);    // 0.9 because 10 % goes for rent

    cout.setf(ios::fixed);
    cout.precision(2);

    if (excursionMoney <= totalMoney)
        cout << "Yes! " << totalMoney - excursionMoney << " lv left." << endl;
    else
        cout << "Not enough money! " << excursionMoney - totalMoney << " lv needed." << endl;
}
