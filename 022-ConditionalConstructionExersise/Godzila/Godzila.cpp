
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	double budget, actorsNumber, actorsCostumePrice;
	cin >> budget >> actorsNumber >> actorsCostumePrice;

	double cost = budget * 0.1 + actorsNumber * actorsCostumePrice;

	if (actorsNumber > 150)
		cost = cost - 0.1 * actorsNumber * actorsCostumePrice;

	cout.setf(ios::fixed);
	cout.precision(2);
	
	if (budget < cost) {
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << cost - budget << " leva more." << endl;
	}
	else {
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << budget - cost << " leva left." << endl;
	}
	
}

