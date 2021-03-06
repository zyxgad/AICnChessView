
#include "LoadingScene.h"
#include "managers/GameManager.h"

USING_NS_CC;

static std::vector<loadItem_t*> loadVector;
static int loadCount = 0;


void appendTextureLoader(std::string imgPath){
	loadItem_t* li = new loadItem_t;
	li->loadtype = loadTypes::TEXTURE_CACHE;
	li->imgPath = imgPath;
	li->plPath = "";
	li->texture = nullptr;
	loadVector.emplace(loadVector.end(), li);
}
void appendFrameLoader(std::string imgPath, std::string plPath){
	loadItem_t* li = new loadItem_t;
	li->loadtype = loadTypes::SPRITE_FRAME_CACHE;
	li->imgPath = imgPath;
	li->plPath = plPath;
	li->texture = nullptr;
	loadVector.emplace(loadVector.end(), li);
}
void clearLoaders(){
	if(loadCount < loadVector.size()){
		for(int i = loadCount; i < loadVector.size() ;++i){
			delete loadVector.at(i);
		}
	}
	loadVector.clear();
	loadVector.resize(1);
	loadCount = 0;
}


static float MAX_SHOW_WIDTH = 200;

LoadingScene::LoadingScene(){
}

LoadingScene::~LoadingScene(){
}


bool LoadingScene::init(){
	if(!(Scene::init())){
		return false;
	}

	auto bgSprite = Sprite::create("images/backgrounds/chessbg2.jpg");
	if(bgSprite == nullptr){
		log("bgSprite init error");
		return false;
	}
	bgSprite->setAnchorPoint(Vec2::ZERO);
	bgSprite->setPosition(Vec2::ZERO);
	this->addChild(bgSprite, 0, "bgSprite");

	this->scheduleUpdate();
	log("Loading size: %lu", loadVector.size());

	return true;
}

void LoadingScene::update(float dt){
	auto visSize = CHE_VISIBLE_SIZE();
	const float width = visSize.width;
	float showWidth = MAX_SHOW_WIDTH / loadVector.size() * loadCount;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(loadCount >= loadVector.size()){
		log("[100 %]Loading finish");
		GameManager::getInstance()->goBack();
		GameManager::getInstance()->goHome();
		return;
	}

	static int lastCount = -1;
	if(loadCount <= lastCount){
		return;
	}

	static loadItem_t* loadingItem = nullptr;
	if(loadingItem != nullptr){
		if(loadingItem->loadtype == loadTypes::SPRITE_FRAME_CACHE){
			SpriteFrameCache::getInstance()->addSpriteFramesWithFile(loadingItem->plPath, loadingItem->texture);
		}
		delete loadingItem;
	}

	loadingItem = loadVector.at(loadCount);
	log("[%04.1f%%]Loading '%s'...", 
		100.0f * loadCount / loadVector.size(),
		loadingItem->imgPath.c_str());

	lastCount = loadCount;
	Director::getInstance()->getTextureCache()->addImageAsync(loadingItem->imgPath, [&](Texture2D* texture){
		loadingItem->texture = texture;
		++loadCount;
	});
}

