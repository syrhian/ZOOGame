//
// Created by syrhi on 30/05/2022.
//

#include "market.h"
using namespace std;

Market::Market(string name):_name(name)
        {
                cout << __FUNCTION__ << " name:" << getName() << endl;
        _name = name;
        }
Market::Market() {}{

}

Market::~Market()
{
    //dtor
}

string Market::getName()
{
    return _name;
}

string Market::setBudget(int budget) {
    return _budget;
}