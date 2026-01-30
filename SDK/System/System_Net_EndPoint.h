#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_Sockets_AddressFamily.h"
namespace System::System::Net { struct SocketAddress; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct EndPoint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Sockets::AddressFamily get_AddressFamily();
		System::Net::SocketAddress* Serialize();
		System::Net::EndPoint* Create(System::Net::SocketAddress* socketAddress);
		void _ctor();
	};
}

