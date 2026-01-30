#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace UnityEngine_CoreModule::UnityEngine::Sprites
{
	struct DataUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Vector4 GetInnerUV(UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		static UnityEngine_CoreModule::UnityEngine::Vector4 GetOuterUV(UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		static UnityEngine_CoreModule::UnityEngine::Vector4 GetPadding(UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetMinSize(UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
	};
}

