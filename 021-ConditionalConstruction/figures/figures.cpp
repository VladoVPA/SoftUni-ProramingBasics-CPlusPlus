
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
	string figure;
	double area = 0.0;
	cin >> figure;

	if (figure == "square")
	{
		double sideA;
		cin >> sideA;
		area = sideA * sideA;
	}
	else if (figure == "rectangle")
	{
		double sideA, sideB;
		cin >> sideA >> sideB;
		area = sideA * sideB;
	}
	else if (figure == "triangle")
	{
		double sideA, height;
		cin >> sideA >> height;
		area = sideA * height/2;
	}
	else if (figure == "circle")
	{
		double radius;
		cin >> radius;
		area = M_PI * pow(radius, 2);
	}

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << area << endl;
}
