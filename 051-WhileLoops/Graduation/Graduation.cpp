#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
    int yearInSchole = 1;
    string name;
    cin >> name;
    double sumGrades = 0;
    bool failOnce = false;

    while (yearInSchole <= 12)
    {
        double grade;
        cin >> grade;

        if (grade < 4)
        {
            if (failOnce)
            {
                cout << name << " has been excluded at " << yearInSchole << " grade" << endl;
                return 0;
            }
            else
            {
                failOnce = true;
                continue;
            }
        }

        sumGrades += grade;
        yearInSchole++;
    }

    cout << name << " graduated. Average grade: " << fixed << setprecision(2) << sumGrades / 12 << endl;
}

