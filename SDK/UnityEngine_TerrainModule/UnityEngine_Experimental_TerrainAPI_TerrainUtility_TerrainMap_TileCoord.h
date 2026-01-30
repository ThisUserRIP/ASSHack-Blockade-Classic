#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap.h"
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility_TerrainMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	struct TerrainUtility_TerrainMap_TileCoord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t tileX;
		int32_t tileZ;
		void _ctor(int32_t tileX, int32_t tileZ);
	};
}

