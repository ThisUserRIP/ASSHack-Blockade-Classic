#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct Action; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\UnityEngine_CoreModule\Unity_Profiling_ProfilerMarker.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UIElementsNativeModule::UnityEngine::UIElements::UIR
{
	struct Utility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_1<mscorlib::System::Boolean>* GraphicsResourcesRecreate;
			mscorlib::System::Action* EngineUpdate;
			mscorlib::System::Action* FlushPendingResources;
			mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Camera>* RegisterIntermediateRenderers;
			mscorlib::System::Action_1<mscorlib::System::IntPtr>* RenderNodeAdd;
			mscorlib::System::Action_1<mscorlib::System::IntPtr>* RenderNodeExecute;
			mscorlib::System::Action_1<mscorlib::System::IntPtr>* RenderNodeCleanup;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker s_MarkerRaiseEngineUpdate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void RaiseGraphicsResourcesRecreate(bool recreate);
		static void RaiseEngineUpdate();
		static void RaiseFlushPendingResources();
		static void RaiseRegisterIntermediateRenderers(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void RaiseRenderNodeAdd(intptr_t userData);
		static void RaiseRenderNodeExecute(intptr_t userData);
		static void RaiseRenderNodeCleanup(intptr_t userData);
		static void _cctor();
	};
}

