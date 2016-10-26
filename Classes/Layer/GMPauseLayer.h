//
//  GMPauseLayer.h
//  FishX
//
//  Created by peng on 12-12-24.
//
//

#ifndef __FishX__GMPauseLayer__
#define __FishX__GMPauseLayer__

#include <iostream>
//#include "cocos2d.h"
#include "../Config/GMFashionConfig.h"
#include "GMHelpLayer.h"
#include "../PublicModels/GMNoTouchLayer.h"

class GMPauseLayer : public cocos2d::CCLayerColor
{
private:
    cocos2d::CCMenuItemSprite *item3;
    bool            isOpenVideo;
    CCSpriteBatchNode   *pauseBatchNode;
    GMHelpLayer         *helpLayer;
    
    GMNoTouchLayer      *exitLayer;
private:
    void initElement();
    
    void chooseCard(Ref *pSender);
    void continueTheGame(Ref *pSender);
    void enterFeedback(Ref *pSender);
    void videoAction(Ref *pSender);
    void helpAction(Ref *pSender);
    void againAction(Ref *pSender);
    void backAction(Ref *pSender);
    
    void setExitLayer();
    void confirmAtion(Ref *object);
    void cancelAtion(Ref *object);
    
public:
    virtual bool init();
    GMPauseLayer();
    ~GMPauseLayer();
    static cocos2d::CCScene* scene();
    
    
    cocos2d::CCMenu *menu;
    bool m_bTouchedMenu;
    
    CREATE_FUNC(GMPauseLayer);
    
    CCNode              *delegateGame;
    
    void removeTouchDelegate();
    
    void closeHelpAction();
    bool        isShowHelp;
    ////////////////////////////////////////
    void onEnter();
    void onExit();
    
    virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
};

#endif /* defined(__FishX__GMPauseLayer__) */
