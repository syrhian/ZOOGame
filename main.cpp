#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "ianimal.h"
#include "zoo.h"
using namespace std;
//ANIMAUX
class Coq:public IAnimal {
public:
    int getAge() override {
        //boutique
    }
    string getGender() override {
        return "Male";
    }
    int getAlimType() override {
        return 1;
    }
    double getAlimQtt() override {
        return 0.18;
    }
    bool getHunger() override {
        return 2;
    }
    int getStartSex() override {
        return 6;
    }
    int getEndSex() override {
        return 96;
    }
    int getInfantMortal() override {
        return NULL;
    }
    int getLifeEsp() override {
        return 15;
    }
    bool getFidelity() override {
        return false;
    }
};

class Poule:public IAnimal {
public:
    int getAge() override {
        //boutique
    }
    string getGender() override {
        return "Female";
    }
    int getAlimType() override {
        return 1;
    }
    double getAlimQtt() override {
        return 0.15;
    }
    bool getHunger() override {
        return 1;
    }
    int getStartSex() override {
        return 6;
    }
    int getEndSex() override {
        return 96;
    }
    int getInfantMortal() override {
        return 50;
    }
    int getLifeEsp() override {
        return 15;
    }
    bool getFidelity() override {
        return false;
    }
};

class AigleMale:public IAnimal {
public:
    int getAge() override {
        //boutique
    }
    string getGender() override {
        return "Male";
    }
    int getAlimType() override {
        return 2;
    }
    double getAlimQtt() override {
        return 0.25;
    }
    bool getHunger() override {
        return 10;
    }
    int getStartSex() override {
        return 48;
    }
    int getEndSex() override {
        return 168;
    }
    int getInfantMortal() override {
        return NULL;
    }
    int getLifeEsp() override {
        return 25;
    }
    bool getFidelity() override {
        return true;
    }
};

class AigleFemelle:public IAnimal {
public:
    int getAge() override {
        //boutique
    }
    string getGender() override {
        return "Female";
    }
    int getAlimType() override {
        return 2;
    }
    double getAlimQtt() override {
        return 0.3;
    }
    bool getHunger() override {
        return 10;
    }
    int getStartSex() override {
        return 48;
    }
    int getEndSex() override {
        return 168;
    }
    int getInfantMortal() override {
        return 50;
    }
    int getLifeEsp() override {
        return 25;
    }
    bool getFidelity() override {
        return true;
    }
};

class TigreMale:public IAnimal {
public:
    int getAge() override {
        //boutique
    }
    string getGender() override {
        return "Male";
    }
    int getAlimType() override {
        return 2;
    }
    double getAlimQtt() override {
        return 12;
    }
    bool getHunger() override {
        return 2;
    }
    int getStartSex() override {
        return 72;
    }
    int getEndSex() override {
        return 168;
    }
    int getInfantMortal() override {
        return NULL;
    }
    int getLifeEsp() override {
        return 25;
    }
    bool getFidelity() override {
        return false;
    }
};

class TigreFemelle:public IAnimal {
public:
    int getAge() override {
        //boutique
    }
    string getGender() override {
        return "Female";
    }
    int getAlimType() override {
        return 2;
    }
    double getAlimQtt() override {
        return 10;
    }
    bool getHunger() override {
        return 2;
    }
    int getStartSex() override {
        return 48;
    }
    int getEndSex() override {
        return 168;
    }
    int getInfantMortal() override {
        return 33;
    }
    int getLifeEsp() override {
        return 25;
    }
    bool getFidelity() override {
        return false;
    }
};
//MARKET
class graines:public Mar
/*
class Poule:public IAnimal {
public:
    Poule(string name);
    virtual void onFire(Zoo* zoo);

};

Poule::Poule(string name):IAnimal(name) {

}


void Poule::onFire(Zoo* zoo) {
    cout << "Je m'appelle poule " <<  getName() << "et je cris !" <<endl;
    killMe();
}

class Aigle:public IAnimal {
public:
    Aigle(string name);
    virtual void onFire(Zoo* zoo);
};

Aigle::Aigle(string name):IAnimal(name) {

}


void Aigle::onFire(Zoo* zoo) {
    cout << "Yo soy " << getName() << "y y� menvol !" << endl;
    escape(zoo);
}

class Tigre:public IAnimal {
public:
    Tigre(string name);
    virtual void onFire(Zoo*);
};

Tigre::Tigre(string name):IAnimal(name) {

}

void Tigre::onFire(Zoo* zoo) {
    cout << "my name is " << getName() << "et je rugis !" << endl;
    killMe();
}

int main() {
    Zoo zoo;
    for (int i = 0; i < NB_POULE; i++) {
        Poule* poule = new Poule("poule " + to_string(i));
        zoo.addAnimal(poule);
    }
    for (int i = 0; i < NB_TIGRE; i++) {
        Tigre* tigre = new Tigre("tigre " + to_string(i));
        zoo.addAnimal(tigre);
    }
    for (int i = 0; i < NB_AIGLE; i++) {
        Aigle* aigle = new Aigle("aigle " + to_string(i));
        zoo.addAnimal(aigle);
    }
    if (NB_AIGLE + NB_POULE + NB_TIGRE == zoo.getAnimalCount()) {
        cout << "Zoo bien rempli" << endl;
    } else {
        cout << "Zoo pas bien rempli" << endl;
    }

    zoo.onFire();

    if (zoo.getAnimalCount() == 0) {
        cout << "Tuto mouro :D" << endl;
    } else {
        cout << "No tuti mouro :(" << endl;
    }
    return 0;
};


*/