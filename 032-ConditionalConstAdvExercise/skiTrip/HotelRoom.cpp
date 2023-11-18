#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string month;
    int days;
    double priceStudio = 0, priceApartment = 0;
    double costStudio = 0, costApartment = 0;
    double discountStudio = 0, discountApartment = 0; 

    cin >> month >> days;

    if (month == "May" || month == "October")
    {
        priceStudio = 50;
        priceApartment = 65;
        if (days > 7 && days <= 14)
            discountStudio = 0.05;
        else if (days > 14)
            discountStudio = 0.30;
    }
    else if (month == "June" || month == "September")
    {
        priceStudio = 75.2;
        priceApartment = 68.7;
        if (days > 14)
            discountStudio = 0.2;
    }
    else if (month == "July" || month == "August")
    {
        priceStudio = 76;
        priceApartment = 77;
    }

    if (days > 14)
        discountApartment = 0.1;

    costStudio = priceStudio * days * (1 - discountStudio);
    costApartment = priceApartment * days * (1 - discountApartment);

    cout.setf(std::ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << costApartment << " lv." << endl;
    cout << "Studio: " << costStudio << " lv." << endl;
}
