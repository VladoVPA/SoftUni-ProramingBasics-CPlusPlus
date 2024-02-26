#include <iostream>
using namespace std;

int main()
{
    int startNum, endNum;
    cin >> startNum >> endNum;

    for (int num = startNum; num <= endNum; num++) {
        int currentNum = num;
        bool numIsOK = true;
        while (currentNum != 0) {
            int n = currentNum % 10;
            if (n % 2 == 0) { 
                numIsOK = false;
                break; 
            }
            currentNum /= 10;
        }
        if (numIsOK) {
            cout << num << " ";
        }
    }
}
