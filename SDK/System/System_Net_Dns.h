#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace System::System::Net { struct IPAddress; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct IPHostEntry; };

namespace System::System::Net
{
	struct Dns : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::IAsyncResult* BeginGetHostAddresses(mscorlib::System::String* hostNameOrAddress, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		static IL2CPP::Array<System::Net::IPAddress*>* EndGetHostAddresses(mscorlib::System::IAsyncResult* asyncResult);
		static bool GetHostByName_internal(mscorlib::System::String* host, mscorlib::System::String& h_name, IL2CPP::Array<mscorlib::System::String*>& h_aliases, IL2CPP::Array<mscorlib::System::String*>& h_addr_list, int32_t hint);
		static bool GetHostByAddr_internal(mscorlib::System::String* addr, mscorlib::System::String& h_name, IL2CPP::Array<mscorlib::System::String*>& h_aliases, IL2CPP::Array<mscorlib::System::String*>& h_addr_list, int32_t hint);
		static bool GetHostName_internal(mscorlib::System::String& h_name);
		static void Error_11001(mscorlib::System::String* hostName);
		static System::Net::IPHostEntry* hostent_to_IPHostEntry(mscorlib::System::String* originalHostName, mscorlib::System::String* h_name, IL2CPP::Array<mscorlib::System::String*>* h_aliases, IL2CPP::Array<mscorlib::System::String*>* h_addrlist);
		static System::Net::IPHostEntry* GetHostByAddressFromString(mscorlib::System::String* address, bool parse);
		static System::Net::IPHostEntry* GetHostEntry(mscorlib::System::String* hostNameOrAddress);
		static System::Net::IPHostEntry* GetHostEntry(System::Net::IPAddress* address);
		static IL2CPP::Array<System::Net::IPAddress*>* GetHostAddresses(mscorlib::System::String* hostNameOrAddress);
		static System::Net::IPHostEntry* GetHostByName(mscorlib::System::String* hostName);
		static mscorlib::System::String* GetHostName();
	};
}

