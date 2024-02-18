
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int numStart,numEnd;
    cin >> numStart >> numEnd;

    for (int i = numStart; i <= numEnd; i++) {
        int currentNumber = i;
        int position; 

        int counter = 0, evenSum = 0, oddSum = 0;
       
        while (currentNumber != 0) {
            position = currentNumber % 10;
            currentNumber /= 10;
            
            if (counter % 2 == 0) {
                evenSum += position;
            }
            else {
                oddSum += position;
            }
            counter++;
        }
        if (evenSum == oddSum) {
            cout << i << " ";
        }
    }
}
