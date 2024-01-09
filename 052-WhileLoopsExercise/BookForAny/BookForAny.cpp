
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string bookToLookFor;
	getline(cin, bookToLookFor);

	string currentBook;
	getline(cin, currentBook);

	int countBooks = 0;
	bool isFound = false;

	while (currentBook != "No More Books")
	{
		if (currentBook == bookToLookFor)
		{
			isFound = true;
			break;
		}

		countBooks++;
		getline(cin, currentBook);
	}
	
	if (isFound == true)
	{
		cout << "You checked " << countBooks << " books and found it." << endl;
	}
	else
	{
		cout << "The book you search is not here!" << endl;
		cout << "You checked " << countBooks << " books." << endl;
	}

}
