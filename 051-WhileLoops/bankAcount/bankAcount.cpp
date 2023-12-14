#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
	string input;
	double balance = 0;
	cin >> input;

	cout.setf(std::ios::fixed);
	cout.precision(2);

	while (input != "NoMoreMoney")
	{
		if (stod(input) < 0)
		{
			cout << "Invalid operation!" << endl;
			break;
		}
		else
		{
			cout << "Increase: " << stod(input) << endl;
			balance = balance + stod(input);
			cin >> input;
		}
	}

	cout << "Total: " << balance << endl;
}
