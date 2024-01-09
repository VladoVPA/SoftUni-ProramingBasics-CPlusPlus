#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int sideA, sideB;
    cin >> sideA >> sideB;

    int totalPieces = sideA * sideB;

    string currentServe;
    bool serveIsOver = false;

    while (totalPieces > 0)
    {
        cin >> currentServe;
        if (currentServe == "STOP")
        {
            serveIsOver = true;
            break;
        }
        else
        {
            totalPieces -= stoi(currentServe);
        }
    }

    if (serveIsOver)
        cout << totalPieces << " pieces are left." << endl;
    else
        cout << "No more cake left! You need " << abs(totalPieces) << " pieces more." << endl;
}
 
