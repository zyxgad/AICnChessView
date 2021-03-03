#ifndef __BASE_PIECE_H__
#define __BASE_PIECE_H__

#include "cocos2d.h"

#include "CheMacro.h"


class BasePiece : public cocos2d::Sprite {
public:
	BasePiece();
	virtual ~BasePiece();

	virtual bool init();

protected:
	ChessType _type;
	ChessTeam _team;
	pos_t _pos;

public:
	ChessType getType() const { return this->_type; }

	void setTeam(ChessTeam team);
	ChessTeam getTeam() const { return this->_team; }

	void setPos(pos_t pos);
	pos_t getPos() const { return this->_pos; }

	virtual bool canMove(pos_t end, board_t board) = 0;


};




#endif // __BASE_PIECE_H__