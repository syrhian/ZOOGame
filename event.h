#include "ianimal.h"
#ifndef ZOOGAME_EVENT_H
#define ZOOGAME_EVENT_H

using namespace std;

class IAnimal;
class Event;

class Event {
public :
    Event();
    virtual ~Event();
    virtual bool pregnancy(IAnimal *animal) = 0;
    virtual int birth(IAnimal *animal) = 0;
    virtual bool birthdeath(IAnimal *animal) = 0;
    virtual bool death(IAnimal *animal) = 0;
    virtual bool sickness(IAnimal *animal) = 0;
    virtual bool overcrowding(IAnimal *animal) = 0;
};

#endif //ZOOGAME_EVENT_H