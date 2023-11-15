
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int secondsFirst, secondsSecond, secondsThird;
    cin >> secondsFirst >> secondsSecond >> secondsThird;

    int sumeSeconds = secondsFirst + secondsSecond + secondsThird;

    int minutes = sumeSeconds / 60;
    int seconds = sumeSeconds % 60;
   
    cout << minutes << ":";

    if (seconds < 10)
    {
        cout << "0";
    }
    cout << seconds << endl;
}
