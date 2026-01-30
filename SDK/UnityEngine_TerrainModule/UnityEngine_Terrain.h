#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
namespace UnityEngine_TerrainModule::UnityEngine { struct TerrainData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_TerrainModule::UnityEngine { struct Terrain; };

namespace UnityEngine_TerrainModule::UnityEngine
{
	struct Terrain : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TerrainModule::UnityEngine::TerrainData* get_terrainData();
		bool get_allowAutoConnect();
		int32_t get_groupingID();
		void SetNeighbors(UnityEngine_TerrainModule::UnityEngine::Terrain* left, UnityEngine_TerrainModule::UnityEngine::Terrain* top, UnityEngine_TerrainModule::UnityEngine::Terrain* right, UnityEngine_TerrainModule::UnityEngine::Terrain* bottom);
		static IL2CPP::Array<UnityEngine_TerrainModule::UnityEngine::Terrain*>* get_activeTerrains();
		void _ctor();
	};
}

