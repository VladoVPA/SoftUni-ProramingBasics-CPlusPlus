
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int sum = 0;
    string text;
    getline (cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        char letter = text[i];

        if (letter == 'a')
            sum += 1;
        if (letter == 'e')
            sum += 2;
        if (letter == 'i')
            sum += 3;
        if (letter == 'o')
            sum += 4;
        if (letter == 'u')
            sum += 5;
    }
    cout << sum << endl;
}
