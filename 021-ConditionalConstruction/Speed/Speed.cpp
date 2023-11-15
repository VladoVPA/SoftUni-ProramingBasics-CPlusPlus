#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double speed;
    cin >> speed;

    if (speed <= 10)
    {
        cout << "slow" << endl;
    }
    else if (speed <= 50)
    {
        cout << "average" << endl;
    }
    else if (speed <= 150)
    {
        cout << "fast" << endl;
    }
    else if(speed <= 1000)
    {
        cout << "ultra fast" << endl;
    }
    else
    {
        cout << "extremely fast" << endl;
    }
}

