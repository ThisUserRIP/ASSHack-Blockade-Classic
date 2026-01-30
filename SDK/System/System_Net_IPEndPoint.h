#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_EndPoint.h"
namespace System::System::Net { struct IPAddress; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Net_Sockets_AddressFamily.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct SocketAddress; };
namespace System::System::Net { struct EndPoint; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net
{
	struct IPEndPoint : System::Net::EndPoint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::IPAddress* m_Address;
		int32_t m_Port;
		struct StaticFields
		{
			System::Net::IPEndPoint* Any;
			System::Net::IPEndPoint* IPv6Any;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::Net::Sockets::AddressFamily get_AddressFamily();
		void _ctor(System::Net::IPAddress* address, int32_t port);
		System::Net::IPAddress* get_Address();
		int32_t get_Port();
		mscorlib::System::String* ToString();
		System::Net::SocketAddress* Serialize();
		System::Net::EndPoint* Create(System::Net::SocketAddress* socketAddress);
		bool Equals(mscorlib::System::Object* comparand);
		int32_t GetHashCode();
		static void _cctor();
	};
}

