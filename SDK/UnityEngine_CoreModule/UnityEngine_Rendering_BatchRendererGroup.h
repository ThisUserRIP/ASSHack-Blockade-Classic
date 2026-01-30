#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchRendererGroup_OnPerformCulling; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchRendererCullingOutput; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchRendererCullingOutput; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct LODParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct LODParameters; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct BatchRendererGroup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_GroupHandle;
		UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* m_PerformCulling;
		static void InvokeOnPerformCulling(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup* group, UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererCullingOutput& context, UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters& lodParameters);
	};
}

