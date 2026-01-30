#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering
{
	struct BuiltinRuntimeReflectionSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool TickRealtimeProbes();
		void Dispose();
		void Dispose(bool disposing);
		static bool BuiltinUpdate();
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();
		void _ctor();
	};
}

