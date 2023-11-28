
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   int num, groupTo5sum = 0, groupTo12sum = 0, groupTo25sum = 0, groupTo40sum = 0, groupOver41sum = 0, allPeopleSum=0;
   cin >> num;

   for (int i = 1; i <= num; i++)
   {
	   int curentGroup;
	   cin >> curentGroup;

	   allPeopleSum += curentGroup;

	   if (curentGroup <= 5)
	   {
		   groupTo5sum += curentGroup;
	   }
	   else if (curentGroup <= 12)
	   {
		   groupTo12sum += curentGroup;
	   }
	   else if (curentGroup <= 25)
	   {
		   groupTo25sum += curentGroup;
	   }
	   else if (curentGroup <= 40)
	   {
		   groupTo40sum += curentGroup;
	   }
	   else
	   {
		   groupOver41sum += curentGroup;
	   }
   }

   cout.setf(std::ios::fixed);
   cout.precision(2);

   cout << 100.0 * groupTo5sum / allPeopleSum << "%" << endl;
   cout << 100.0 * groupTo12sum / allPeopleSum << "%" << endl;
   cout << 100.0 * groupTo25sum / allPeopleSum << "%" << endl;
   cout << 100.0 * groupTo40sum / allPeopleSum << "%" << endl;
   cout << 100.0 * groupOver41sum / allPeopleSum << "%" << endl;

}

