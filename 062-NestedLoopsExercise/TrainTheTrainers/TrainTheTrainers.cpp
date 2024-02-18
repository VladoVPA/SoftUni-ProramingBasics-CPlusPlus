#include <iostream>
#include <string>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int trainersNumber, countTasks=0;
    double currantTaskGrade = 0, allTaskGrades = 0;
    string trainers;
    getline (cin, trainers);
    trainersNumber = stoi(trainers);

    bool shouldContinue = true;

    cout.setf(std::ios::fixed);
    cout.precision(2);

    while (shouldContinue) {
        string taskName;
        getline(cin, taskName);

        if (taskName == "Finish") {
            shouldContinue = false;
            break;
        }
        currantTaskGrade = 0;

        for (int counter = 1; counter <= trainersNumber; counter++) {
            double current;
            string currentTxt;
            getline (cin, currentTxt);

            current = stod(currentTxt);

            currantTaskGrade += current;
            allTaskGrades += current;
            countTasks++;
        }

        cout << taskName << " - " << 1.0 * currantTaskGrade / trainersNumber << "." << endl;
    }

    cout << "Student's final assessment is " << 1.0 * allTaskGrades / countTasks << "." << endl;

}
