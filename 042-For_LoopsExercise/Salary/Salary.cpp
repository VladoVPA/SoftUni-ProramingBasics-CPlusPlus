#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int n, salary;
    cin >> n >> salary;

    for (int i = 1; i <= n && salary > 0; i++)
    {
        string siteName;
        cin >> siteName;

        if (siteName == "Facebook")
            salary -= 150;
        if (siteName == "Instagram")
            salary -= 100;
        if (siteName == "Reddit")
            salary -= 50;
    }

    if (salary <= 0)
        cout << "You have lost your salary." << endl;
    else
        cout << salary << endl;

}
