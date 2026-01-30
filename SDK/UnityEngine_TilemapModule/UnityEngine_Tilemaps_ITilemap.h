#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct Tilemap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3Int; };

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct ITilemap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tilemap* m_Tilemap;
		struct StaticFields
		{
			UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void RefreshTile(UnityEngine_CoreModule::UnityEngine::Vector3Int position);
		static UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* CreateInstance();
	};
}

