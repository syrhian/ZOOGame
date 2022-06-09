#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "ianimal.h"
#include "zoo.h"
#include "market.h"
#include "main.h"
using namespace std;
//ANIMAUX
//Coq
Coq::Coq(){}
    int Coq::getAge()  {
        //boutique
    }
    string Coq::getGender()  {
        return "Male";
    }
    int Coq::getAlimType()  {
        return 1;
    }
    double Coq::getAlimQtt()  {
        return 0.18;
    }
    bool Coq::getHunger()  {
        return 2;
    }
    int Coq::getStartSex()  {
        return 6;
    }
    int Coq::getEndSex()  {
        return 96;
    }
    int Coq::getInfantMortal()  {
        return NULL;
    }
    int Coq::getLifeEsp()  {
        return 15;
    }
    bool Coq::getFidelity()  {
        return false;
    }

//Poule
    int Poule::getAge()  {
        //boutique
    }
    string Poule::getGender()  {
        return "Female";
    }
    int Poule::getAlimType()  {
        return 1;
    }
    double Poule::getAlimQtt()  {
        return 0.15;
    }
    bool Poule::getHunger()  {
        return 1;
    }
    int Poule::getStartSex()  {
        return 6;
    }
    int Poule::getEndSex()  {
        return 96;
    }
    int Poule::getInfantMortal()  {
        return 50;
    }
    int Poule::getLifeEsp()  {
        return 15;
    }
    bool Poule::getFidelity()  {
        return false;
    }


    int AigleMale::getAge()  {
        //boutique
    }
    string AigleMale::getGender()  {
        return "Male";
    }
    int AigleMale::getAlimType()  {
        return 2;
    }
    double AigleMale::getAlimQtt()  {
        return 0.25;
    }
    bool AigleMale::getHunger()  {
        return 10;
    }
    int AigleMale::getStartSex()  {
        return 48;
    }
    int AigleMale::getEndSex()  {
        return 168;
    }
    int AigleMale::getInfantMortal()  {
        return NULL;
    }
    int AigleMale::getLifeEsp()  {
        return 25;
    }
    bool AigleMale::getFidelity()  {
        return true;
    }



    int AigleFemelle::getAge()  {
        //boutique
    }
    string AigleFemelle::getGender()  {
        return "Female";
    }
    int AigleFemelle::getAlimType()  {
        return 2;
    }
    double AigleFemelle::getAlimQtt()  {
        return 0.3;
    }
    bool AigleFemelle::getHunger()  {
        return 10;
    }
    int AigleFemelle::getStartSex()  {
        return 48;
    }
    int AigleFemelle::getEndSex()  {
        return 168;
    }
    int AigleFemelle::getInfantMortal()  {
        return 50;
    }
    int AigleFemelle::getLifeEsp()  {
        return 25;
    }
    bool AigleFemelle::getFidelity()  {
        return true;
    }


    int TigreMale::getAge()  {
        //boutique
    }
    string TigreMale::getGender()  {
        return "Male";
    }
    int TigreMale::getAlimType()  {
        return 2;
    }
    double TigreMale::getAlimQtt()  {
        return 12;
    }
    bool TigreMale::getHunger()  {
        return 2;
    }
    int TigreMale::getStartSex()  {
        return 72;
    }
    int TigreMale::getEndSex()  {
        return 168;
    }
    int TigreMale::getInfantMortal()  {
        return NULL;
    }
    int TigreMale::getLifeEsp()  {
        return 25;
    }
    bool TigreMale::getFidelity()  {
        return false;
    }

    int TigreFemelle::getAge()  {
        //boutique
    }
    string TigreFemelle::getGender()  {
        return "Female";
    }
    int TigreFemelle::getAlimType()  {
        return 2;
    }
    double TigreFemelle::getAlimQtt()  {
        return 10;
    }
    bool TigreFemelle::getHunger()  {
        return 2;
    }
    int TigreFemelle::getStartSex()  {
        return 48;
    }
    int TigreFemelle::getEndSex()  {
        return 168;
    }
    int TigreFemelle::getInfantMortal()  {
        return 33;
    }
    int TigreFemelle::getLifeEsp()  {
        return 25;
    }
    bool TigreFemelle::getFidelity()  {
        return false;
    }

//MARKET
graine::graine(string name) : Market(name) {}
    int graine::getType() {
        return 1;
    }
    float graine::getPrice() {
        return 2.5;
    }
    bool graine::isSealable() {
        return false;
    }
    double graine::getQuantity() {
        //valeur utilisateur
    }
    int graine::sellPrice() {
        return NULL;
    }
    int graine::getAge() {
        return NULL;
    }


    int viande::getType() {
        return 2;
    }
    float viande::getPrice() {
        return 5;
    }
    bool viande::isSealable() {
        return false;
    }double viande::getQuantity() {
        //valeur utilisateur
    }
    int viande::sellPrice() {
        return NULL;
    }
    int viande::getAge() {
        return NULL;
    }

    int poule6m::getType() {
        return 3;
    }
    float poule6m::getPrice() {
        return 20;
    }
    bool poule6m::isSealable() {
        return true;
    }
    double poule6m::getQuantity() {
        //valeur utilisateur
    }
    int poule6m::sellPrice() {
        return 10;
    }
    int poule6m::getAge() {
        return 6;
    }


    int coq6m::getType() {
        return 3;
    }
    float coq6m::getPrice() {
        return 100;
    }
    bool coq6m::isSealable() {
        return true;
    }
    double coq6m::getQuantity() {
        //valeur utilisateur
    }
    int coq6m::sellPrice() {
        return 20;
    }
    int coq6m::getAge() {
        return 6;
    }


    int tigre6m::getType() {
        return 3;
    }
    float tigre6m::getPrice() {
        return 3000;
    }
    bool tigre6m::isSealable() {
        return true;
    }
    double tigre6m::getQuantity() {
        //valeur utilisateur
    }
    int tigre6m::sellPrice() {
        return 1500;
    }
    int tigre6m::getAge() {
        return 6;
    }


    int tigre4a::getType() {
        return 3;
    }
    float tigre4a::getPrice() {
        return 120000;
    }
    bool tigre4a::isSealable() {
        return true;
    }double tigre4a::getQuantity() {
        //valeur utilisateur
    }
    int tigre4a::sellPrice() {
        return 60000;
    }
    int tigre4a::getAge() {
        return 48;
    }

    int tigre14a::getType() {
        return 3;
    }
    float tigre14a::getPrice() {
        return 60000;
    }
    bool tigre14a::isSealable() {
        return true;
    }double tigre14a::getQuantity() {
        //valeur utilisateur
    }
    int tigre14a::sellPrice() {
        return 10000;
    }
    int tigre14a::getAge() {
        return 168;
    }

    int aigle6m::getType() {
        return 3;
    }
    float aigle6m::getPrice() {
        return 1000;
    }
    bool aigle6m::isSealable() {
        return true;
    }
    double aigle6m::getQuantity() {
        //valeur utilisateur
    }
    int aigle6m::sellPrice() {
        return 500;
    }
    int aigle6m::getAge() {
        return 6;
    }

    int aigle4a::getType() {
        return 3;
    }
    float aigle4a::getPrice() {
        return 4000;
    }
    bool aigle4a::isSealable() {
        return true;
    }
    double aigle4a::getQuantity() {
        //valeur utilisateur
    }
    int aigle4a::sellPrice() {
        return 2000;
    }
    int aigle4a::getAge() {
        return 48;
    }

    int aigle14a::getType() {
        return 3;
    }
    float aigle14a::getPrice() {
        return 2000;
    }
    bool aigle14a::isSealable() {
        return true;
    }double aigle14a::getQuantity() {
        //valeur utilisateur
    }
    int aigle14a::sellPrice() {
        return 400;
    }
    int aigle14a::getAge() {
        return 168;
    }

//HABITATS

    int habitT::getType() {
        return 4;
    }
    float habitT::getPrice() {
        return 2000;
    }
    bool habitT::isSealable() {
        return true;
    }double habitT::getQuantity() {
        //valeur utilisateur
    }
    int habitT::sellPrice() {
        return 500;
    }
    int habitT::getAge() {
        return NULL;
    }


    int habitA::getType() {
        return 4;
    }
    float habitA::getPrice() {
        return 2000;
    }
    bool habitA::isSealable() {
        return true;
    }double habitA::getQuantity() {
        //valeur utilisateur
    }
    int habitA::sellPrice() {
        return 500;
    }
    int habitA::getAge() {
        return NULL;
    }


    int habitP::getType() {
        return 4;
    }
    float habitP::getPrice() {
        return 300;
    }
    bool habitP::isSealable() {
        return true;
    }
    double habitP::getQuantity() {
        //valeur utilisateur
    }
    int habitP::sellPrice() {
        return 50;
    }
    int habitP::getAge() {
        return NULL;
    }
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