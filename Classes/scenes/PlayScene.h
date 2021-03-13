/*
 *  
 *
 *  PlayScene.h in AICnChess
 *  create on 2021/3/13
 *
 */

#ifndef PlayScene_h__
#define PlayScene_h__

#include "CheMacro.h"
#include "layers/PieceBoard.h"

class PlayScene : public cocos2d::Scene{
public:
	PlayScene();
	~PlayScene();

    virtual bool init();
    virtual void update(float dt);

private:
    PieceBoard* board;


};



#endif // PlayScene_h__
