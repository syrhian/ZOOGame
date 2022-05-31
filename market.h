#ifndef ZOOGAME_MARKET_H
#define ZOOGAME_MARKET_H
#include <string>

using namespace std;
class Market;
        class Market {
        protected:
            int _budget = 80000;
        public:
            int setBudget(int budget)
            Market(string name);
            virtual ~Market();
            string getName();
            virtual string getType() = 0;
            virtual float getPrice() = 0;
            virtual bool isSealable() = 0;
            virtual double getQuantity() = 0;
            virtual int sellPrice() = 0;
            virtual int getAge() = 0;
    };


#endif //ZOOGAME_MARKET_H
