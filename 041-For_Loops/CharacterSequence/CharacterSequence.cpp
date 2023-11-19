#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string text;
	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
		cout << text[i] << endl;
}

