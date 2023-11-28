#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string actor, txtacademyPoints, txtnumberOfJudges;
    double academyPoints, points = 0;
    int numberOfJudges;

    getline(cin, actor);
    getline(cin, txtacademyPoints);
    getline(cin, txtnumberOfJudges);

    academyPoints = stod(txtacademyPoints);
    numberOfJudges = stoi(txtnumberOfJudges);

    points = academyPoints;

    for (int i = 1; i <= numberOfJudges && points <= 1250.5; i++)
    {
        string judgeName, txtjudgePoints;
        double judgePoints;
        getline(cin, judgeName);
        getline(cin, txtjudgePoints);

        judgePoints = stod(txtjudgePoints);

        points = points + judgePoints * judgeName.length() * 0.5;
    }

    cout.setf(std::ios::fixed);
    cout.precision(1);

    if (points >= 1250.5)
        cout << "Congratulations, " << actor << " got a nominee for leading role with " << points << "!" << endl;
    else
        cout << "Sorry, " << actor << " you need " << 1250.5 - points << " more!" << endl;
}

