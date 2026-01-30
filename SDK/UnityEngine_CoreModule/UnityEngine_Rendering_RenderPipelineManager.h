#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderPipelineAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderPipeline; };
#include "UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Camera_RenderRequest.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera_RenderRequest; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderPipelineManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* s_CurrentPipelineAsset;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* s_Cameras;
			int32_t s_CameraCapacity;
			UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* _currentPipeline_k__BackingField;
			mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>>* beginFrameRendering;
			mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* beginCameraRendering;
			mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>>* endFrameRendering;
			mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* endCameraRendering;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* get_currentPipeline();
		static void set_currentPipeline(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* value);
		static void add_beginFrameRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>>* value);
		static void remove_beginFrameRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>>* value);
		static void add_beginCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value);
		static void remove_beginCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value);
		static void add_endCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value);
		static void remove_endCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value);
		static void BeginFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		static void BeginCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void EndFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		static void EndCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void CleanupRenderPipeline();
		static void GetCameras(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context);
		static void DoRenderLoop_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* pipe, intptr_t loopPtr, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera_RenderRequest>* renderRequests);
		static void PrepareRenderPipeline(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);
		static void _cctor();
	};
}

