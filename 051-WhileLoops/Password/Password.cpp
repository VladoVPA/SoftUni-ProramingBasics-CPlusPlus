#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string userName, password;
    cin >> userName >> password;

    string tryPass;
    cin >> tryPass;

    while (tryPass != password)
    {
        cin >> tryPass;
    }

    cout << "Welcome " << userName << "!" << endl;
}
