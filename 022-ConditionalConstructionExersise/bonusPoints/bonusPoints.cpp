
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   int points;
   double bonus;
   cin >> points;

   if (points <= 100) {
	   bonus = 5;
   }
   else if (points >= 1000) {
	   bonus = points * 0.1;
   }
   else {
	   bonus = points * 0.2;
   }

   if (points % 2 == 0) {
	   bonus = bonus + 1;
   }
   else if (points % 10 == 5) {
	   bonus = bonus + 2;
   }

   cout << bonus << endl;
   cout << points + bonus << endl;
}
