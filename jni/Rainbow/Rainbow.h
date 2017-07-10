#pragma once

#include "minecraftpe/world/item/BlockItem.h"
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/world/level/block/BlockGraphics.h"

class Rainbow{
	public:
	
		static void registerItems();
		static void initClientData();
		static void initCreativeItems();
		
		
		static Item* mSword;
};
