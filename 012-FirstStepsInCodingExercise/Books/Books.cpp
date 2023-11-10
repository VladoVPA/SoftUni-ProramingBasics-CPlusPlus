#include <iostream>

using namespace std;

int main()
{
	int bookPages;
	int pagesInOneHour;
	int days;

	cin >> bookPages >> pagesInOneHour >> days;

	double neededHours = bookPages / pagesInOneHour / days;

	cout << neededHours << endl;


}
