#pragma once

#include "minecraftpe/world/item/BlockItem.h"
#include "minecraftpe/world/level/block/Block.h"
#include "minecraftpe/world/level/block/BlockGraphics.h"

class Rainbow{
	public:
	
		static void registerItems();//Does exactly what it says
		static void initClientData();//Initializes stuff like icon and texture
		static void initCreativeItems();//Adds them to the creative inventory
		
		
		static Item* mSword;//This is our item. 
};
