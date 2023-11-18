
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string animal;
    cin >> animal;

    if (animal == "dog")
    {
        cout << "mammal" << endl;
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
    {
        cout << "reptile" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }
}
