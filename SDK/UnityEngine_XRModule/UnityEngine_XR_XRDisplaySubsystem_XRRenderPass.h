#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_XR_XRDisplaySubsystem.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderParameter; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderParameter; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRDisplaySubsystem_XRRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t displaySubsystemInstance;
		int32_t renderPassIndex;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor renderTargetDesc;
		bool shouldFillOutDepth;
		int32_t cullingPassIndex;
		void GetRenderParameter(UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t renderParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter& renderParameter);
		int32_t GetRenderParameterCount();
		static void GetRenderParameter_Injected(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t renderParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter& renderParameter);
		static int32_t GetRenderParameterCount_Injected(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& _unity_self);
	};
}

