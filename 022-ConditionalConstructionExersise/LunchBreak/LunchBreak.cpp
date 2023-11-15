#include <iostream>
#include <string>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string movieTitle;
    int movieDuration, lunchBreakDuration;

    getline(cin, movieTitle);
    cin >> movieDuration >> lunchBreakDuration;

    double lunchTime = 0.125 * lunchBreakDuration;      // 1/8 = 0.125
    double relaxTime = 0.25 * lunchBreakDuration;       // 1/4 = 0.25

    double freeTime = lunchBreakDuration - lunchTime - relaxTime;

    if (movieDuration <= freeTime)
    {
        cout << "You have enough time to watch " << movieTitle << " and left with " << ceil (freeTime - movieDuration) << " minutes free time." << endl;
    }
    else
    {
        cout << "You don't have enough time to watch " << movieTitle << ", you need " << ceil(movieDuration-freeTime) << " more minutes." << endl;
    }
}
