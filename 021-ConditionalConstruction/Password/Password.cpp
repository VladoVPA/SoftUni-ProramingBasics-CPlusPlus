#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
   string pass;
   cin >> pass;

   if (pass == "s3cr3t!P@ssw0rd")
   {
	   cout << "Welcome" << endl;
   }
   else
   {
	   cout << "Wrong password!" << endl;
   }
}
