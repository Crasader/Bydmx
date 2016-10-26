//
//  GMNoTouchLayer.cpp
//  FishX
//
//  Created by peng on 12-12-25.
//
//

#include "GMNoTouchLayer.h"

bool GMNoTouchLayer::init(){
    if (!CCLayerColor::init() )
    {
        return false;
    }
    
    auto listener = EventListenerTouchOneByOne::create();

	listener->setSwallowTouches(true);

	listener->onTouchBegan = CC_CALLBACK_2(GMNoTouchLayer::onTouchBegan, this);
	listener->onTouchMoved = CC_CALLBACK_2(GMNoTouchLayer::onTouchMoved, this);
	listener->onTouchEnded = CC_CALLBACK_2(GMNoTouchLayer::onTouchEnded, this);
	listener->onTouchCancelled = CC_CALLBACK_2(GMNoTouchLayer::onTouchCancelled, this);

	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener,this);
    
    return true;
}

void GMNoTouchLayer::setBgColor(const ccColor3B& color,GLubyte opacity){
    this->setColor(color);
    this->setOpacity(opacity);
}



//#pragma mark - 重构

//void GMNoTouchLayer::onEnter()
//{
//    CCLayer::onEnter();
//    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, kCCMenuHandlerPriority - 1, true);
//}
//
//void GMNoTouchLayer::onExit()
//{
//    CCLayer::onExit();
//    CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
//}


bool GMNoTouchLayer::onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
{
   
    
    return true;
}

void GMNoTouchLayer::onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
{
    if (m_bTouchedMenu) {
        
    }
}

void GMNoTouchLayer::onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
{
    if (m_bTouchedMenu) {
        
        m_bTouchedMenu = false;
    }
}

void GMNoTouchLayer::onTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
{
    if (m_bTouchedMenu) {
        
        m_bTouchedMenu = false;
    }
}

void GMNoTouchLayer::removeTouchDelegate()
{
    _eventDispatcher->removeAllEventListeners();
}

GMNoTouchLayer::~GMNoTouchLayer()
{
    this->cleanup();
}










