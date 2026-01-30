#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct IPAddress; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct IPHostEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* hostName;
		IL2CPP::Array<mscorlib::System::String*>* aliases;
		IL2CPP::Array<System::Net::IPAddress*>* addressList;
		bool isTrustedHost;
		mscorlib::System::String* get_HostName();
		void set_HostName(mscorlib::System::String* value);
		void set_Aliases(IL2CPP::Array<mscorlib::System::String*>* value);
		IL2CPP::Array<System::Net::IPAddress*>* get_AddressList();
		void set_AddressList(IL2CPP::Array<System::Net::IPAddress*>* value);
		void _ctor();
	};
}

