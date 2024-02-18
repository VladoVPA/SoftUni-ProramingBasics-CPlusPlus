#include <iostream>
#include <string>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
	bool shouldContinue = true;
	int countKids = 0, countStudents = 0, countStandard = 0;

	while (shouldContinue) {
		string movieTitle;
		getline(cin, movieTitle);

		if (movieTitle == "Finish") break;

		string seatsTxt;
		getline (cin, seatsTxt);
		int seats = stoi(seatsTxt);

		int countSeats = 0;
		while (countSeats < seats) {
			string currentInput;
			getline (cin, currentInput);
			
			if (currentInput == "kid") { countKids++; }
			else if (currentInput == "standard") { countStandard++; }
			else if (currentInput == "student") { countStudents++;  }
			else { break; }

			countSeats++;
		}
		cout << movieTitle << " - "<< fixed << setprecision(2) << 100.0 * countSeats /seats  << "% full." << endl;
	}
	int totalTikets = countKids + countStudents + countStandard;

	cout << "Total tickets: " << totalTikets << endl;
	cout << fixed << setprecision(2) << 100.0 * countStudents / totalTikets << "% student tickets." 
		<< endl;
	cout << fixed << setprecision(2) << 100.0 * countStandard / totalTikets << "% standard tickets." 
		<< endl;
	cout << fixed << setprecision(2) << 100.0 * countKids / totalTikets << "% kids tickets."
		<< endl;
}
