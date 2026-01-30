#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_SubsystemsModule::UnityEngine { struct SubsystemDescriptor; };

namespace UnityEngine_SubsystemsModule::UnityEngine
{
	struct Internal_SubsystemDescriptors : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Internal_AddDescriptor(UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptor* descriptor);
	};
}

