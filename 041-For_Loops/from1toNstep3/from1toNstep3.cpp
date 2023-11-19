
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int numberN;
	cin >> numberN;

	for (int i = 1; i <= numberN; i += 3)
		cout << i << endl;

}