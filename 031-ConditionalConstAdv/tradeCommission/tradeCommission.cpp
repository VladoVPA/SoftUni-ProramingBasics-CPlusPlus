#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
  string town;
  double sales, commissionPercentage;

  cin >> town >> sales;

  if (town != "Sofia" && town != "Varna" && town != "Plovdiv" || sales < 0)
  {
	  cout << "error" << endl;
	  return 1;
  }

  if (town == "Sofia")
  {
	  if (sales <= 500)
		  commissionPercentage = 0.05;
	  else if (sales <= 1000)
		  commissionPercentage = 0.07;
	  else if (sales <= 10000)
		  commissionPercentage = 0.08;
	  else
		  commissionPercentage = 0.12;
  }
  else if (town == "Varna")
  {
	  if (sales <= 500)
		  commissionPercentage = 0.045;
	  else if (sales <= 1000)
		  commissionPercentage = 0.075;
	  else if (sales <= 10000)
		  commissionPercentage = 0.10;
	  else
		  commissionPercentage = 0.13;
  }
  else if (town == "Plovdiv")
  {
	  if (sales <= 500)
		  commissionPercentage = 0.055;
	  else if (sales <= 1000)
		  commissionPercentage = 0.08;
	  else if (sales <= 10000)
		  commissionPercentage = 0.12;
	  else
		  commissionPercentage = 0.145;
  }

  cout << fixed << setprecision(2) << commissionPercentage * sales << endl;

}
