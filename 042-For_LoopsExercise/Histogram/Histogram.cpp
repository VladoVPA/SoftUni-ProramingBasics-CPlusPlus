#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		double currentNum;
		cin >> currentNum;

		if (currentNum < 200)
			c1++;
		else if (currentNum < 400)
			c2++;
		else if (currentNum < 600)
			c3++;
		else if (currentNum < 800)
			c4++;
		else 
			c5++;
	}

	cout.setf(std::ios::fixed);
	cout.precision(2);

	cout << 100.0 * c1 / n << "%" << endl;
	cout << 100.0 * c2 / n << "%" << endl;
	cout << 100.0 * c3 / n << "%" << endl;
	cout << 100.0 * c4 / n << "%" << endl;
	cout << 100.0 * c5 / n << "%" << endl;
}
