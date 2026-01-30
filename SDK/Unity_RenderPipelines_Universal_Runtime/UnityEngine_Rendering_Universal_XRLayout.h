#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRSystem; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass; };
#include "UnityEngine_Rendering_Universal_XRPassCreateInfo.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPassCreateInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_XRViewCreateInfo.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRViewCreateInfo; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct XRLayout
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Camera* camera;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRSystem* xrSystem;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* CreatePass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPassCreateInfo passCreateInfo);
		void AddViewToPass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRViewCreateInfo viewCreateInfo, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* pass);
	};
}

