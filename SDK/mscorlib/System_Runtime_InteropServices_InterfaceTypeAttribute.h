#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Runtime_InteropServices_ComInterfaceType.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct InterfaceTypeAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::InteropServices::ComInterfaceType _val;
		void _ctor(mscorlib::System::Runtime::InteropServices::ComInterfaceType interfaceType);
	};
}

