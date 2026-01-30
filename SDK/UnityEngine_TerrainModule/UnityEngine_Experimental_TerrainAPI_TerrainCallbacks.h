#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainCallbacks_HeightmapChangedCallback; };
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainCallbacks_TextureChangedCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_TerrainModule::UnityEngine { struct TerrainData; };
#include "..\UnityEngine_CoreModule\UnityEngine_RectInt.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectInt; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	struct TerrainCallbacks : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback* heightmapChanged;
			UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_TextureChangedCallback* textureChanged;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InvokeHeightmapChangedCallback(UnityEngine_TerrainModule::UnityEngine::TerrainData* terrainData, UnityEngine_CoreModule::UnityEngine::RectInt heightRegion, bool synched);
		static void InvokeTextureChangedCallback(UnityEngine_TerrainModule::UnityEngine::TerrainData* terrainData, mscorlib::System::String* textureName, UnityEngine_CoreModule::UnityEngine::RectInt texelRegion, bool synched);
	};
}

