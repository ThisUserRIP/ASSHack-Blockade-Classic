#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystemDescriptor; };
#include "..\UnityEngine_SubsystemsModule\UnityEngine_IntegratedSubsystem_1.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_XR_XRDisplaySubsystem_TextureLayout.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderPass; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderPass; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRMirrorViewBlitDesc; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRMirrorViewBlitDesc; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRDisplaySubsystem : UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem_1<UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystemDescriptor>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<mscorlib::System::Boolean>* displayFocusChanged;
		void InvokeDisplayFocusChanged(bool focus);
		void set_scaleOfAllRenderTargets(float value);
		void set_zNear(float value);
		void set_zFar(float value);
		void set_sRGB(bool value);
		void set_textureLayout(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_TextureLayout value);
		void SetMSAALevel(int32_t level);
		void set_disableLegacyRenderer(bool value);
		int32_t GetRenderPassCount();
		void GetRenderPass(int32_t renderPassIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& renderPass);
		bool Internal_TryGetRenderPass(int32_t renderPassIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& renderPass);
		void GetCullingParameters(UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t cullingPassIndex, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& scriptableCullingParameters);
		bool Internal_TryGetCullingParams(UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t cullingPassIndex, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& scriptableCullingParameters);
		int32_t GetPreferredMirrorBlitMode();
		bool GetMirrorViewBlitDesc(UnityEngine_CoreModule::UnityEngine::RenderTexture* mirrorRt, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc& outDesc, int32_t mode);
		bool AddGraphicsThreadMirrorViewBlit(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, bool allowGraphicsStateInvalidate, int32_t mode);
		void _ctor();
	};
}

