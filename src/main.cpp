#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(GJBaseGameLayer) {
	void update(float dt) {
		GJBaseGameLayer::update(dt);

		auto uilayer = getChildOfType<UILayer>(PlayLayer::get(), 0);

		auto gui1 = getChildOfType<GJUINode>(static_cast<CCNode*>(uilayer), 0);
		auto gui2 = getChildOfType<GJUINode>(static_cast<CCNode*>(uilayer), 1);
		auto gui3 = getChildOfType<GJUINode>(static_cast<CCNode*>(uilayer), 2);
		auto gui4 = getChildOfType<GJUINode>(static_cast<CCNode*>(uilayer), 3);

		if (gui1) gui1->setVisible(true);
		if (gui2) gui2->setVisible(true);
		if (gui3) gui3->setVisible(true);
		if (gui4) gui4->setVisible(true);

		if (gui2) gui2->setPositionX(CCDirector::sharedDirector()->getWinSize().width - gui1->getPositionX());
		if (gui3) gui3->setPositionY(gui1->getPositionY() + 60.f);
		if (gui4) gui4->setPositionX(gui2->getPositionX());
		if (gui4) gui4->setPositionY(gui2->getPositionY() + 60.f);
	} 
};
