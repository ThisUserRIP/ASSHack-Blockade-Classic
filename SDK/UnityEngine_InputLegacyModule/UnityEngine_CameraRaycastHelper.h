#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_InputLegacyModule::UnityEngine
{
	struct CameraRaycastHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::GameObject* RaycastTry(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, int32_t layerMask);
		static UnityEngine_CoreModule::UnityEngine::GameObject* RaycastTry2D(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, int32_t layerMask);
		static UnityEngine_CoreModule::UnityEngine::GameObject* RaycastTry_Injected(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray& ray, float distance, int32_t layerMask);
		static UnityEngine_CoreModule::UnityEngine::GameObject* RaycastTry2D_Injected(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray& ray, float distance, int32_t layerMask);
	};
}

