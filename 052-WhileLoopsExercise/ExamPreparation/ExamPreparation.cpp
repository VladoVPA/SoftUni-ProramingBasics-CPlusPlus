
#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ws;
using std::fixed;
using std::setprecision;

int main()
{
	int poorGradesTotal, poorGradesCount = 0, sumOfGrades = 0, countGrades = 0;
	cin >> poorGradesTotal;
	
	string taskName, currentTaskName;
	cin >> ws;
	getline(cin, taskName);

	bool heFailed = false;

	while (taskName != "Enough")
	{
		int grade;
		cin >> grade;

		if (grade <= 4 && ++poorGradesCount == poorGradesTotal)
		{
			heFailed = true;
			break;
		}

		/*if (grade <= 4)
		{
			poorGradesCount++;
			if (poorGradesCount == poorGradesTotal)
			{
				heFailed = true;
				break;
			}
		}*/

		currentTaskName = taskName;
		countGrades++;
		sumOfGrades += grade;
		cin >> ws;
		getline(cin, taskName);
	}

	//cout.setf(std::ios::fixed);
	//cout.precision(2);

	if (heFailed)
	{
		cout << "You need a break, " << poorGradesTotal << " poor grades." << endl;
	}
	else
	{
		cout << "Average score: " << fixed <<setprecision(2) << 1.0 * sumOfGrades / countGrades << endl;
		cout << "Number of problems: " << countGrades << endl;
		cout << "Last problem: " << currentTaskName << endl;
	}
	/*cout << countGrades << endl;
	cout << currentTaskName << endl;
	cout << sumOfGrades << endl;*/


	
}
