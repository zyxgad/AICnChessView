
#include "HomeScene.h"

#include "managers/GameManager.h"

USING_NS_CC;

HomeScene::HomeScene(){
}

HomeScene::~HomeScene(){
}

bool HomeScene::init(){
	auto bgSprite = Sprite::create("images/chessbg1.jpg");
	if(bgSprite == nullptr){
		log("bgSprite init error");
		return false;
	}
	bgSprite->setAnchorPoint(Vec2::ZERO);
	bgSprite->setPosition(Vec2::ZERO);
	this->addChild(bgSprite, 0, "bgSprite");

	// auto offline_btn = cocos2d::ui::Button::create(
	// 	"images/buttons/normal_offline.png", 
	// 	"images/buttons/selected_offline.png", 
	// 	"images/buttons/disabled_offline.png");
	// if(offline_btn == nullptr){
	// 	log("offline_btn init error");
	// 	return false;
	// }
	// offline_btn->setTitleText("offline_btn");
	// offline_btn->addClickEventListener([&](Ref* sender){
	// 	GameManager::getInstance()->goOffline();
	// });
	// this->addChild(offline_btn, 8, offline_btn);

	return true;
}

void HomeScene::update(float dt){
}

