#include <iostream>

using namespace std;

int main()
{
    const double NYLON_PRISE = 1.5;
    const double PAINT_PRISE = 14.5;
    const double PAINT_DILUENT = 5;

    int nylon;
    int paint;
    int diluent;
    int workHours;

    cin >> nylon >> paint >> diluent >> workHours;

    double materialCost = (nylon + 2) * NYLON_PRISE + 1.1 * paint * PAINT_PRISE + diluent * PAINT_DILUENT + 0.4;
    double laberCost = 0.3 * materialCost;

    double totalCost = materialCost + laberCost;

    cout << totalCost << endl;
}

