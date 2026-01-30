#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_Rendering_Universal_RenderObjects.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct RenderObjects; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct RenderObjects_CustomCameraSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool overrideCamera;
		bool restoreCamera;
		UnityEngine_CoreModule::UnityEngine::Vector4 offset;
		float cameraFieldOfView;
		void _ctor();
	};
}

