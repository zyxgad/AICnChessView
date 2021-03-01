
#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "cocos2d.h"

#include "chessTypes.h"
#include "layers/PieceBoard.h"


class GameManager{
private:
	GameManager();
	~GameManager();
	static GameManager* _instance;

public:
	static GameManager* getInstance();
	static void deleteInstatnce();

private:
	GameStatus _status;
	cocos2d::Scene* _scene;
	PieceBoard* _board;


public:
	GameStatus getStatus() const { return this->_status; }
	cocos2d::Scene* getScene() const { return this->_scene; }
	PieceBoard* getBoard() const { return this->_board; }

	void initWithScene(cocos2d::Scene* scene);
	void goHome();
	void playOffline();
	void playOnline();
	void startGame();
	void leftGame();
	void close();

};



#endif // __GAME_MANAGER_H__