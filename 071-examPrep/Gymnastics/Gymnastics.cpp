#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string country, game;
    cin >> country >> game;
    double diff = 0, play =0;

    if (country == "Russia") {
        if (game == "ribbon") {
            diff = 9.1;
            play = 9.4;
        }
        else if (game == "hoop") {
            diff = 9.3;
            play = 9.8;
        }
        if (game == "rope") {
            diff = 9.6;
            play = 9.0;
        }
    }
    else if (country == "Bulgaria") {
        if (game == "ribbon") {
            diff = 9.6;
            play = 9.4;
        }
        else if (game == "hoop") {
            diff = 9.55;
            play = 9.75;
        }
        else if (game == "rope") {
            diff = 9.5;
            play = 9.4;
        }
    }
    else if (country == "Italy") {
        if (game == "ribbon") {
            diff = 9.2;
            play = 9.5;
        }
        else if (game == "hoop") {
            diff = 9.45;
            play = 9.35;
        }
        else if (game == "rope") {
            diff = 9.7;
            play = 9.15;
        }
    }

    cout << "The team of " << country << " get " << fixed << setprecision(3) << diff + play << " on " << game << "." << endl;
    cout << fixed << setprecision(2) << 1.0 * (20 - diff -play) / 20 *100 << "%" << endl;
}
