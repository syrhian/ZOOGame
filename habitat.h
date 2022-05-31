#include "ianimal.h"
#include "market.h"
#ifndef ZOOGAME_HABITAT_H
#define ZOOGAME_HABITAT_H

class IAnimal;
class Habitat;
class Market;

class Habitat {
public:
    Habitat();
    virtual ~Habitat();
    virtual int capacity(Market *market) = 0;
};


#endif //ZOOGAME_HABITAT_H
