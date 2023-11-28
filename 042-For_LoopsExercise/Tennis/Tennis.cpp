
#include <iostream>
#include <math.h>
#include <iomanip>

using std::fixed;
using std::setprecision;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int tournamentsCount, startPoints, winsNumber = 0, points = 0;
    cin >> tournamentsCount >> startPoints;

    for (int i = 1; i <= tournamentsCount; i++)
    {
        string currentStage;
        cin >> currentStage;

        if (currentStage == "W")
        {
            winsNumber++;
            points += 2000;
        }
        else if (currentStage == "F")
        {
            points += 1200;
        }
        else if (currentStage == "SF")
        {
            points += 720;
        }
    }

    cout << "Final points: " << points + startPoints << endl;
    cout << "Average points: " << floor(points / tournamentsCount) << endl;
    cout << fixed << setprecision(2) << 100.0 * winsNumber / tournamentsCount << "%" << endl;
}

