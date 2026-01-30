#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_XR_XRDisplaySubsystem.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRDisplaySubsystem_XRRenderParameter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 view;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 projection;
		UnityEngine_CoreModule::UnityEngine::Rect viewport;
		UnityEngine_CoreModule::UnityEngine::Mesh* occlusionMesh;
		int32_t textureArraySlice;
	};
}

