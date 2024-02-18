#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numberSum;
    cin >> numberSum;

    int countCombinatons = 0;

    for (int x1 = 0; x1 <= numberSum; x1++) {
        for (int x2 = 0; x2 <= numberSum; x2++) {
            for (int x3 = 0; x3 <= numberSum; x3++) {
                

                if (x1 + x2 + x3 == numberSum) {
                    countCombinatons++;
                    
                }
                

            }
        }
    }

    cout << countCombinatons;
    
}
