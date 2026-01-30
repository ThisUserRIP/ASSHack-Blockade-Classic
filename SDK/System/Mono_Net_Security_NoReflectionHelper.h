#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };

namespace System::Mono::Net::Security
{
	struct NoReflectionHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Object* GetInternalValidator(mscorlib::System::Object* provider, mscorlib::System::Object* settings);
		static mscorlib::System::Object* GetProvider();
	};
}

