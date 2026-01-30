#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct TileAnimationData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Sprite*>* m_AnimatedSprites;
		float m_AnimationSpeed;
		float m_AnimationStartTime;
	};
}

