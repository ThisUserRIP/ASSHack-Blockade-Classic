#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel
{
	struct SyntaxCheck : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool CheckMachineName(mscorlib::System::String* value);
		static bool CheckPath(mscorlib::System::String* value);
		static bool CheckRootedPath(mscorlib::System::String* value);
	};
}

