#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct IPAddress; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct IPHostEntry; };

namespace System::System::Net
{
	struct NclUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<System::Net::IPAddress*>* _LocalAddresses;
			mscorlib::System::Object* _LocalAddressesLock;
			mscorlib::System::String* _LocalDomainName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool IsAddressLocal(System::Net::IPAddress* ipAddress);
		static System::Net::IPHostEntry* GetLocalHost();
		static IL2CPP::Array<System::Net::IPAddress*>* get_LocalAddresses();
		static mscorlib::System::Object* get_LocalAddressesLock();
	};
}

