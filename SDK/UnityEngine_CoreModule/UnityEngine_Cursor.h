#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_CursorLockMode.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Cursor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool get_visible();
		static void set_visible(bool value);
		static UnityEngine_CoreModule::UnityEngine::CursorLockMode get_lockState();
		static void set_lockState(UnityEngine_CoreModule::UnityEngine::CursorLockMode value);
	};
}

