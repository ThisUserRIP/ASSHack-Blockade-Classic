#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct AssemblyName; };

namespace System::System::ComponentModel::Design
{
	struct ITypeResolutionService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* GetType(mscorlib::System::String* name);
		mscorlib::System::String* GetPathOfAssembly(mscorlib::System::Reflection::AssemblyName* name);
	};
}

