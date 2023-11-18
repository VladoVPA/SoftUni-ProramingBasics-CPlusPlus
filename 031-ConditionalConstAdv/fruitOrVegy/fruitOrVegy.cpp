#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string product;
  cin >> product;

  if (product == "banana" ||
	  product == "apple" ||
	  product == "kiwi" ||
	  product == "cherry" ||
	  product == "lemon" ||
	  product == "grapes")
  {
	  cout << "fruit" << endl;
  }
  else if (product == "tomato" ||
	  product == "cucumber" ||
	  product == "pepper" ||
	  product == "carrot")
  {
	  cout << "vegetable" << endl;
  }
  else
	  cout << "unknown" << endl;
}
