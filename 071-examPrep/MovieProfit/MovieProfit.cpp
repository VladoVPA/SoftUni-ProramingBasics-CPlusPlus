#include <iostream>
#include <string>
using namespace std;

int main()
{
	string movieTitle;
	getline(cin, movieTitle);

	int days, tiketsNum, cinemaCost;
	double tiketPrice;
	cin >> days >> tiketsNum >> tiketPrice >> cinemaCost;

	double totalIncome = days * tiketsNum * tiketPrice;
	double expencese = 1.0 * totalIncome *  cinemaCost / 100;

	cout.setf(std::ios::fixed);
	cout.precision(2);
	cout << "The profit from the movie " << movieTitle << " is " << totalIncome - expencese << " lv." << endl;
}
