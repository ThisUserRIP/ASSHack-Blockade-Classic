#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_RenderingUtils.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingUtils; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct RenderingUtils_StereoConstants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* viewProjMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* invViewMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* invProjMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* invViewProjMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* invCameraProjMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* worldSpaceCameraPos;
		void _ctor();
	};
}

