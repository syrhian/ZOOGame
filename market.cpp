//
// Created by syrhi on 30/05/2022.
//
#include "iostream"
#include "market.h"
#include "main.h"
#include <string>
using namespace std;

Market::Market(string name):_name(name)
        {
                cout << __FUNCTION__ << " name:" << getName() << endl;
        _name = name;
        }

Market::~Market()
{
    //dtor
}

string Market::getName()
{
    return _name;
}

int Market::setBudget(int budget) {
    return _budget;
}

void Market::Achat(AnimalType choice) {
    switch (choice) {
        case AnimalType::GRAINE:
            (new graine("a"))->getPrice();
        case AnimalType::VIANDE
    }
}