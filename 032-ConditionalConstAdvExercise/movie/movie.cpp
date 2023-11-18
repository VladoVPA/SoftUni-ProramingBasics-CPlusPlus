
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
    string tiketsType;
    int rows, columns;
    double profit = 0, price = 0;

    cin >> tiketsType >> rows >> columns;

    if (tiketsType == "Premiere")
    {
        price = 12.0;
    }
    else if (tiketsType == "Normal")
    {
        price = 7.5;
    }
    else if (tiketsType == "Discount")
    {
        price = 5.0;
    }

    profit = rows * columns * price;

    cout << fixed << setprecision(2) << profit << " leva" << endl;
}
