
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string dayOfTheWeek;
  cin >> dayOfTheWeek;

  if (dayOfTheWeek == "Monday" || dayOfTheWeek == "Tuesday" || dayOfTheWeek == "Friday")
  {
	  cout << 12 << endl;
  }
  else if (dayOfTheWeek == "Wednesday" || dayOfTheWeek == "Thursday")
  {
	  cout << 14 << endl;
  }
  else if (dayOfTheWeek == "Saturday" || dayOfTheWeek == "Sunday")
  {
	  cout << 16 << endl;
  }
}
