#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int startNumber, endNumber, magicNumber, sum = 0;
    cin >> startNumber >> endNumber >> magicNumber;

    int countCombinations = 0;
    
    for (int firstNumber = startNumber; firstNumber <= endNumber; firstNumber++) {
        for (int secondNumber = startNumber; secondNumber <= endNumber; secondNumber++) {
            sum = firstNumber + secondNumber;
            countCombinations++;

            if (sum == magicNumber) {
                cout << "Combination N:" << countCombinations
                    << " (" << firstNumber << " + " << secondNumber << " = " << magicNumber << ")" << endl;
                return 0;
            }
        }
    }

    cout << countCombinations <<" combinations - neither equals " << magicNumber << endl;
 

}
