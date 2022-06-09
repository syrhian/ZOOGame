#include "ianimal.h"
#include "market.h"
#ifndef ZOOGAME_HABITAT_H
#define ZOOGAME_HABITAT_H

class IAnimal;
class Habitat;
class Market;

class Habitat: public IAnimal{
public:
    Habitat(string name);
    virtual ~Habitat();
    virtual int capacity(Market *market) = 0;
    void addAnimal();
    void delAnimal();
};


#endif //ZOOGAME_HABITAT_H
