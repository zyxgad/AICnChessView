#ifndef __BASE_PIECE_H__
#define __BASE_PIECE_H__

#include "CheMacro.h"


class BasePiece : public cocos2d::Ref {
public:
    BasePiece();
    virtual ~BasePiece();


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

    virtual bool canMove(pos_t end, board_t board) const = 0;
    virtual std::string getName() const { return std::string(""); }


};




#endif // __BASE_PIECE_H__
