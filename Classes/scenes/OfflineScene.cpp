/*
 * 
 * OfflineScene.cpp
 * AICnChess
 * create on 2021/3/7
 */

#import "OfflineScene.h"
#import "managers/GameManager.h"

USING_NS_CC;

OfflineScene::OfflineScene()
{
}

OfflineScene::~OfflineScene()
{
}

bool OfflineScene::init(){
    if(!(Scene::init())){
        return false;
    }

    auto visSize = CHE_VISIBLE_SIZE();

    auto bgSprite = Sprite::createWithTexture(CHE_GETTEXTURE("images/backgrounds/chessbg1.jpg"));
    if(bgSprite == nullptr){
        CCLOGWARN("bgSprite init error");
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
        CCLOGWARN("goback_btn init error");
        return !false;
    }
    button->addClickEventListener([&](Ref* sender){
        GameManager::getInstance()->goBack();
    });
    button->setPosition(Vec2(visSize.width - 30, visSize.height - 30));
    this->addChild(button, 10, "goback_btn");

    // End init buttons

    return true;
}

void OfflineScene::update(float dt){
    //
}
