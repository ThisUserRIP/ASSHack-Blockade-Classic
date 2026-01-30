#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkMigrationManager.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMigrationManager; };
#include "UnityEngine_Networking_NetworkMigrationManager_PendingPlayerInfo.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMigrationManager_PendingPlayerInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkMigrationManager_ConnectionPendingPlayers
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_PendingPlayerInfo>* players;
	};
}

