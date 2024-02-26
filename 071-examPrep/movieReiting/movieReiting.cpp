#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
	int movies;
	cin >> movies;
	cin.ignore();

	double totalRating = 0;
	string goodMovie, badMovie;
	double maxRaiting = INT_MIN, minRaiting = INT_MAX;

	for (int i = 1; i <= movies; i++) {
		string movieTitle;
		getline(cin, movieTitle);

		double currentRating;
		cin >> currentRating;
		cin.ignore();

		totalRating += currentRating;

		if (currentRating < minRaiting) {
			minRaiting = currentRating;
			badMovie = movieTitle;
		}
		
		if (currentRating > maxRaiting) {
			maxRaiting = currentRating;
			goodMovie = movieTitle;
		}
	}
	cout.setf(std::ios::fixed);
	cout.precision(1);

	cout << goodMovie << " is with highest rating: " << maxRaiting << endl;
	cout << badMovie << " is with lowest rating: " << minRaiting << endl;
	cout << "Average rating: " << 1.0 * totalRating / movies << endl;
}
