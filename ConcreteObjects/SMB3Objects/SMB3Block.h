#ifndef SMB3BLOCK_H
#define SMB3BLOCK_H
#include "../../Objects/Block.h"

class SMB3Block : public Block {
public:
    SMB3Block();
    ~SMB3Block();
    string belongsTo();
};



#endif //SMB3BLOCK_H
