
#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n, numMax = INT_MIN;
    double sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int currentNumber;
        cin >> currentNumber;

        sum += currentNumber;

        if (currentNumber > numMax)
            numMax = currentNumber;
    }

    if (numMax == (sum -numMax))
    {
        cout << "Yes" << endl;
        cout << "Sum = " << numMax << endl;
    }
    else
    {
        cout << "No" << endl;
        cout << "Diff = "<< abs(numMax - (sum - numMax)) << endl;
    }
}
