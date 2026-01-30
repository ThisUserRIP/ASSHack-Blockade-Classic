#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Renderer.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::U2D { struct SpriteAtlas; };

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct TilemapRenderer : UnityEngine_CoreModule::UnityEngine::Renderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void RegisterSpriteAtlasRegistered();
		void UnregisterSpriteAtlasRegistered();
		void OnSpriteAtlasRegistered(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* atlas);
	};
}

