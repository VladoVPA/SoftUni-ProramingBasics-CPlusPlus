#include <iostream>

using namespace std;

int main()
{
    const double CHICKEN_PRICE = 10.35;
    const double FISH_PRISE = 12.4;
    const double VEGETERIAN_PRICE = 8.15;

    int chickenNumber;
    int fishNumber;
    int vegeterianNumber;
    
    cin >> chickenNumber >> fishNumber >> vegeterianNumber;

    double totalPrice = CHICKEN_PRICE * chickenNumber + FISH_PRISE * fishNumber + VEGETERIAN_PRICE * vegeterianNumber;

    double desert = totalPrice * 0.2;
    double finalPrice = totalPrice + desert + 2.5;

    cout << finalPrice << endl;

}
