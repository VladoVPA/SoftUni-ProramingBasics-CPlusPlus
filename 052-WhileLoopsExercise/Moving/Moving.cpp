#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int sideA, sideB, hight;
    cin >> sideA >> sideB >> hight;

    int roomSpaceLeft = sideA * sideB * hight;

    bool noMoreSpace = false;

    string currentIntput;
    cin >> currentIntput;

    while (currentIntput != "Done")
    {
        roomSpaceLeft -= stoi(currentIntput);

        if (roomSpaceLeft < 0)
        {
            noMoreSpace = true;
            break;
        }

        cin >> currentIntput;
    }

    if (noMoreSpace)
        cout << "No more free space! You need " << - roomSpaceLeft << " Cubic meters more." << endl;
    else
        cout << roomSpaceLeft <<" Cubic meters left." << endl;
}
