#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Runtime_InteropServices_ClassInterfaceType.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct ClassInterfaceAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::InteropServices::ClassInterfaceType _val;
		void _ctor(mscorlib::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType);
	};
}

