#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string destination;
    cin >> destination;

    double excursionCost= 0, savedMoneSum=0;

    while (destination != "End") {
        cin >> excursionCost;
        while (savedMoneSum < excursionCost) {
            double currentSave;
            cin >> currentSave;

            savedMoneSum += currentSave;
        }
        cout << "Going to "  << destination << "!" << endl;
        savedMoneSum = 0;
        cin >> destination;

    }

    return 0;
    
}
