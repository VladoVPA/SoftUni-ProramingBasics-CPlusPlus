
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double budget;
    int videocardsQuant, procesorQuant, ramQuant;

    cin >> budget >> videocardsQuant >> procesorQuant >> ramQuant;

    double moneyForVideocards = videocardsQuant * 250;      // 250 lv is the price for one videocard

    double moneyForProcesors = procesorQuant * (0.35 * moneyForVideocards);

    double moneyForRam = ramQuant * (.1 * moneyForVideocards);

    double cost = moneyForVideocards + moneyForProcesors + moneyForRam;

    if (videocardsQuant > procesorQuant)
        cost = cost - .15 * cost;

    cout.setf(std::ios::fixed);
    cout.precision(2);

    if (budget >= cost)
    {
        cout << "You have " << budget - cost << " leva left!" << endl;
    }
    else
    {
        cout << "Not enough money! You need " << cost - budget << " leva more!" << endl;
    }
}

