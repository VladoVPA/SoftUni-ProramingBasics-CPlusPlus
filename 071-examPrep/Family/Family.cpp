#include <iostream>
using namespace std;

int main()
{
    double budget, nightPrice;
    int nightsNum, additionalCost;
    cin >> budget >> nightsNum >> nightPrice >> additionalCost;

    if (nightsNum > 7) { nightPrice = 0.95 * nightPrice; }

    double totalCost = nightsNum * nightPrice + 1.0 * budget * additionalCost / 100;

    cout.setf(std::ios::fixed);
    cout.precision(2);

    if (totalCost <= budget) {
        cout << "Ivanovi will be left with " << budget - totalCost << " leva after vacation." << endl;
    }
    else {
        cout << totalCost - budget << " leva needed." << endl;
    }
}
