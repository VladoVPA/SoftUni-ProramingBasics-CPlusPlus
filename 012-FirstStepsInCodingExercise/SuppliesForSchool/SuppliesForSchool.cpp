#include <iostream>

using namespace std;

int main()
{
    int pens;
    int markers;
    int detergent;
    int DiscountPersentage;

    const double penPrice = 5.80;
    const double markerPrice = 7.20;
    const double detergentPrice = 1.20;

    cin >> pens >> markers >> detergent >> DiscountPersentage;

    double total = pens * penPrice
        +
        markers * markerPrice
        +
        detergent * detergentPrice;

    double final = total - total * DiscountPersentage * 0.01;

    cout << final << endl;

}
