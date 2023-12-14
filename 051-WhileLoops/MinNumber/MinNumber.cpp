#include <iostream>
#include <climits>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string currentNumberText;
    int numberMin = INT_MAX;

    cin >> currentNumberText;

    while (currentNumberText != "Stop")
    {
        int number = stoi(currentNumberText);
        if (number < numberMin)
        {
            numberMin = number;
        }
        cin >> currentNumberText;
    }

    cout << numberMin << endl;
}

