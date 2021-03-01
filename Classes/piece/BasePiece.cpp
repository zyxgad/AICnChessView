
#include "BasePiece.h"

USING_NS_CC;

BasePiece::BasePiece()
:_team(ChessTeam::NONE)
,_type(ChessType::NONE)
,_pos({0, 0})
{
}

BasePiece::~BasePiece(){
}

bool BasePiece::init(){
	if(!(Sprite::init())){
		return false;
	}
	return true;
}

void BasePiece::setPos(pos_t pos){
	this->_pos = pos;
}


