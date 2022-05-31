#include "ianimal.h"
#ifndef ZOOGAME_EXTEVENT_H
#define ZOOGAME_EXTEVENT_H

using namespace std;

class IAnimal;
class Extevent;

class Extevent {
public:
    Extevent();
    virtual ~Extevent();
    virtual bool fire(IAnimal *animal) = 0;
    virtual bool thieve(IAnimal *animal) = 0;
    virtual bool pests(IAnimal *animal) = 0;
    virtual bool rotted(IAnimal *animal) = 0;
};


#endif //ZOOGAME_EXTEVENT_H
