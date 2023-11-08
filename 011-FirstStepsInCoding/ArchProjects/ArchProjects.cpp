#include <iostream>

using namespace std;

int main()
{
   string name;
   int projects;
   int workHours;
   const int ONE_PROJECT_WORK_HOURS = 3;

   cin >> name;
   cin >> projects;

   workHours = projects * ONE_PROJECT_WORK_HOURS;

   cout << "The architect " << name << " will need " << workHours << " hours to complete " << projects << " project/s." << endl;
}
