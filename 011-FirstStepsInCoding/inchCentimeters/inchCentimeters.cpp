#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double ONE_CM_TO_INCH = 2.54;
    double cm;
    double inch;

    cin >> cm;

    inch = cm * ONE_CM_TO_INCH;

    cout << inch << endl;
}