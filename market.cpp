//
// Created by syrhi on 30/05/2022.
//
#include "iostream"
#include "market.h"
#include "main.h"
#include <string>
#include "zoo.h"
using namespace std;

Market::Market(string name):_name(name)
        {
                cout << __FUNCTION__ << " name:" << getName() << endl;
        _name = name;
        }

Market::~Market()
{
    //dtor
}

string Market::getName()
{
    return _name;
}

int Market::setBudget() {
    return _budget;
}

int Market::Achat(AnimalType choice) {
    switch (choice) {
        case AnimalType::GRAINE: {
            int prix = (new graine("a"))->getPrice();
            cout << "le prix est de : " << prix << " $" << endl;
            cout << "et il vous reste :" << _budget << " $   ||   Confirmer l'achat ?" << endl << "O / N" << endl;
            char choose;
            cin >> choose;
            switch (choose) {
                case 'O':{
                    _budget -= prix;
                    Zoo().foodqtty(getQuantity());
                }
                case 'N':
                    return 1;

            }
        }
        case AnimalType::VIANDE:{
            int prix = (new viande())->getPrice();
            cout << "le prix est de : " << prix << " $" << endl;
            cout << "et il vous reste :" << _budget << " $   ||   Confirmer l'achat ?" << endl << "O / N" << endl;
            char choose;
            cin >> choose;
            switch (choose) {
                case 'O':{
                    _budget -= prix;
                    Zoo().foodqtty(getQuantity());
                }
                case 'N':
                    return 1;

            }}

            case AnimalType::TIGRE14A: {
            int prix = (new tigre14a())->getPrice();
            cout << "le prix est de : " << prix << " $" << endl;
            cout << "et il vous reste :" << _budget << " $   ||   Confirmer l'achat ?" << endl << "O / N" << endl;
            char choose;
            cin >> choose;
            switch (choose) {
                case 'O':{
                    _budget -= prix;
                    Zoo().foodqtty(getQuantity());
                }
                case 'N':
                    return 1;

            }
        }
        case AnimalType::TIGRE6M: {
            int prix = (new graine("a"))->getPrice();
            cout << "le prix est de : " << prix << " $" << endl;
            cout << "et il vous reste :" << _budget << " $   ||   Confirmer l'achat ?" << endl << "O / N" << endl;
            char choose;
            cin >> choose;
            switch (choose) {
                case 'O':{
                    _budget -= prix;
                    Zoo().foodqtty(getQuantity());
                }
                case 'N':
                    return 1;

            }
        }

        case AnimalType::TIGRE14A: {
            int prix = (new graine("a"))->getPrice();
            cout << "le prix est de : " << prix << " $" << endl;
            cout << "et il vous reste :" << _budget << " $   ||   Confirmer l'achat ?" << endl << "O / N" << endl;
            char choose;
            cin >> choose;
            switch (choose) {
                case 'O':{
                    _budget -= prix;
                    Zoo().foodqtty(getQuantity());
                }
                case 'N':
                    return 1;

            }
        }


    }
}