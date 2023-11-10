#include <iostream>

using namespace std;

int main()
{
    int tax;
    cin >> tax;

    double shoes = tax - tax * 0.4;
    double kit = shoes - shoes * 0.2;
    double ball = kit * (1 / 4.0);
   double accessories = ball * (1 / 5.0);

    double price = tax + shoes + kit + ball +accessories;
    cout << price << endl;
 
}
