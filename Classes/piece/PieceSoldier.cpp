
#include "PieceSoldier.h"


PieceSoldier::PieceSoldier(){
	this->_type = ChessType::SOLDIER;
}
PieceSoldier::~PieceSoldier(){
}

bool PieceSoldier::init(){
	if(!(BasePiece::init())){
		return false;
	}
	return true;
}

void PieceSoldier::update(float dt){
	//
}

bool PieceSoldier::canMove(pos_t end, board_t board){
	return true;
}

