//
//  GMNoTouchLayer.h
//  FishX
//
//  Created by peng on 12-12-25.
//
//

#ifndef __FishX__GMNoTouchLayer__
#define __FishX__GMNoTouchLayer__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class GMNoTouchLayer : public CCLayerColor{
public:
    virtual bool init();
    ~GMNoTouchLayer();
    
    CREATE_FUNC(GMNoTouchLayer);
public:
    /*
     *  ccc4(0, 0, 0, 125)  半透明颜色
     */
    void setBgColor(const ccColor3B& color,GLubyte opacity);
    

    bool m_bTouchedMenu;

    void    removeTouchDelegate();
    
//    void onEnter();
//    void onExit();
    virtual bool onTouchBegan (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchMoved (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchEnded (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    
};


#endif /* defined(__FishX__GMNoTouchLayer__) */
