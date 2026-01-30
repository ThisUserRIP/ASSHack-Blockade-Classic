#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_GridModule\UnityEngine_GridLayout.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3Int; };

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct Tilemap : UnityEngine_GridModule::UnityEngine::GridLayout
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void RefreshTile(UnityEngine_CoreModule::UnityEngine::Vector3Int position);
		void RefreshTile_Injected(UnityEngine_CoreModule::UnityEngine::Vector3Int& position);
	};
}

