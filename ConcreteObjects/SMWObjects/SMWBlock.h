#ifndef SMWBLOCK_H
#define SMWBLOCK_H
#include "../../Objects/Block.h"

class SMWBlock : public Block {
public:
  SMWBlock();
  ~SMWBlock();
  string belongsTo() override;
};

#endif //SMWBLOCK_H
