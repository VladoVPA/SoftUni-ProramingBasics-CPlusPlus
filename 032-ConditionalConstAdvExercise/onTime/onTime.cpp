
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int examHour, examMinutes, arivelHour, arivelMinutes;
    int examConvertet, arivelConvertet, difference;

    cin >> examHour >> examMinutes >> arivelHour >> arivelMinutes;

    examConvertet = examHour * 60 + examMinutes;
    arivelConvertet = arivelHour * 60 + arivelMinutes;


    if (examConvertet == arivelConvertet)
    {
        cout << "On time" << endl;
        return 0;
    }
    else if (examConvertet < arivelConvertet)
    {
        cout << "Late" << endl;
        difference = arivelConvertet - examConvertet;
        if (difference < 60)
            cout << difference << " minutes after the start" << endl;
        else
        {
            int lateHour = difference / 60;
            int lateMinutes = difference % 60;
            cout << lateHour << ":" << string(lateMinutes < 10, '0') << lateMinutes << " hours after the start" << endl;
        }
    }
    else if (examConvertet > arivelConvertet)
    {
        difference = examConvertet - arivelConvertet;
        if (difference <= 30)
        {
            cout << "On time" << endl;
            cout << difference << " minutes before the start" << endl;
        }
        else if (difference < 60)
        {
            cout << "Early" << endl;
            cout << difference << " minutes before the start" << endl;
        }
        else
        {
            int earlyHour = difference / 60;
            int earlyMinutes = difference % 60;
            cout << "Early" << endl;
            cout << earlyHour << ":" << string(earlyMinutes < 10, '0') << earlyMinutes << " hours before the start" << endl;
        }
    }

}
