#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int totalSteps = 0;
    const int STEPS_GOAL = 10000;
    
    while (totalSteps < STEPS_GOAL)
    {
        string currentInput;
        getline(cin, currentInput);

        int currentSteps;

        if (currentInput == "Going home")
        {
            cin >> currentSteps;
            totalSteps += currentSteps;
            break;
        }
        else
        {
            currentSteps = stoi(currentInput);
            totalSteps += currentSteps;
        }

    }

    if (totalSteps < STEPS_GOAL)
    {
        cout << STEPS_GOAL - totalSteps << " more steps to reach goal." << endl;
    }
    else
    {
        cout << "Goal reached! Good job!" << endl;
    }
}
