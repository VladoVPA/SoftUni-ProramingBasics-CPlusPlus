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
    int num1, num2;
    char operation;
    int result = 0.0;
    double divisionResult = 0.0;
    bool isEven = false;

    cin >> num1 >> num2 >> operation;

    if ((operation == '/' || operation == '%') && num2 == 0)
    {
        cout << "Cannot divide " << num1 << " by zero" << endl;
        return 1;
    }

    if (operation == '+')
    {
        result = num1 + num2;
        if (result % 2 == 0)
            isEven = true;
    }
    else if (operation == '-')
    {
        result = num1 - num2;
        if (result % 2 == 0)
            isEven = true;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
        if (result % 2 == 0)
            isEven = true;
    }
    else if (operation == '/')
        divisionResult = 1.0 * num1 / num2;
    else if (operation == '%')
        result = num1 % num2;
    
    cout << num1 << " " << operation << " " << num2 << " = ";// << result;

    if (operation == '+' || operation == '-' || operation == '*')
    {
        cout << result;
        if (isEven == true)
            cout << " - even";
        else
            cout << " - odd";
    }
    else if (operation == '%')
        cout << result;
    else if (operation == '/')
        cout << fixed << setprecision(2) << divisionResult;

    cout << endl;
}
