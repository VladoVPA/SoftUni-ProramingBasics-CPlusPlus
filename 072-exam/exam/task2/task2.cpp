#include <iostream>

using namespace std;

int main()
{
	double partyCost;
	int loveLettresNum, rosesNum, keyholdersNum, sketchesNum, surpicesNum;
	cin >> partyCost >> loveLettresNum >> rosesNum >> keyholdersNum >> sketchesNum >> surpicesNum;

	int totalNum = partyCost + loveLettresNum + rosesNum + keyholdersNum + sketchesNum + surpicesNum;

	double income = loveLettresNum * 0.6 + rosesNum * 7.2 + keyholdersNum * 3.6 + sketchesNum * 18.2 + surpicesNum * 22;

	if (totalNum >= 25) {
		income = income * 0.65;
	}

	double finalIncome = income * 0.9;

	cout.setf(std::ios::fixed);
	cout.precision(2);

	if (finalIncome >= partyCost) {
		cout << "Yes! " << finalIncome - partyCost << " lv left." << endl;
	}
	else {
		cout << "Not enough money! " << partyCost - finalIncome << " lv needed." << endl;
	}

}
