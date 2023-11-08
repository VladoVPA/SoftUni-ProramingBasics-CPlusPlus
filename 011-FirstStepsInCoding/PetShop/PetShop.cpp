#include <iostream>

using namespace std;

int main()
{
    const double CAT_FOOD_PRISE = 4;
    const double DOG_FOOD_PRISE = 2.5;
    int catFoodNumber, dogFoodNumber;

    cin >> dogFoodNumber >> catFoodNumber;

    double totalPrise = dogFoodNumber * DOG_FOOD_PRISE + catFoodNumber * CAT_FOOD_PRISE;

    cout << totalPrise << " lv." << endl;

}
