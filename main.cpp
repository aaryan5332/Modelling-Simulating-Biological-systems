#include <iostream>
#include <vector>
#include "unicell_sexual.hpp"
#include "unicell_asexual.hpp"
using namespace std;

int main()
{
    unicell_sexual *cell1 = new unicell_sexual;
    cell1->unicell_sexual_init(100, 0, 100, 0, 1, true, NULL, NULL);
    int foodQty = cell1->getFoodqty();
    cout << "Food Quantity: " << foodQty << endl;
    cell1->engulf(100);
    foodQty = cell1->getFoodqty();
    cout << "Food Quantity: " << foodQty << endl;
    cell1->digest(100, 100, 1);
    foodQty = cell1->getFoodqty();
    cout << "Food Quantity: " << foodQty << endl;
    cell1->update_age();
    int age = cell1->getAge();
    cout << "Age: " << age << endl;
    cell1->update_age(100);
    age = cell1->getAge();
    cout << "Age: " << age << endl;
    cell1->excrete(100);
    int excreteQty = cell1->getExcreteqty();
    cout << "Excrete Quantity: " << excreteQty << endl;
    unicell *cell2 = new unicell;
    cout << "Metabolism: " << cell1->getMetabolism() << endl;
    cell1->getAvg_lifespan();
    int avg_lifespan = cell1->getAvg_lifespan();
    cout << "Average Lifespan: " << avg_lifespan << endl;
}