#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility_TerrainGroups; };

namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	struct TerrainUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool HasValidTerrains();
		static void ClearConnectivity();
		static UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups* CollectTerrains(bool onlyAutoConnectedTerrains);
		static void AutoConnect();
	};
}

