#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
double worldRecord, distanceInMeters, swimForOneMeter, timeInSecond;
cin >> worldRecord >> distanceInMeters >> swimForOneMeter;

double slowDownsTime = floor(distanceInMeters / 15) * 12.5;

timeInSecond = distanceInMeters * swimForOneMeter + slowDownsTime;

cout.setf(std::ios::fixed);
cout.precision(2);

if (timeInSecond < worldRecord)
{
	cout << "Yes, he succeeded! The new world record is " << timeInSecond << " seconds." << endl;
}
else
{
	cout << "No, he failed! He was " << timeInSecond - worldRecord << " seconds slower." << endl;
}


}
