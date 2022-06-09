#include <iostream>

#include "market.h"
using namespace std;

Market::Market(string name):_name(name)
        {
        cout << __FUNCTION__ << " name:" << getName() << endl;
        _name = name;
        }

Market::~Market()
{

}

string Market::getName()
{
    return _name;
}

int Market::setBudget(int budget) {
    return _budget;
}

void Market::Achat(int choice) {

}