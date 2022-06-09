#ifndef ZOOGAME_MARKET_H
#define ZOOGAME_MARKET_H
#include <string>

using namespace std;


enum AnimalType {
    GRAINE,
    VIANDE,
};
class Market;
        class Market {
        protected:
            int _budget = 80000;
            string _name;
        public:
            int setBudget(int budget);
            Market(string name);
            virtual ~Market();
            string getName();
            void Achat(AnimalType choice);
            void Vente(AnimalType choice);
            virtual int getType() = 0;
            virtual float getPrice() = 0;
            virtual bool isSealable() = 0;
            virtual double getQuantity() = 0;
            virtual int sellPrice() = 0;
            virtual int getAge() = 0;
    };


#endif //ZOOGAME_MARKET_H
