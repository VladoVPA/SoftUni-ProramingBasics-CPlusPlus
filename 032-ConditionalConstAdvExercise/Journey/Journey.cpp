#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
   string season, destination, accomodation;
   double budget, cost;

   cin >> budget >> season;

   if (budget <= 100)
   {
	   destination = "Bulgaria";
	   if (season == "summer")
	   {
		   cost = budget * 0.3;
		   accomodation = "Camp";
	   }
	   else
	   {
		   cost = budget * 0.7;
		   accomodation = "Hotel";
	   }
   }
   else if (budget <= 1000)
   {
	   destination = "Balkans";
	   if (season == "summer")
	   {
		   cost = budget * 0.4;
		   accomodation = "Camp";
	   }
	   else
	   {
		   cost = budget * 0.8;
		   accomodation = "Hotel";
	   }
   }
   else if (budget > 1000)
   {
	   destination = "Europe";
	   accomodation = "Hotel";
	   cost = 0.9 * budget;
   }

   cout.setf(std::ios::fixed);
   cout.precision(2);

   cout << "Somewhere in " << destination << endl;
   cout << accomodation << " - " << cost << endl;
}
