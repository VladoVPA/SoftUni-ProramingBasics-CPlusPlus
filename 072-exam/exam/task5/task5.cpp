#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerName;
    getline(cin, playerName);

    string bestPlayerName;
    int maxGoals = 0;
    int countGoals = 0;

    bool haveHatTrick = false;

    while (playerName != "END") {
        int currentGoals;
        cin >> currentGoals;
        cin.ignore();

        if (currentGoals > maxGoals) {
            maxGoals = currentGoals;
            bestPlayerName = playerName;
        }

        if(currentGoals >= 3) { haveHatTrick = true; }

        if (currentGoals >= 10) { break; }

        getline(cin, playerName);
    }
    

    cout << bestPlayerName << " is the best player!" << endl;

    if (haveHatTrick) {
        cout << "He has scored "<< maxGoals << " goals and made a hat-trick !!!" << endl;
    }
    else {
        cout << "He has scored " << maxGoals << " goals." << endl;
    }
    
}
