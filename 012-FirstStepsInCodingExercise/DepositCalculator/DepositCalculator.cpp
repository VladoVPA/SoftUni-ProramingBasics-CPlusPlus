#include <iostream>

using namespace std;

int main()
{
    double Deposit;
    int DepositTime;
    double DepositPersentage;
    cin >> Deposit >> DepositTime >> DepositPersentage;

    double Total = Deposit + ((Deposit * (DepositPersentage / 100.0)) / 12) * DepositTime;

    cout << Total << endl;

} 
