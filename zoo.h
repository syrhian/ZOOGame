#ifndef ZOO_H
#define ZOO_H
#include <vector>
#include "ianimal.h"

using namespace std;

class IAnimal;

typedef vector<IAnimal*> Cage;

class Zoo {
private:
    Cage cage;
public:
    Zoo();
    ~Zoo();
    void addAnimal(IAnimal* animal);
    int getAnimalCount();
    void onFire();
    void escape(IAnimal*);
};

#endif // ZOO_H
