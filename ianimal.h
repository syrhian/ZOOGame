#ifndef IANIMAL_H
#define IANIMAL_H
#include <string>
// #include "zoo.h"
using namespace std;

class Zoo;
// class IAnimal;

class IAnimal {
    bool _is_alive = true;
    bool _is_more_one_month = false;
    bool _is_sick = false;
protected:
    string _name;
public:
    IAnimal(string name);
    virtual ~IAnimal();
    string getName();
    bool isAlive();
    virtual int getAge() = 0;
    virtual string getGender() = 0;
    virtual int getAlimType() = 0;
    virtual double getAlimQtt() = 0;
    virtual bool getHunger() = 0;
    bool isSick();
    virtual int getStartSex() = 0;
    virtual int getEndSex() = 0;
    virtual int getInfantMortal() = 0;
    virtual int getLifeEsp() = 0;
    virtual bool getFidelity() = 0;
    bool isMoreOneMonth() ;
};
#endif // IANIMAL_H
