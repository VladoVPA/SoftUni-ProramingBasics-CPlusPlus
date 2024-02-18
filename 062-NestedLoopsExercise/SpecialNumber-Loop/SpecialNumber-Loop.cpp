
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    cin >> N;

    for (int i = 1111; i <= 9999; i++) {
        int n1 = 0, currentNum = i, countTo4=0;
        bool isGoodNumber = false;

        while (currentNum != 0) {
            n1 = currentNum % 10;
            currentNum /= 10;

            if (n1 == 0) { break; }

            if (N % n1 == 0) { countTo4++; }
        }
        if (countTo4 == 4) { cout << i << " "; }
        
    }
}

