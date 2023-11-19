
#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main()
{
    int rows;
    int min, max;

    cin >> rows;

    if (rows == 1)
    {
        cin >> min;
        cout << "Max number: " << min << endl;
        cout << "Min number: " << min << endl;
    }
    else if (rows >1)
    {
        cin >> min;
        max = min;
        for (int i = 2; i <= rows; i++)
        {
            int num;
            cin >> num;
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
        cout << "Max number: " << max << endl;
        cout << "Min number: " << min << endl;

    }
}
