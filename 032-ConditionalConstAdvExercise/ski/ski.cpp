#include <iostream>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
    string roomType, evaluation, days; 
    getline(cin, days);
    getline(cin, roomType);
    getline(cin, evaluation);

    double price = 0, cost = 0;
    int nightsNumber = stoi(days) - 1;

    if (roomType == "room for one person")
    {
        price = 18;
        cost = price * nightsNumber;
    }
    else if (roomType == "apartment")
    {
        price = 25;
        if (stoi(days) < 10)
            cost = price * nightsNumber * 0.7;
        else if (stoi(days) < 15)
            cost = price * nightsNumber * 0.65;
        else
            cost = price * nightsNumber * 0.5;
    }
    else if (roomType == "president apartment")
    {
        price = 35;
        if (stoi(days) < 10)
            cost = price * nightsNumber * 0.9;
        else if (stoi(days) < 15)
            cost = price * nightsNumber * 0.85;
        else
            cost = price * nightsNumber * 0.8;
    }
    
    if (evaluation == "positive")
        cost = cost * 1.25;
    else if (evaluation == "negative")
        cost = cost * 0.9;

    cout << fixed << setprecision(2) << cost << endl;
}
