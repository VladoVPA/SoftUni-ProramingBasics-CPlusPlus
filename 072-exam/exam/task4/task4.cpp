#include <iostream>

using namespace std;

int main()
{
	int studentsNum;
	cin >> studentsNum;

	int countTop = 0, countGood = 0, countMidd = 0, countFail = 0;
	double averageGradesSum = 0;

	for (int num = 1; num <= studentsNum; num++) {
		double currentGrade;
		cin >> currentGrade;

		if (currentGrade >= 5) { countTop++; }
		else if (currentGrade >= 4 && currentGrade <= 4.99) { countGood++; }
		else if (currentGrade >= 3 && currentGrade <= 3.99) { countMidd++; }
		else if (currentGrade >= 2 && currentGrade <= 2.99) { countFail++; }

		averageGradesSum += currentGrade;

	}

	cout.setf(std::ios::fixed);
	cout.precision(2);

	cout << "Top students: " << 100.0 * countTop / studentsNum << "%" << endl;
	cout << "Between 4.00 and 4.99: " << 100.0 * countGood / studentsNum << "%" << endl;
	cout << "Between 3.00 and 3.99: " << 100.0 * countMidd / studentsNum << "%" << endl;
	cout << "Fail: " << 100.0 * countFail / studentsNum << "%" << endl;
	cout << "Average: " << 1.0 * averageGradesSum / studentsNum << endl;

}
