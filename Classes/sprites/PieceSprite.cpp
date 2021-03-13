/*
 *  
 *
 *  PieceSprite.cpp in AICnChess
 *  create on 2021/3/10
 *
 */

#import "PieceSprite.h"

USING_NS_CC;


PieceSprite::PieceSprite()
:_piece(nullptr)
{
}

PieceSprite::~PieceSprite(){
    if(this->_piece){
        this->_piece->release();
    }
}

bool PieceSprite::init(){
    do{
        CC_BREAK_IF(!Sprite::init());

        return true;
    }while(0);
    return false;
}

void PieceSprite::setPiece(BasePiece* piece){
    if(piece == this->_piece){
        return;
    }
    if(this->_piece){
        this->_piece->release();
    }
    this->_piece = piece;
    if(!this->_piece){
        return;
    }
    this->_piece->retain();

    this->setTexture(CHE_GETTEXTURE(
        std::string("images/pieces/") +
        (this->_piece->getTeam() == ChessTeam::BLK ? "blk": "red") +
        "_piece_" + (this->_piece->getName()) + ".png"));

}
