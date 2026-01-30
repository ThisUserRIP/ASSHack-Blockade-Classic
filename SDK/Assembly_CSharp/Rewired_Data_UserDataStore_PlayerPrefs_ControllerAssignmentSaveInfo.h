#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_UserDataStore_PlayerPrefs.h"
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs; };
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_PlayerInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::Data
{
	struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_PlayerInfo*>* players;
		int32_t get_playerCount();
		void _ctor();
		void _ctor(int32_t playerCount);
		int32_t IndexOfPlayer(int32_t playerId);
		bool ContainsPlayer(int32_t playerId);
	};
}

