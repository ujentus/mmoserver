/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2008 The swgANH Team

---------------------------------------------------------------------------------------
*/

#include "IntangibleObject.h"
#include "PlayerObject.h"

IntangibleObject::IntangibleObject() : Object(),
mComplexity(1.0f),
mVolume(1)
{
	mType				= ObjType_Intangible;
	mItnoGroup			= ItnoGroup_None;
	mName				= "";
	mNameFile			= "";
	mCustomName			= L"";
	mDetailFile			= "";		
	mDetail				= "";
	mPhysicalModel		= "";
}
//=============================================================================

IntangibleObject::~IntangibleObject()
{



}
//=============================================================================