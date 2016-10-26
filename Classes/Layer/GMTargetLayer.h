//
//  GMTargetLayer.h
//  FishX
//
//  Created by peng on 13-3-10.
//
//

#ifndef __FishX__GMTargetLayer__
#define __FishX__GMTargetLayer__

#include <iostream>
#include "../Config/GMFashionConfig.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class GMTargetLayer : public CCLayerColor
{
    
public:
    virtual bool init();
    GMTargetLayer();
    ~GMTargetLayer();
    static CCScene* scene();
    
    CREATE_FUNC(GMTargetLayer);
    
public:
    CCNode          *_delegate;
    
    /*
     *  index == 3//无尽模式结束界面
     *  index1 无尽模式 阶段索引
     */
    void initElement(int index,int index1);
    void showBossIcon(int bossId);
    void showFishKind(int score,CCArray*array);
    void showScoreAndTime(int score,int time);
    void showAllValue();
private:
    ScrollView    *scrollView;
    CCSprite        *background;
    CCSprite        *gamegoal011;
    float           bg_w,bg_h;
    CCPoint         m_touchPoint;
    float           tempx1,tempx2;
    //    int
    int             m_nCurPage;
    int             m_nTotalPage;
    int             m_nIndex;
    
    CCRect          scrollRect;
    CCSprite        *bgSprite;
    CCRect          bgRect;
    CCMenuItemSprite *arrow1;
    CCMenuItemSprite *arrow2;
    
    CCArray         *tempArray;
    
    
    void arrowAtion1(Ref *pSender);
    void arrowAtion2(Ref *pSender);
    void goAtion(Ref *pSender);
    
    void againAction(Ref *pSender);
    void backHomeAtion(Ref *pSender);
    void backAction();
    void adjustScrollView(int arrow);
    void setPage(bool plus);
    
    virtual bool onTouchBegan (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchMoved (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchEnded (CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchCancelled(CCTouch *pTouch, CCEvent *pEvent);
};
#endif /* defined(__FishX__GMTargetLayer__) */
