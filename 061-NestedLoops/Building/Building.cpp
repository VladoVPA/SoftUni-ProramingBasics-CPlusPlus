
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int floors, rooms;
    cin >> floors>> rooms;
    char prefix = ' ';

    for (int floor = floors; floor > 0; floor--) {
        if (floor == floors) {
            prefix = 'L';
        }
        else if (floor % 2 ==0) {
            prefix = 'O';
        }
        else {
            prefix = 'A';
        }

        for (int room = 0; room < rooms; room++) {
            cout << prefix << floor << room << " ";
        }

        cout << endl;

    }
}
