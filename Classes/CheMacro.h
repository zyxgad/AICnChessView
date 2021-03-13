
#ifndef __CHESS_MACRO_H__
#define __CHESS_MACRO_H__

#include "cocos2d.h"
#include "cocos/ui/CocosGUI.h"

#include "chessTypes.h"

#ifdef __LP64__
#define CHE_OS_64
#else
#define CHE_OS_32
#endif // __LP64__

#define CHE_VISIBLE_SIZE() (cocos2d::Director::getInstance()->getVisibleSize())
#define CHE_GETTEXTURE(key) (Director::getInstance()->getTextureCache()->getTextureForKey(key))

#define CHE_CREATE_BUTTON(name) (cocos2d::ui::Button::create(\
        "images/buttons/" name "_normal.png",\
        "images/buttons/" name "_selected.png",\
        "images/buttons/" name "_disabled.png"))

#endif // __CHESS_MACRO_H__
