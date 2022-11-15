#include <iostream>
#include <vector>
#include "unicell.hpp"
using namespace std;

class unicell_asexual : public unicell
{
public:
    void unicell_asexual_init(int avg_lifespan, int age, int foodQty, int excreteQty, int metabolism)
    {
        this->unicell_init(avg_lifespan, age, foodQty, excreteQty, metabolism);
    }
    void fission(vector<unicell_asexual *> *children, vector<int> metabolism, int n_ary)
    {
        for (int i = 0; i < n_ary; i++)
        {
            unicell_asexual temp;
            temp.unicell_asexual_init(this->getAvg_lifespan(), 0, (this->getFoodqty()) / n_ary, (this->getExcreteqty()) / n_ary, metabolism[i]);
            children->push_back(&temp);
        }
    }
};