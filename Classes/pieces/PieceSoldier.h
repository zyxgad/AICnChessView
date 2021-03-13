
#ifndef __PIECE_SOLIDER_H__
#define __PIECE_SOLIDER_H__

#include "cocos2d.h"

#include "CheMacro.h"
#include "BasePiece.h"


class PieceSoldier :public BasePiece{
public:
    PieceSoldier();
    virtual ~PieceSoldier();

public:
    virtual bool canMove(pos_t end, board_t board) const;
    virtual std::string getName(pos_t end, board_t board) const {return std::string("solider"); }
};


#endif // __PIECE_SOLIDER_H__
