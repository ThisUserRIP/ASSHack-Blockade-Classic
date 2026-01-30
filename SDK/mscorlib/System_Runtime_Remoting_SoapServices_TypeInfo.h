#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Remoting_SoapServices.h"
namespace mscorlib::System::Runtime::Remoting { struct SoapServices; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting
{
	struct SoapServices_TypeInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* Attributes;
		mscorlib::System::Collections::Hashtable* Elements;
		void _ctor();
	};
}

