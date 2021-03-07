
#ifndef __CHESS_MACRO_H__
#define __CHESS_MACRO_H__

#include "cocos2d.h"
#include "cocos/ui/CocosGUI.h"

#include "chessTypes.h"

#define CHE_CREATE_BUTTON(name) (cocos2d::ui::Button::create(\
        "images/buttons/" name "_normal.png",\
        "images/buttons/" name "_selected.png",\
        "images/buttons/" name "_disabled.png"))
#define CHE_VISIBLE_SIZE() (cocos2d::Director::getInstance()->getVisibleSize())
#define CHE_GETTEXTURE(key) (Director::getInstance()->getTextureCache()->getTextureForKey(key))


#endif // __CHESS_MACRO_H__
