#include <iostream>
#include <string>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    bool shouldContinue = true;
    
    int sumPrimeNumbers = 0, sumNotPrimeNumbers = 0;

    while (shouldContinue) {
        string currentNumString;
        cin >> currentNumString;
       
        bool isPrime = true;

        if (currentNumString == "stop") {
            shouldContinue = false;
            break;
        }

        int currentNum = stoi(currentNumString);

        if (currentNum < 0) {
            cout << "Number is negative." << endl;
            continue;
        }

        for (int divider = 2; divider <= sqrt(currentNum); divider++) {
            if (currentNum % divider == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            sumPrimeNumbers += currentNum;
        }
        else {
            sumNotPrimeNumbers += currentNum;
        }
    }

    cout << "Sum of all prime numbers is: " << sumPrimeNumbers << endl;
    cout << "Sum of all non prime numbers is: "<< sumNotPrimeNumbers << endl;

}
