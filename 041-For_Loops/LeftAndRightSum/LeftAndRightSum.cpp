
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, leftSum = 0, rightSum = 0;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int number;
        cin >> number;
        leftSum += number;
    }
    for (int i = 1; i <= num; i++)
    {
        int number;
        cin >> number;
        rightSum += number;
    }

    if (leftSum == rightSum)
        cout << "Yes, sum = " << leftSum << endl;
    else
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
}

