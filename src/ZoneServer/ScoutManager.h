
/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#pragma once

#include <vector>
#include "MathLib/Vector3.h"
#include "Utils/typedefs.h"

#define gScoutManager ScoutManager::getSingletonPtr()

class Database;
class Message;
class MessageDispatch;
class PlayerObject;
class ObjectControllerCommandMap;
class ZoneTree;

#define gScoutManager	ScoutManager::getSingletonPtr()

class ScoutManager
{
public:
	static ScoutManager*	getSingletonPtr() { return mSingleton; }
	
	static ScoutManager*	Instance()
	{
		if (!mSingleton)
		{
			mSingleton = new ScoutManager();

		}
		return mSingleton;
	}

	static inline void deleteManager(void)    
	{ 
		if (mSingleton)
		{
			delete mSingleton;
			mSingleton = 0;
		}
	}

	//camps
	bool createCamp(uint32 typeId,uint64 parentId,Anh_Math::Vector3 position,string customName, PlayerObject* player);

	//foraging
	static void successForage(PlayerObject* player);

protected:
	ScoutManager::ScoutManager();
	~ScoutManager(void);

private:
	static ScoutManager*	mSingleton;

};
