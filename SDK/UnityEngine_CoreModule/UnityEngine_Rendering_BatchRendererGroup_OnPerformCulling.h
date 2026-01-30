#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Rendering_BatchRendererGroup.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchRendererGroup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Unity_Jobs_JobHandle.h"
namespace UnityEngine_CoreModule::Unity::Jobs { struct JobHandle; };
#include "UnityEngine_Rendering_BatchCullingContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchCullingContext; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct BatchRendererGroup_OnPerformCulling : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		UnityEngine_CoreModule::Unity::Jobs::JobHandle Invoke(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext cullingContext);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext cullingContext, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		UnityEngine_CoreModule::Unity::Jobs::JobHandle EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

