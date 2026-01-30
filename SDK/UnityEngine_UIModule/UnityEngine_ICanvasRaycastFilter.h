#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace UnityEngine_UIModule::UnityEngine
{
	struct ICanvasRaycastFilter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsRaycastLocationValid(UnityEngine_CoreModule::UnityEngine::Vector2 sp, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera);
	};
}

