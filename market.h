#ifndef ZOOGAME_MARKET_H
#define ZOOGAME_MARKET_H
#include <string>

using namespace std;


enum AnimalType {
    GRAINE,
    VIANDE,
    COQ,
    POULE,
    AIGLE6M,
    AIGLE4A,
    AIGLE14A,
    TIGRE6M,
    TIGRE4A,
    TIGRE14A,

};
class Market;
        class Market {
        protected:
            int _budget = 80000;
            string _name;
        public:
            int setBudget();
            Market(string name);
            virtual ~Market();
            string getName();
            int Achat(AnimalType choice);
            void Vente(AnimalType choice);
            virtual int getType() = 0;
            virtual float getPrice() = 0;
            virtual bool isSealable() = 0;
            virtual double getQuantity() = 0;
            virtual int sellPrice() = 0;
            virtual int getAge() = 0;
    };


#endif //ZOOGAME_MARKET_H
