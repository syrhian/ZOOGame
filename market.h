#ifndef ZOOGAME_MARKET_H
#define ZOOGAME_MARKET_H
#include <string>

using namespace std;
class Market;
        class Market {
        public:
            virtual ~Market();
            string getName();
            virtual string getType() = 0;
            virtual int getPrice() = 0;
            virtual bool isSealable() = 0;
            virtual double getQuantity() = 0;
    };


#endif //ZOOGAME_MARKET_H
