
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int numberMax, currentNum = 0, currentSum = 0;
	cin >> numberMax >> currentNum;

	currentSum += currentNum;

	while (currentSum < numberMax)
	{
		cin >> currentNum;
		currentSum += currentNum;
	}

	cout << currentSum << endl;
}
