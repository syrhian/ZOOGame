#ifndef ZOO_H
#define ZOO_H
#include "ianimal.h"

using namespace std;

class IAnimal;

class Zoo {
public:
    Zoo();
    virtual ~Zoo();
    int foodqtty();
    int habitqtty();
};

#endif // ZOO_H
