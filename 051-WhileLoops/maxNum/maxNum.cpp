
#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number, maxNum = INT_MIN;
    cin >> number;

    while (true)
    {
        if (cin.fail() == 1)
            break;

        if (number > maxNum)
            maxNum = number;

        cin >> number;
    }

    cout << maxNum << endl; 
}


