#include <iostream>
#include <vector>
#include "unicell.hpp"
using namespace std;

class unicell_sexual : public unicell
{
private:
    bool f_status;
    unicell_sexual *parent;
    unicell_sexual *child;

public:
    bool getF_status()
    {
        return this->f_status;
    }
    unicell_sexual *getParent()
    {
        return this->parent;
    }
    unicell_sexual *getChild()
    {
        return this->child;
    }
    void unicell_sexual_init(int avg_lifespan, int age, int foodQty, int excreteQty, int metabolism, bool f_status, unicell_sexual *parent, unicell_sexual *child)
    {
        this->unicell_init(avg_lifespan, age, foodQty, excreteQty, metabolism);
        this->f_status = f_status;
        this->parent = parent;
        this->child = child;
    }
    int conjugate(unicell_sexual *partner)
    {
        if (this->f_status == partner->f_status)
        {
            return NULL;
        }
        else if (this->f_status)
        {
            this->child = partner;
            return 1;
        }
        else
        {
            this->parent = partner;
            return 1;
        }
    }
};