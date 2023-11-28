#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int age, giftMoney = 10 , toyPrice, sum = 0;
	double mashinePrice;
	cin >> age >> mashinePrice >> toyPrice; 

	for (int i = 1; i <= age; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + giftMoney - 1;
			giftMoney += 10;
		}
		else
		{
			sum = sum + toyPrice;
		}
	}

	cout.setf(std::ios::fixed);
	cout.precision(2);

	if (mashinePrice <= sum)
	{
		cout << "Yes! " << sum - mashinePrice << endl;
	}
	else
	{
		cout << "No! " << mashinePrice - sum << endl;
	}
}
