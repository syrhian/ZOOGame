#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "ianimal.h"
#include "zoo.h"
#include "market.h"
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
class graine:public Market {
    int getType() override{
        return 1;
    }
    float getPrice() override{
        return 2.5;
    }
    bool isSealable() override{
        return false;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return NULL;
    }
    int getAge() override{
        return NULL;
    }
};
class viande:public Market {
    int getType() override{
        return 2;
    }
    float getPrice() override{
        return 5;
    }
    bool isSealable() override{
        return false;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return NULL;
    }
    int getAge() override{
        return NULL;
    }
};
class poule6m:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 20;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 10;
    }
    int getAge() override{
        return 6;
    }
};
class coq6m:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 100;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 20;
    }
    int getAge() override{
        return 6;
    }
};
class tigre6m:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 3000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 1500;
    }
    int getAge() override{
        return 6;
    }
};
class tigre4a:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 120000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 60000;
    }
    int getAge() override{
        return 48;
    }
};
class tigre14a:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 60000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 10000;
    }
    int getAge() override{
        return 168;
    }
};
class aigle6m:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 1000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 500;
    }
    int getAge() override{
        return 6;
    }
};
class aigle4a:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 4000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 2000;
    }
    int getAge() override{
        return 48;
    }
};
class aigle14a:public Market {
    int getType() override{
        return 3;
    }
    float getPrice() override{
        return 2000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 400;
    }
    int getAge() override{
        return 168;
    }
};
class habitT:public Market {
    int getType() override{
        return 4;
    }
    float getPrice() override{
        return 2000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 500;
    }
    int getAge() override{
        return NULL;
    }
};
class habitA:public Market {
    int getType() override{
        return 4;
    }
    float getPrice() override{
        return 2000;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 500;
    }
    int getAge() override{
        return NULL;
    }
};
class habitP:public Market {
    int getType() override{
        return 4;
    }
    float getPrice() override{
        return 300;
    }
    bool isSealable() override{
        return true;
    }double getQuantity() override{
        //valeur utilisateur
    }
    int sellPrice() override{
        return 50;
    }
    int getAge() override{
        return NULL;
    }
};
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