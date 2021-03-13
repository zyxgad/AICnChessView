
#ifndef __PIECE_BORAD_H__
#define __PIECE_BORAD_H__

#include "cocos2d.h"

#include "CheMacro.h"
#include "sprites/PieceSprite.h"
#include "pieces/BasePiece.h"
#include "player/Player.h"

class PieceBoard : public cocos2d::Layer{
public:
    PieceBoard();
    virtual ~PieceBoard();

    virtual bool init();
    virtual void update(float dt);

    CREATE_FUNC(PieceBoard)

private:
    board_t _board;

    Player* blk_player;
    Player* red_player;

    ChessTeam _cycle;

public:
    board_t getBoard() const { return this->_board; }

    void setBlkPlayer(Player* player);
    Player* getBlkPlayer() const { return this->blk_player; }
    void setRedPlayer(Player* player);
    Player* getRedPlayer() const { return this->red_player; }

    ChessTeam getCycle() const { return this->_cycle; }

    void initBoard();
    void initBoardWithFile(std::string file);

    bool MovePiece(pos_t sta, pos_t end);

private:
    void addEats(BasePiece* piece);

};



#endif // __PIECE_BORAD_H__
