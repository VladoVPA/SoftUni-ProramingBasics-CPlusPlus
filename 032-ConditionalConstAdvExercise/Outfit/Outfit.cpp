#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
   string perodOfTheDay, outfit, shoes;
   int temp;

   cin >> temp >> perodOfTheDay;

   if (perodOfTheDay == "Evening")
   {
	   outfit = "Shirt";
	   shoes = "Moccasins";
   }
   else if (perodOfTheDay == "Afternoon")
   {
	   if (temp >= 10 && temp <= 18)
	   {
		   outfit = "Shirt";
		   shoes = "Moccasins";
	   }
	   else if (temp <= 24)
	   {
		   outfit = "T-Shirt";
		   shoes = "Sandals";
	   }
	   else if (temp >= 25)
	   {
		   outfit = "Swim Suit";
		   shoes = "Barefoot";
	   }
   }
   else if (perodOfTheDay == "Morning")
   {
	   if (temp >= 10 && temp <= 18)
	   {
		   outfit = "Sweatshirt";
		   shoes = "Sneakers";
	   }
	   else if (temp <= 24)
	   {
		   outfit = "Shirt";
		   shoes = "Moccasins";
	   }
	   else if (temp >= 25)
	   {
		   outfit = "T-Shirt";
		   shoes = "Sandals";
	   }
   }
   // It's {???????} degrees, get your {???????} and {??????}.

   cout << "It's " << temp << " degrees, get your " << outfit << " and " << shoes << "." << endl;
}
