#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string budgetTxt;
	getline(cin, budgetTxt);
	int budget = stoi(budgetTxt);
	double totalCost = 0;
	int coutProducts = 0;
	bool youAreReady = false;

	while (totalCost <= budget) {
		string currentItem;
		getline(cin, currentItem);
		if (currentItem == "Stop") {
			youAreReady = true;
			break;
		}
		coutProducts++;

		string currentPriceTxt;
		getline(cin, currentPriceTxt);
		double currentPrice = stod(currentPriceTxt);
		if (coutProducts % 3 == 0) {
			totalCost += currentPrice/2;
		}
		else {
			totalCost += currentPrice;
		}
	}

	if (youAreReady) {
		cout << "You bought " << coutProducts
			<< " products for " << fixed << setprecision(2) << totalCost << " leva." << endl;
	}
	else {
		cout << "You don't have enough money!" << endl;
		cout << "You need " << fixed << setprecision(2) << totalCost - budget << " leva!" << endl;
	}
}
