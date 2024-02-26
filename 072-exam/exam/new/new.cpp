#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int days;
    cin >> days;
    double startDist, dayDist, totalDist;
    cin >> startDist;

    dayDist = startDist;
    totalDist = startDist;

    bool enough = false;

    for (int i = 1; i <= days; i++) {
        int percent;
        cin >> percent;
        double aaaa = (1 + 1.0 * percent / 100);
        dayDist *= aaaa;
        totalDist += dayDist;

        if (totalDist >= 1000) {
            enough = 1;
            break;
        }
    }

    if (enough) {
        cout << "You've done a great job running " << ceil(totalDist - 1000) << " more kilometers!" << endl;
    }
    else {
        cout << "Sorry Mrs. Ivanova, you need to run " << ceil(1000 - totalDist) << " more kilometers" << endl;
    }

    return 0;
}