
#ifndef __PIECE_SOLIDER_H__
#define __PIECE_SOLIDER_H__

#include "cocos2d.h"

#include "CheMacro.h"
#include "BasePiece.h"


class PieceSoldier :public BasePiece{
public:
    PieceSoldier();
    virtual ~PieceSoldier();

    virtual bool init();
    virtual void update(float dt);

    CREATE_FUNC(PieceSoldier)

public:
    virtual bool canMove(pos_t end, board_t board);
};


#endif // __PIECE_SOLIDER_H__