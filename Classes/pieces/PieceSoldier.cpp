
#include "PieceSoldier.h"


PieceSoldier::PieceSoldier(){
    this->_type = ChessType::SOLDIER;
}
PieceSoldier::~PieceSoldier(){
}

bool PieceSoldier::canMove(pos_t end, board_t board) const {
    return true;
}

