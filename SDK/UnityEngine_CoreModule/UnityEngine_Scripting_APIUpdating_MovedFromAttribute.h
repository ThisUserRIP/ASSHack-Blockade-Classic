#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "UnityEngine_Scripting_APIUpdating_MovedFromAttributeData.h"
namespace UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating { struct MovedFromAttributeData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating
{
	struct MovedFromAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data;
		void _ctor(mscorlib::System::String* sourceNamespace);
	};
}

