#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRSystemData; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_Universal_CameraData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_XRModule\UnityEngine_XR_XRDisplaySubsystem_XRRenderPass.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRSystem___c__DisplayClass24_0; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRSystem___c__DisplayClass24_0; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct XRSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* emptyPass;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass>* framePasses;
		UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem* display;
		UnityEngine_CoreModule::UnityEngine::Material* occlusionMeshMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* mirrorViewMaterial;
		UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* mirrorViewMaterialProperty;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* testRenderTexture;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem>* displayList;
			int32_t msaaLevel;
			mscorlib::System::String* k_XRMirrorTag;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* _XRMirrorProfilingSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void InitializeXRSystemData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRSystemData* data);
		static void GetDisplaySubsystem();
		static void XRSystemInit();
		static void UpdateMSAALevel(int32_t level);
		static int32_t GetMSAALevel();
		static void UpdateRenderScale(float renderScale);
		int32_t GetMaxViews();
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass>* SetupFrame(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData);
		void ReleaseFrame();
		bool RefreshXrSdk();
		void UpdateCameraData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& baseCameraData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass& xr);
		void UpdateFromCamera(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass& xrPass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData);
		void CreateLayoutFromXrSdk(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool singlePassAllowed);
		void Dispose();
		void AddPassToFrame(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* xrPass);
		void RenderMirrorView(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void _cctor();
		static bool _CreateLayoutFromXrSdk_g__CanUseSinglePass_24_0(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRSystem___c__DisplayClass24_0& A_1);
	};
}

