#pragma once

#include "minecraftpe/world/item/Item.h"

class SwordItem : public Item //inheriting functions from Item class inside of the Item header
{
public:
	SwordItem(short id);
	
	virtual int getAttackDamage();//you can guess what all of ths stuff does and means
	virtual bool mineBlock(ItemInstance*, BlockID, int, int, int, Entity*);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual bool canDestroySpecial(const Block*) const;
	virtual bool canDestroyInCreative() const { return false; }
};
