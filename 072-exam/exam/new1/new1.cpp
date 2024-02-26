#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int days;
    int increse;
    double firstRun;

    cin >> days >> firstRun;

    double previusDayRun = firstRun;
    double totalKilometers = firstRun;

    bool isGood = false;

    for (int i = 1; i <= days; i++) {
        
        cin >> increse;

        double currentDayRun = previusDayRun * (1 + 1.0 * increse / 100);
        totalKilometers += currentDayRun;
        
        previusDayRun = currentDayRun;

        if (totalKilometers >= 1000) {
            isGood = true;
            break;
        }
    }
    

    if (isGood) {
        cout << "You've done a great job running " << ceil(totalKilometers - 1000) << " more kilometers!" << endl;
    }
    else {
        cout << "Sorry Mrs. Ivanova, you need to run " << ceil(1000 - totalKilometers) << " more kilometer" << endl;
    }
}
