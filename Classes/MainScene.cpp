/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "MainScene.h"


USING_NS_CC;

Scene* MainScene::createScene(){
    Scene* scene = MainScene::create();
    return scene;
}

bool MainScene::init(){
    if(!Scene::init()){
        return false;
    }

    Size winSize = Director::getInstance()->getWinSize();
    Size visSize = Director::getInstance()->getVisibleSize();
    Size frmSize = Director::getInstance()->getOpenGLView()->getFrameSize();

    CCLOG("The win size is: [%.0fpx, %.0fpx]", winSize.width, winSize.height);
    CCLOG("The vis size is: [%.0fpx, %.0fpx]", visSize.width, visSize.height);
    CCLOG("The frm size is: [%.0fpx, %.0fpx]", frmSize.width, frmSize.height);
    return true;
}

