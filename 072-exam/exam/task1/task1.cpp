#include <iostream>

using namespace std;

int main()
{
	double proceseorPrice, videoPrice, ramPrice;
	cin >> proceseorPrice >> videoPrice >> ramPrice;

	int ramNum;
	cin >> ramNum;

	double discount;
	cin >> discount;

	double totalCostDolars = proceseorPrice * (1 - discount) + videoPrice * (1 - discount) + ramNum * ramPrice;

	cout.setf(std::ios::fixed);
	cout.precision(2);

	cout << "Money needed - " << totalCostDolars * 1.57 << " leva." << endl;

}
