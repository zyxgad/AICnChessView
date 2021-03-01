#ifndef __BASE_PIECE_H__
#define __BASE_PIECE_H__

#include "cocos2d.h"

#include "chessTypes.h"


class BasePiece : public cocos2d::Sprite {
public:
	BasePiece();
	virtual ~BasePiece();

	virtual bool init();

protected:
	ChessTeam _team;
	ChessType _type;
	pos_t _pos;

public:
	ChessTeam getTeam() const { return this->_team; }
	ChessType getType() const { return this->_type; }

	void setPos(pos_t pos);
	pos_t getPos() const { return this->_pos; }

	virtual bool canMove(pos_t end, board_t board]) = 0;


};




#endif // __BASE_PIECE_H__