#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_Sockets_AddressFamily.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct IPAddress; };
namespace System::System::Net { struct IPEndPoint; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System::System::Net
{
	struct SocketAddress : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Size;
		IL2CPP::Array<uint8_t>* m_Buffer;
		bool m_changed;
		int32_t m_hash;
		System::Net::Sockets::AddressFamily get_Family();
		int32_t get_Size();
		uint8_t get_Item(int32_t offset);
		void _ctor(System::Net::Sockets::AddressFamily family, int32_t size);
		void _ctor(System::Net::IPAddress* ipAddress);
		void _ctor(System::Net::IPAddress* ipaddress, int32_t port);
		System::Net::IPAddress* GetIPAddress();
		System::Net::IPEndPoint* GetIPEndPoint();
		bool Equals(mscorlib::System::Object* comparand);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
	};
}

