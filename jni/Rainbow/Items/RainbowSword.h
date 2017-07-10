#pragma once

#include "minecraftpe/world/item/Item.h"

class SwordItem : public Item
{
public:
	SwordItem(short id);
	
	virtual int getAttackDamage();
	virtual bool mineBlock(ItemInstance*, BlockID, int, int, int, Entity*);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual bool canDestroySpecial(const Block*) const;
	virtual bool canDestroyInCreative() const { return false; }
};
