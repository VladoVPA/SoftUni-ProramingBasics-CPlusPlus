#include <iostream>

using namespace std;

int main()
{
    string firstName;
    string secondName;
    string town;
    int age;

    cin >> firstName;
    cin >> secondName;
    cin >> age;
    cin >> town;

    cout << "You are " << firstName << " " << secondName
        << ", a " << age << "-years old person from " << town << "." << endl;
}
