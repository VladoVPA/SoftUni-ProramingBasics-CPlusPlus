#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string dayOfTheWeek, fruit;
  double kilos, price, cost;
  bool weekday;

  cin >> fruit >> dayOfTheWeek >> kilos;
 
  if (dayOfTheWeek == "Monday" || dayOfTheWeek == "Tuesday" || dayOfTheWeek == "Wednesday" || dayOfTheWeek == "Thursday" || dayOfTheWeek == "Friday")
	  weekday = true;
  else if (dayOfTheWeek == "Saturday" || dayOfTheWeek == "Sunday")
	  weekday = false;
  else
  {
	  cout << "error" << endl;
	  return 1;
  }

	if (fruit == "banana" && weekday == true)
		  price = 2.5;
	else if (fruit == "banana" && weekday == false)
		  price = 2.7;
	else if (fruit == "apple" && weekday == true)
		  price = 1.2;
	else if (fruit == "apple" && weekday == false)
		  price = 1.25;
	else if (fruit == "orange" && weekday == true)
		  price = 0.85;
	else if (fruit == "orange" && weekday == false)
		  price = 0.90;
	else if (fruit == "grapefruit" && weekday == true)
		  price = 1.45;
	else if (fruit == "grapefruit" && weekday == false)
		  price = 1.60;
	else if (fruit == "kiwi" && weekday == true)
		  price = 2.7;
	else if (fruit == "kiwi" && weekday == false)
		  price = 3.0;
	else if (fruit == "pineapple" && weekday == true)
		  price = 5.5;
	else if (fruit == "pineapple" && weekday == false)
		  price = 5.6;
	else if (fruit == "grapes" && weekday == true)
		  price = 3.85;
	else if (fruit == "grapes" && weekday == false)
		  price = 4.20;
	else
	  {
		  cout << "error" << endl;
		  return 1;
	  }

	  cout.setf(std::ios::fixed);
	  cout.precision(2);

	  cout << kilos * price << endl;
}
