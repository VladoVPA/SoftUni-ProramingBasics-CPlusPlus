#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    const double ONE_USD_TO_BGN = 1.79549;
    double usd;

    cin >> usd;
   
    cout << usd * ONE_USD_TO_BGN << endl;          

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << usd * ONE_USD_TO_BGN << endl;
 }
