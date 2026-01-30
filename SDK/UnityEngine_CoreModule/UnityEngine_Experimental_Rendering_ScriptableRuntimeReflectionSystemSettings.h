#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering { struct ScriptableRuntimeReflectionSystemWrapper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering { struct IScriptableRuntimeReflectionSystem; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering
{
	struct ScriptableRuntimeReflectionSystemSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance();
		static void ScriptingDirtyReflectionSystemInstance();
		static void _cctor();
	};
}

