#include <iostream>
using namespace std;

int main()
{
	int days, hours;
	cin >> days >> hours;

	double totalPerDay = 0, total = 0;
	double evenDayOddHour = 2.5;
	double oddDayEvendHour = 1.25;
	double otherCost = 1.0;

	cout.setf(std::ios::fixed);
	cout.precision(2);

	for (int day = 1; day <= days; day++) {
		bool dayIsEven = false;
		if (day % 2 == 0) { dayIsEven = true; }
		for (int hour = 1; hour <= hours; hour++) {
			if (dayIsEven && hour % 2 != 0) {
				totalPerDay += evenDayOddHour;
			}
			else if (!dayIsEven && hour % 2 == 0) {
				totalPerDay += oddDayEvendHour;
			}
			else {
				totalPerDay += otherCost;
			}
		}
		cout << "Day: " << day << " - " << totalPerDay << " leva" << endl;
		total += totalPerDay;
		totalPerDay = 0;
	}
	cout << "Total: " << total <<" leva" << endl;
}