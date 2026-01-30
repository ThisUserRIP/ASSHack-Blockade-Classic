#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IControllerTemplateElementIdentifier_Editor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_scriptingName();
		mscorlib::System::String* get_alternateScriptingName();
	};
}

