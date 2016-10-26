//
//  GMHelpLayer.h
//  FishX
//
//  Created by peng on 12-12-21.
//
//

#ifndef __FishX__GMHelpLayer__
#define __FishX__GMHelpLayer__

#include <iostream>
#include "cocos2d.h"
#include "AppDelegate.h"

class GMHelpLayer : public cocos2d::CCLayerColor
{
private:
    AppDelegate         *deleagte;
    cocos2d::CCSpriteBatchNode       *helpNode;
    void initElement();
    void backAction(Ref *pSender);
    void nextAction();
    
public:
    virtual bool init();
    static cocos2d::CCScene* scene();
    ~GMHelpLayer();
    CREATE_FUNC(GMHelpLayer);
    Ref        *_delegate;
    
    void removeHelpTouchDelegate();
private:
    virtual bool onTouchBegan (cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchMoved (cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchEnded (cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
};


#endif /* defined(__FishX__GMHelpLayer__) */
