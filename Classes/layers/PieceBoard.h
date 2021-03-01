
#ifndef __PIECE_BORAD_H__
#define __PIECE_BORAD_H__

#include "cocos2d.h"

#include "chessTypes.h"
#include "piece/BasePiece.h"

class PieceBoard : public cocos2d::Layer{
public:
	PieceBoard();
	virtual ~PieceBoard();

	virtual bool init();
	virtual void update(float dt);

	CREATE_FUNC(PieceBoard)

private:
	board_t board;

	// Player* blk_player;
	// Player* red_player;

	ChessTeam _cycle;

public:
	void initBoard();
	void initBoardWithFile(std::string file);

	bool MovePiece(pos_t sta, pos_t end);
};



#endif // __PIECE_BORAD_H__