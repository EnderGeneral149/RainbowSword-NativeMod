#include "Rainbow.h"

#include "Items/RainbowSword.h"


Item* Rainbow::mSword;


void Rainbow::registerItems(){
	mSword = new SwordItem(3000);
}

void Rainbow::initClientData(){
	mSword->setIcon("rainbow_sword",0);
}

void Rainbow::initCreativeItems(){
	Item::addCreativeItem(3000,0);
}


