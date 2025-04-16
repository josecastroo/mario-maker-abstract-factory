#ifndef SMB3COIN_H
#define SMB3COIN_H
#include "../../Objects/Coin.h"


class SMB3Coin : public Coin {
public:
    SMB3Coin();
    ~SMB3Coin();
    string belongsTo();
};



#endif //SMB3COIN_H
