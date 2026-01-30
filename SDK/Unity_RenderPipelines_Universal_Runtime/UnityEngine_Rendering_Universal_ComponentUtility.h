#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ComponentUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool IsUniversalCamera(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool IsUniversalLight(UnityEngine_CoreModule::UnityEngine::Light* light);
	};
}

