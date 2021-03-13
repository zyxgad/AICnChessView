
#include "BasePiece.h"

USING_NS_CC;

BasePiece::BasePiece()
:_type(ChessType::NONE)
,_team(ChessTeam::NONE)
,_pos({0, 0})
{
}

BasePiece::~BasePiece(){
}

void BasePiece::setTeam(ChessTeam team){
    this->_team = team;
}

void BasePiece::setPos(pos_t pos){
    this->_pos = pos;
}


