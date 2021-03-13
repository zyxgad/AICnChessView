/*
 *  
 *
 *  PieceSprite.h in AICnChess
 *  create on 2021/3/10
 *
 */

#ifndef PieceSprite_h__
#define PieceSprite_h__

#include "CheMacro.h"
#include "pieces/BasePiece.h"

class PieceSprite : public cocos2d::Sprite{
public:
	PieceSprite();
	~PieceSprite();

    virtual bool init();

    CREATE_FUNC(PieceSprite)
private:
    BasePiece* _piece;

public:
    void getPiece() const { return this->_piece; };
    void setPiece(BasePiece* piece);


};



#endif // PieceSprite_h__
