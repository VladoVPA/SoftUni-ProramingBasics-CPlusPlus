#include <iostream>
using namespace std;

int main()
{
    int startNum, endNum;
    cin >> startNum >> endNum;

    int s4 = startNum % 10;
    int s3 = (startNum / 10) % 10;
    int s2 = ((startNum / 10)/10) % 10;
    int s1 = (startNum / 1000);
    int n4 = endNum % 10;
    int n3 = (endNum / 10) % 10;
    int n2 = ((endNum / 10) / 10) % 10;
    int n1 = (endNum / 1000);

    for (int i = s1; i <= n1; i++) {
        if (i % 2 == 0) { continue; }
        for (int j = s2; j <= n2; j++) {
            if (j % 2 == 0) { continue; }
            for (int k = s3; k <= n3; k++) {
                if (k % 2 == 0) { continue; }
                for (int l = s4; l <= n4; l++) {
                    if (l % 2 == 0) { continue; }
                    cout << i << j << k << l << " ";
                }
            }
        }
    }

}
