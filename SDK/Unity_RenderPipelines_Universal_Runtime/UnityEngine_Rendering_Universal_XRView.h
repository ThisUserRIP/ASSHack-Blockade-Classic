#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_XRModule\UnityEngine_XR_XRDisplaySubsystem_XRRenderPass.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderPass; };
#include "..\UnityEngine_XRModule\UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderParameter; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct XRView
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 projMatrix;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 viewMatrix;
		UnityEngine_CoreModule::UnityEngine::Rect viewport;
		UnityEngine_CoreModule::UnityEngine::Mesh* occlusionMesh;
		int32_t textureArraySlice;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, UnityEngine_CoreModule::UnityEngine::Rect vp, int32_t dstSlice);
		void _ctor(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter renderParameter);
	};
}

