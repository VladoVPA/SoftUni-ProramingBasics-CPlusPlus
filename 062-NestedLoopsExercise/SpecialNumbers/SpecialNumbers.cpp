
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    cin >> N;

    for (int i = 1111; i <= 9999; i++) {
        int n1 = 0, n2=0, n3=0, n4=0, currentNum = i;
        //while (currentNum != 0) {
            n1 = currentNum % 10;
            n2 = (currentNum / 10) % 10;
            n3 = ((currentNum / 10) / 10) % 10;
            n4 = (((currentNum / 10) / 10) / 10) % 10;
            
            if (n1 == 0 || n2 == 0 || n3 == 0 || n4 == 0) {
                continue;
            }

            if (N % n1 == 0 && N % n2 ==0 && N % n3 == 0 && N % n4==0) {
            cout << i << " ";
           // currentNum = 0;
           
        }
    }
}

