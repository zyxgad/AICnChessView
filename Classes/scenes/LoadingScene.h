
#ifndef __LOADING_SCENE_H__
#define __LOADING_SCENE_H__

#include "CheMacro.h"

enum class loadTypes{
	TEXTURE_CACHE,
	SPRITE_FRAME_CACHE,
};

typedef struct{
	loadTypes           loadtype;

	std::string         imgPath;
	std::string         plPath;

	cocos2d::Texture2D* texture;
} loadItem_t;

void appendTextureLoader(std::string imgPath);
void appendFrameLoader(std::string imgPath, std::string plPath);



class LoadingScene :public cocos2d::Scene{
public:
	LoadingScene();
	virtual ~LoadingScene();

	virtual bool init();
	virtual void update(float dt);

	CREATE_FUNC(LoadingScene)
};


#endif // __LOADING_SCENE_H__