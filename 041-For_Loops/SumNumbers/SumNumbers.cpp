
#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main()
{
    int rows, sum = 0;
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        int num;
        cin >> num;
        sum = sum + num;
    }
    cout << sum << endl;


}

