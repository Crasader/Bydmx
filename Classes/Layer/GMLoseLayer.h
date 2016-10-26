//
//  GMLoseLayer.h
//  FishX
//
//  Created by peng on 12-12-26.
//
//

#ifndef __FishX__GMLoseLayer__
#define __FishX__GMLoseLayer__

#include <iostream>
//#include "cocos2d.h"
#include "../Config/GMFashionConfig.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class GMLoseLayer : public CCLayer
{
private:
    CCSpriteBatchNode   *loseBatchNode;
    CCSpriteBatchNode   *hitFishBatchNode;
    bool            isOpenVideo;
    void initElement();
    
    CCLayerColor         *loseLayer;
    
    void chooseCard(Ref *pSender);
    void againGame(Ref *pSender);
    
    void continueTheGame();
    void pauseAction();
    void videoAction();
    
    void addCrowAnimation();
    void removeCrow(CCNode *pNode);
    
    void showScore(CCSprite* pChild);
    void arrowAtion(Ref *pSender);
    void arrowAtion1(Ref *pSender);
    
    void showStartPrompt();
    CCSprite *bg2;
    CCRect          scrollRect;
public:
    virtual bool init();
    GMLoseLayer();
    ~GMLoseLayer();
    static CCScene* scene();
    
    
    CCMenu *menu;
    bool m_bTouchedMenu;
    
    CREATE_FUNC(GMLoseLayer);
    
private:
    ScrollView    *scrollView;
    float           tempx1,tempx2;
    int             m_nCurPage;
    int             m_nTotalPage;
    float           moveW;
    int             currentLevel;
    
    void setPage(bool plus);
    void adjustScrollView(int arrow);
    void addStarEffect(CCNode *pNode);
    
    virtual bool onTouchBegan(CCTouch *pTouch,CCEvent *pEvent);
    virtual void onTouchMoved(CCTouch *pTouch,CCEvent *pEvent);
    virtual void onTouchEnded(CCTouch *pTouch,CCEvent *pEvent);
    virtual void onTouchCancelled(CCTouch *pTouch,CCEvent *pEvent);
};

#endif /* defined(__FishX__GMLoseLayer__) */
