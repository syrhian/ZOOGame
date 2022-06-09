//
// Created by syrhi on 09/06/2022.
//

#ifndef _MAIN_H
#define _MAIN_H


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
    Coq();
    int getAge();
    string getGender();
    int getAlimType();
    double getAlimQtt();
    bool getHunger();
    int getStartSex();
    int getEndSex();
    int getInfantMortal();
    int getLifeEsp();
    bool getFidelity();
};

class Poule:public IAnimal {
public:
    int getAge();
    string getGender();
    int getAlimType();
    double getAlimQtt();
    bool getHunger();
    int getStartSex();
    int getEndSex();
    int getInfantMortal();
    int getLifeEsp();
    bool getFidelity();
};

class AigleMale:public IAnimal {
public:
    int getAge();
    string getGender();
    int getAlimType();
    double getAlimQtt();
    bool getHunger();
    int getStartSex();
    int getEndSex();
    int getInfantMortal();
    int getLifeEsp();
    bool getFidelity();
};

class AigleFemelle:public IAnimal {
public:
    int getAge();
    string getGender();
    int getAlimType();
    double getAlimQtt();
    bool getHunger();
    int getStartSex();
    int getEndSex();
    int getInfantMortal();
    int getLifeEsp();
    bool getFidelity();
};

class TigreMale:public IAnimal {
public:
    int getAge();
    string getGender();
    int getAlimType();
    double getAlimQtt();
    bool getHunger();
    int getStartSex();
    int getEndSex();
    int getInfantMortal();
    int getLifeEsp();
    bool getFidelity();
};

class TigreFemelle:public IAnimal {
public:
    int getAge();
    string getGender();
    int getAlimType();
    double getAlimQtt();
    bool getHunger();
    int getStartSex();
    int getEndSex();
    int getInfantMortal();
    int getLifeEsp();
    bool getFidelity();
};
//MARKET

class graine:public Market{
public:
    graine(string name);
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};

class viande:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class poule6m:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class coq6m:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class tigre6m:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class tigre4a:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class tigre14a:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class aigle6m:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class aigle4a:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class aigle14a:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};

//HABITATS

class habitT:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class habitA:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};
class habitP:public Market{
    int getType();
    float getPrice();
    bool isSealable();
    double getQuantity();
    int sellPrice();
    int getAge();
};

#endif //_MAIN_H
