
#include "HomeScene.h"

#include "managers/GameManager.h"

USING_NS_CC;

HomeScene::HomeScene(){
}

HomeScene::~HomeScene(){
}

bool HomeScene::init(){
	if(!(Scene::init())){
		return false;
	}

	Size visSize = CHE_VISIBLE_SIZE();

	auto bgSprite = Sprite::createWithTexture(
		Director::getInstance()->getTextureCache()->getTextureForKey("images/backgrounds/chessbg1.jpg"));
	if(bgSprite == nullptr){
		log("bgSprite init error");
		return false;
	}
	bgSprite->setAnchorPoint(Vec2::ZERO);
	bgSprite->setPosition(Vec2::ZERO);
	this->addChild(bgSprite, 0, "bgSprite");

	// Init buttons
	Label* btn_label;
	ui::Button* button;

	// close button
	button = CHE_CREATE_BUTTON("close");
	if(button == nullptr){
		log("close_btn init error");
		return false;
	}
	button->addClickEventListener([&](Ref* sender){
		GameManager::getInstance()->close();
	});
	button->setPosition(Vec2(visSize.width - 30, visSize.height - 30));
	this->addChild(button, 10, "close_btn");

	// offline button
	button = CHE_CREATE_BUTTON("offline");
	if(button == nullptr){
		log("offline_btn init error");
		return false;
	}
	btn_label = Label::createWithTTF("单     机", "fonts/Songti.ttc", 27);
	btn_label->setTextColor(Color4B(10, 10, 10, 255));
	button->setTitleLabel(btn_label);
	button->addClickEventListener([&](Ref* sender){
		GameManager::getInstance()->goOffline();
	});
	button->setPosition(Vec2(visSize.width / 2, visSize.height - 200));
	this->addChild(button, 8, "offline_btn");

	// End init button

	return true;
}

void HomeScene::update(float dt){
}

