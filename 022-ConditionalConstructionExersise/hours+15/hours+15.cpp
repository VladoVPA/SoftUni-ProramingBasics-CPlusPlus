
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int startHour, startMinutes, futureHour, futureMinutes;
    cin >> startHour >> startMinutes;

    int timeInMinutes = startHour * 60 + startMinutes;

    int timePlus15 = timeInMinutes + 15;

    futureHour = timePlus15 / 60;
    futureMinutes = timePlus15 % 60;

    if (futureHour >= 24)
        futureHour = futureHour - 24; 

    cout << futureHour << ":";

    if (futureMinutes < 10)
        cout << "0";
    
    cout << futureMinutes << endl;

}
