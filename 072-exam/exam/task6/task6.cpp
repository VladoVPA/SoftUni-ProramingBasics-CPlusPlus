#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	bool nHaveLastAs5 = false;
	bool nDivBy3 = false;

	if(n % 10 == 5) { nHaveLastAs5 = true; }
	if(n % 3 == 0) { nDivBy3 = true; }

	for (int a = 1; a <= 9; a++) {
		for (int b = 9; b >= a; b--) {
			for (int c = 0; c <= 9; c++) {
				for (int d = 9; d >= c; d--) {
					int sum = a + b + c + d;
					int multiply = a * b * c * d;

					if (sum == multiply && nHaveLastAs5) {
						cout << a << b << c << d << endl;
						return 0;
					}

					if (multiply / sum == 3 && nDivBy3) {
						cout << d << c << b << a << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "Nothing found" << endl;
}
