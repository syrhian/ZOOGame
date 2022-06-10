#ifndef ZOO_H
#define ZOO_H
#include "ianimal.h"

using namespace std;

class IAnimal;

class Zoo {
public:
    Zoo();
    virtual ~Zoo();
    float foodqtty(float graineqtty = 0.0,int viandeqtty = 0);
    int habitqtty(int qtty);
};

#endif // ZOO_H
