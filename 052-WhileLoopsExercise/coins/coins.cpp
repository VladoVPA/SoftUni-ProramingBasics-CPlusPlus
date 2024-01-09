#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double amountStart, countCoins = 0;
	cin >> amountStart;

	int amountInCoins = amountStart * 100;

	bool continueDividing = true;

	while (continueDividing && amountInCoins != 0)
	{

		if (amountInCoins >= 200)
		{
			amountInCoins = amountInCoins - 200;
			
		}
		else if (amountInCoins >= 100)
		{
			amountInCoins = amountInCoins % 100;
			countCoins++;
		}
		else if (amountInCoins >= 50)
		{
			amountInCoins = amountInCoins % 50;
			countCoins++;
		}
		else if (amountInCoins >= 20)
		{
			amountInCoins = amountInCoins - 20;
			countCoins++;
		}
		else if (amountInCoins >= 10)
		{
			amountInCoins = amountInCoins % 10;
			countCoins++;
		}
		else if (amountInCoins > 5)
		{
			amountInCoins = amountInCoins % 5;
			countCoins++;
		}
		else if (amountInCoins == 3 || amountInCoins == 4)
		{
			countCoins += 2;
			continueDividing = false;
		}
		else if (amountInCoins == 1 || amountInCoins == 2 || amountInCoins == 5)
		{
			countCoins++;
			continueDividing = false;
		}
		
	}
		cout << countCoins << endl;
}
