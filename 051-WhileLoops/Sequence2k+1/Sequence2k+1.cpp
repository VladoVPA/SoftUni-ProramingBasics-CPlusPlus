#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	cin >> n;

	int currentNumber = 1;

	while (currentNumber <= n)
	{
		cout << currentNumber << endl;
		currentNumber = currentNumber * 2 + 1;

	}
}

