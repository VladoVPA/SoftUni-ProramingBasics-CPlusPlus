
#include <iostream>

using namespace std;

int main()
{
    int lenght;
    int widht;
    int height;
    double usedPercentage;
    cin >> lenght >> widht >> height >> usedPercentage;

    double volume = lenght * widht * height / 1000.0;

    double liters = volume - volume * usedPercentage * 0.01;
    cout << liters << endl;


}
