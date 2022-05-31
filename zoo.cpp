#include "zoo.h"
#include <iostream>
using namespace std;

Zoo::Zoo() {
}
Zoo::~Zoo() {
}

void Zoo::addAnimal(IAnimal* animal) {
    cage.push_back(animal);
}

int Zoo::getAnimalCount() {
    return cage.size();
}

void Zoo::onFire() {
    for (int i=0; i < getAnimalCount(); i++) {
        cage[i] -> onFire(this);
    }
}

void Zoo::escape(IAnimal* animal){
    cout << animal->getName() << " se barre !" << endl;
}
