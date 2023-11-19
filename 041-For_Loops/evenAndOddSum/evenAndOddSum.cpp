
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int rows, evenSum = 0, oddSum = 0;
	cin >> rows;

	for (int i = 1; i <= rows; i++)
	{
		int number;
		cin >> number;
		if (i % 2 == 0)
			evenSum += number;
		else
			oddSum += number;
	}
	if (evenSum == oddSum)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << evenSum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(evenSum - oddSum) << endl;
	}
}
