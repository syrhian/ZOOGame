#include "ianimal.h"
#include <string>
#include <iostream>

using namespace std;

IAnimal::IAnimal(string name):_name(name)
{
    cout << __FUNCTION__ << " name:" << getName() << endl;
    _name = name;
}

IAnimal::~IAnimal()
{
    //dtor
}

string IAnimal::getName()
{
    return _name;
}
bool IAnimal::isAlive()
{
    return _is_alive;
}
bool IAnimal::isMoreOneMonth()
{
    return _is_more_one_month;
}
bool IAnimal::isSick()
{
    return _is_sick;
}
/*void IAnimal::escape(Zoo* zoo)
{
    cout << __FUNCTION__ << " name:" << getName() << " zoo*:" << zoo << endl;
    zoo->escape(this);
}*/
