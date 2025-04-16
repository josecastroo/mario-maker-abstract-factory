#ifndef SMWCOIN_H
#define SMWCOIN_H
#include "../../Objects/Coin.h"

class SMWCoin : public Coin {
public:
  SMWCoin();
  ~SMWCoin();
  string belongsTo();
};

#endif //SMWCOIN_H
