#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::ComponentModel { struct IExtenderProvider; };

namespace System::System::ComponentModel::Design
{
	struct IExtenderListService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* GetExtenderProviders();
	};
}

