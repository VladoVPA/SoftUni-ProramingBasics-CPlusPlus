#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
   string dayOfTheWeek;
   int hour;

   cin >> hour >> dayOfTheWeek;

   if (hour < 10 || hour > 18 || dayOfTheWeek == "Sunday")
   {
	   cout << "closed" << endl;
   }
   else
	   cout << "open" << endl;
}
