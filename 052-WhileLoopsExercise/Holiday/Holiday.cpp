
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::max;

int main()
{
    double moneyForHoliday, savedMoney;
    cin >> moneyForHoliday >> savedMoney;

    int daysCount = 0;
    int consecutiveDays = 0;
    bool youFail = false;

    while (savedMoney < moneyForHoliday)
    {
        string operationDef;
        cin >> operationDef;

        double currentAmount;
        cin >> currentAmount;
    
        daysCount++;

        if (operationDef == "save")
        {
            savedMoney += currentAmount;
            consecutiveDays = 0;
        }

        if (operationDef == "spend")
        {
            consecutiveDays++;
            //savedMoney = max (0.0, savedMoney - currentAmount);
            if ((savedMoney - currentAmount) < 0)
            {
                savedMoney = 0.0;
            }
            else
            {
                savedMoney = savedMoney - currentAmount;
            }
        }

        if (consecutiveDays == 5)
        {
            youFail = true;
            break;
        }
    }
    
    if (youFail)
    {
        cout << "You can't save the money." << endl << daysCount << endl;
    }
    else
    {
        cout << "You saved the money for " << daysCount << " days." << endl;
    }
}
