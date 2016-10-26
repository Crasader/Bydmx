//
//  ZPDialogLayer.h
//  FishX
//
//  Created by peng on 13-4-19.
//
//

#ifndef __FishX__ZPDialogLayer__
#define __FishX__ZPDialogLayer__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class ZPDialogLayer: public CCLayerColor
{
    // 模态对话框菜单
    CCMenu *m_pMenu;
    // 记录菜单点击
    bool m_bTouchedMenu;
    
public:
    ZPDialogLayer();
    ~ZPDialogLayer();
    
    virtual bool init();
    // 初始化对话框内容
    void initDialog();
    
    CREATE_FUNC(ZPDialogLayer);
    
    
    void initView(const char *pszFileName,const char *pszSpriteFrameName);
    void addPromptTexture(const char *pszFileName);
    
    void setAnimation(bool isRemoved,float delay);
    
    void setSelectorTarget(Ref *targer) { pSelectorTarget = targer; }
    void setSELCallFun(SEL_CallFuncN call) { selector = call; }
    
    CCSprite *getSprite();
    CCSize getBGSprite();
    
    void setLabel(const char *string);
    void setLabel2(const char *string);
    void addMenu(const char *normalName,const char *selectedName,bool isFrame);
    
    void initView1();
    void initView2();
    void initSoundView();
    void initPromptLaser(Ref *targer,const char *string,SEL_CallFuncN sel);
    
    void showPromptOpenCannon(int index);
    
    void setSELMenuHandler(SEL_MenuHandler call) { selector2 = call; }
    void setSELMenuHandler3(SEL_MenuHandler call) { selector3 = call; }
    
    
    void initQQLogoView(int type);
private:
    void setAnimation2(float dt);//回缩
	void removeDialogLayer1();
    void removeDialogLayer(Ref *pSender);
    
    void removeQQLogo(float dt);
    CCLayerColor    *tempColor;
    CCSprite        *bgSprite;
    CCSprite        *bgSprite1;
    CCObject        *pSelectorTarget;
    SEL_CallFuncN   selector;
    SEL_MenuHandler selector2;
    SEL_MenuHandler selector3;
    
    CCSize          bgSpriteSize;
    
    CCLabelTTF      *_labelt;
public:
    void onEnter();
    void onExit();
    
    virtual bool onTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
    virtual void onTouchCancelled(CCTouch *pTouch, CCEvent *pEvent);
    
    void okMenuItemCallback(Ref *pSender);
    void cancelMenuItemCallback(Ref *pSender);
};
#endif /* defined(__FishX__ZPDialogLayer__) */
