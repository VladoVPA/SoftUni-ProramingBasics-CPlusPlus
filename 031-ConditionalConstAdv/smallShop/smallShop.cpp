
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string town, product;
    double quantity, price;

    cin >> product >> town >> quantity;

    if (product == "coffee")
    {
        if (town == "Sofia")
            price = quantity * 0.5;
        else if (town == "Plovdiv")
            price = quantity * 0.4;
        else if (town == "Varna")
            price = quantity * 0.45;
    }
    else if (product == "water")
    {
        if (town == "Sofia")
            price = quantity * 0.8;
        else if (town == "Plovdiv")
            price = quantity * 0.7;
        else if (town == "Varna")
            price = quantity * 0.7;
    }
    else if (product == "beer")
    {
        if (town == "Sofia")
            price = quantity * 1.2;
        else if (town == "Plovdiv")
            price = quantity * 1.15;
        else if (town == "Varna")
            price = quantity * 1.1;
    }
    else if (product == "sweets")
    {
        if (town == "Sofia")
            price = quantity * 1.45;
        else if (town == "Plovdiv")
            price = quantity * 1.3;
        else if (town == "Varna")
            price = quantity * 1.35;
    }
    else if (product == "peanuts")
    {
        if (town == "Sofia")
            price = quantity * 1.6;
        else if (town == "Plovdiv")
            price = quantity * 1.5;
        else if (town == "Varna")
            price = quantity * 1.55;
    }
    cout << price << endl;
}
 