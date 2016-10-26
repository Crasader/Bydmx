//
//  GMWinLayer.h
//  FishX
//
//  Created by peng on 12-12-25.
//
//

#ifndef __FishX__GMWinLayer__
#define __FishX__GMWinLayer__

#include <iostream>
#include "cocos2d.h"
#include "../Config/GMFashionConfig.h"
#include "../PublicModels/GMNoTouchLayer.h"
#include "cocos-ext.h"
#include "../PublicModels/UIRollNum.h"
#include "GMAchievementPrompt.h"

USING_NS_CC;
USING_NS_CC_EXT;

class GMWinLayer : public CCLayer//,public .size()Delegate
{
public:
//    void scrollViewDidScroll(.size()* view);
//    void scrollViewDidZoom(.size()* view);
    
private:
    CCSpriteBatchNode   *winBatchNode;
    CCSpriteBatchNode   *hitFishBatchNode;
    
    bool            isOpenVideo;
    CCLayerColor    *winLayer;
    UIRollNum       *score1;
    UIRollNum       *score2;
    CCRect          scrollRect;
    bool           isloadT;
private:
    void initElement();
    
    void chooseCard(Ref *pSender);
    void continueTheGame();
    void showScore(CCSprite* pChild);
    
    void pauseAction();
    void videoAction();
    void arrowAction1(Ref *pSender);
    void arrowAction2(Ref *pSender);
    void nextGame(Ref *pSender);
    
    bool isShowDialogLayer;
    void showDialogLayer();
    void removeDialogLayer(CCNode *dialog);
    
    void addBilling(int index,int index2);
    
    void check91BillingPoint(float dt);
public:
    virtual bool init();
    GMWinLayer();
    ~GMWinLayer();
    static CCScene* scene();

    CREATE_FUNC(GMWinLayer);
    
    void setScore(int s1 ,int s2);
    
    void removeBilling(int index,bool _isClickClose);
private:
    ScrollView    *scrollView;
    float           tempx1,tempx2;
    int             m_nCurPage;
    int             m_nTotalPage;
    float           moveW;
    int             currentLevel;
    GMAchievementPrompt *achievementPrompt;
    CCSprite        *bg2;
    float           tempW,tempH;
    void showStartPrompt(float dt);
    
    void setPage(bool plus);
    void initScrollView(float dt);
    void adjustScrollView(int arrow);
    void addStarEffect(CCNode *pNode);
    
    void showAchievementPrompt(float t);
    void removeAchievementPrompt(float t);
    
    void checkBillingPoint(float dt);
    
    virtual bool onTouchBegan(CCTouch *pTouch,CCEvent *pEvent);
    virtual void onTouchMoved(CCTouch *pTouch,CCEvent *pEvent);
    virtual void onTouchEnded(CCTouch *pTouch,CCEvent *pEvent);
    virtual void onTouchCancelled(CCTouch *pTouch,CCEvent *pEvent);
};


#endif /* defined(__FishX__GMWinLayer__) */
