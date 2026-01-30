#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering { struct IScriptableRuntimeReflectionSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering
{
	struct ScriptableRuntimeReflectionSystemWrapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* _implementation_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation();
		void set_implementation(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);
		void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(bool& result);
		void _ctor();
	};
}

