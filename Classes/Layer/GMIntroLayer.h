//
//  GMIntroLayer.h
//  FishX
//
//  Created by peng on 12-12-21.
//
//

#ifndef __FishX__GMIntroLayer__
#define __FishX__GMIntroLayer__

//#include <iostream>
#include "cocos2d.h"
#include "../Config/GMFashionConfig.h"
#include "../PublicModels/GMNoTouchLayer.h"

class GMIntroLayer : public CCLayer
{
public:
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(GMIntroLayer);
    virtual ~GMIntroLayer(void);

    void removeHelpplayer();
private:

    CCLayer             *homeLayer;
//    CCSpriteBatchNode   *homeBatchNode;
//    CCSpriteBatchNode   *homepageNode;
    CCSprite            *background;
    CCSprite            *tipSprite;
    CCSprite            *menuSprite;
    CCSprite            *moveSprite;
    CCMenu              *mainMenu1;
    CCSprite            *fish;
    GMNoTouchLayer      *exitLayer;
    CCMenuItemSprite    *closeMusicItem;
    bool                _isShowOpenVideo;
    bool                _isClick;//是否点击按钮
    
    bool                _isShowYiDong;//是否已经显示移动的计费界面
    
    int                 countTime;
    void startGame(Ref *pSender);
    void startEndlessMode(Ref *pSender);
    void helpGame(Ref *pSender);
    void cardGame();
    void winGame();
    void loseGame();
    void showAllMenu(Ref *pSender);
    void updateData(float time);
    void overAnimation(CCNode *pNode);
    void moveMenu(CCNode *pNode);
    void moveTo();
    void pauseLayerGame();
    void achievementLayer(Ref *pSender);
    void showMusic();
    void setMusicAtion(Ref *pSender);
    void closeMusicAtion(Ref *pSender);
    void setQuitAction(Ref *pSender);
    void setMoreAction(Ref *pSender);
    
    void confirmAtion(Ref *pSender);
    void cancelAtion(Ref *pSender);
    
    
    void uploadDate(float t);
    int  loadTime;
    void loadHomeData(int time);
    
    bool isShowDialogLayer;
    void showDialogLayer();
    void showQQLogoDialogLayer(int type);
    void removeQQLogoLayer(float dt);
    
    void showOpenMusicDialogLayer();
    void removeDialogLayer(CCNode *dialog);
    void openMusic(Ref *pSender);
    void closeMusic(Ref *pSender);
    
    void addchangeboom();
    void addBilling(int index,int index2);
    
    void checkBillingPoint(float dt);
    
    void showMoreItem();
    void set91SdkAction(Ref *pSender);
    
    void checkYiDongExitStatus(float t);
    void showYidongSdkView(int index);
//#pragma mark - 电信计费相关的方法
    void showTelecomSMSView(int _index);
    
    void setAllSkillNum();
    void saveMoney(int money);
    void check91BillingPoint(float dt);
    
    void checkMusicAction(float dt);
    
    void checkedRecord();
    void setGameOver();
    void setGameOverStaus(float dt);
private:
    float           menuW;
    int             index;
    bool            isLoadT;
    bool            isAgain;
    
    GMBillingModel billingModel;
    
//    virtual void keyBackClicked();//Android 返回键
public:
    void removeBilling(int index,bool _isClickClose);
};
#endif /* defined(__FishX__GMIntroLayer__) */
