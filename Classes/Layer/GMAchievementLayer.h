//
//  GMAchievementLayer.h
//  FishX
//
//  Created by peng on 13-2-26.
//
//

#ifndef __FishX__GMAchievementLayer__
#define __FishX__GMAchievementLayer__

#include <iostream>
#include "../Config/GMFashionConfig.h"
#include "../PublicModels/GMNoTouchLayer.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

#define ADJUST_ANIM_VELOCITY 800;

class GMAchievementLayer : public GMNoTouchLayer,public ScrollViewDelegate
{

public:
    virtual bool init();
    GMAchievementLayer();
    ~GMAchievementLayer();
    static CCScene* scene();
    
    CREATE_FUNC(GMAchievementLayer);
    
public:
    void scrollViewDidScroll(ScrollView* view);
    void scrollViewDidZoom(ScrollView* view);
private:
    ScrollView    *scrollView;
    CCSprite        *background;
    float           bg_w,bg_h;
    CCPoint         m_touchPoint;
    float           tempx1,tempx2;
//    int             
    int             m_nCurPage;
    int             m_nTotalPage;
    CCArray         *achievementArray;
    CCArray         *achievementArray1; //排序
    CCRect          scrollRect;
    float           moveW;
    void initElement();
    void backAction(Ref *pSender);
    void adjustScrollView(int arrow);
    void setCurPageMark(int mark);
    
    virtual bool onTouchBegan (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchMoved (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchEnded (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchCancelled(CCTouch *pTouch, CCEvent *pEvent);
};

#endif /* defined(__FishX__GMAchievementLayer__) */
