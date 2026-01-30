#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::NetworkInformation
{
	struct IPGlobalProperties : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool _PlatformNeedsLibCWorkaround_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_PlatformNeedsLibCWorkaround();
		static System::Net::NetworkInformation::IPGlobalProperties* GetIPGlobalProperties();
		static System::Net::NetworkInformation::IPGlobalProperties* InternalGetIPGlobalProperties();
		mscorlib::System::String* get_DomainName();
		void _ctor();
	};
}

