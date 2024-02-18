
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, positionToDisplay = 1;;
    cin >> num;

    int rowSize = 1;

    while (positionToDisplay <= num) {
        for (int row = 1; row <= rowSize; row++) {
            cout << positionToDisplay << " ";
            if (positionToDisplay == num) { return 0; }
            positionToDisplay++;
                       
        }
        rowSize++;
        cout << endl;
    }
}
