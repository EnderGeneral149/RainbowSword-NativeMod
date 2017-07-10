#include "RainbowSword.h"

#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/world/entity/Mob.h"

SwordItem::SwordItem(short id) : Item("rainbowSword", id - 256){

	mItems[id] = this;
	setCategory(CreativeItemCategory::Tools);
	setMaxStackSize(1);
	setMaxDamage(2000);
	setHandEquipped();
}

int SwordItem::getAttackDamage(){
	return (Item::mItems[276]->getAttackDamage() + 5);
}

bool SwordItem::mineBlock(ItemInstance *item, BlockID, int, int, int, Entity *entity){
	item->hurtAndBreak(2, entity);
}

bool SwordItem::canDestroySpecial(const Block* block) const{
	return block == Block::mWeb;
}


