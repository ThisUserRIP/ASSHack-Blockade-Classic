#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "UnityEngine_Camera_RenderRequest.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera_RenderRequest; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderPipeline : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _disposed_k__BackingField;
		void Render(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		void ProcessRenderRequests(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera_RenderRequest>* renderRequests);
		static void BeginFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		static void BeginCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void EndFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		static void EndCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void InternalRender(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		void InternalRenderWithRequests(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera_RenderRequest>* renderRequests);
		bool get_disposed();
		void set_disposed(bool value);
		void Dispose();
		void Dispose(bool disposing);
		void _ctor();
	};
}

