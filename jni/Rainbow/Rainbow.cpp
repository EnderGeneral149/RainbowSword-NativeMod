#include "Rainbow.h"

#include "Items/RainbowSword.h"


Item* Rainbow::mSword;


void Rainbow::registerItems(){
	mSword = new SwordItem(3000);//Add our sword object to our SwordItem class
}

void Rainbow::initClientData(){
	mSword->setIcon("rainbow_sword",0);//Sets its icon image
}

void Rainbow::initCreativeItems(){
	Item::addCreativeItem(3000,0);//Uses the ID to add it to the creative inventory
}


