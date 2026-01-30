#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "System_Net_Sockets_AddressFamily.h"
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net
{
	struct IPAddress : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t m_Address;
		mscorlib::System::String* m_ToString;
		System::Net::Sockets::AddressFamily m_Family;
		IL2CPP::Array<uint16_t>* m_Numbers;
		int64_t m_ScopeId;
		int32_t m_HashCode;
		struct StaticFields
		{
			System::Net::IPAddress* Any;
			System::Net::IPAddress* Loopback;
			System::Net::IPAddress* Broadcast;
			System::Net::IPAddress* None;
			int64_t LoopbackMask;
			System::Net::IPAddress* IPv6Any;
			System::Net::IPAddress* IPv6Loopback;
			System::Net::IPAddress* IPv6None;
			int32_t IPv4AddressBytes;
			int32_t IPv6AddressBytes;
			int32_t NumberOfLabels;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int64_t newAddress);
		void _ctor(IL2CPP::Array<uint8_t>* address, int64_t scopeid);
		void _ctor(IL2CPP::Array<uint16_t>* address, uint32_t scopeid);
		void _ctor(int32_t newAddress);
		static bool TryParse(mscorlib::System::String* ipString, System::Net::IPAddress& address);
		static System::Net::IPAddress* Parse(mscorlib::System::String* ipString);
		static System::Net::IPAddress* InternalParse(mscorlib::System::String* ipString, bool tryParse);
		IL2CPP::Array<uint8_t>* GetAddressBytes();
		System::Net::Sockets::AddressFamily get_AddressFamily();
		int64_t get_ScopeId();
		mscorlib::System::String* ToString();
		static bool IsLoopback(System::Net::IPAddress* address);
		bool Equals(mscorlib::System::Object* comparandObj, bool compareScopeId);
		bool Equals(mscorlib::System::Object* comparand);
		int32_t GetHashCode();
		System::Net::IPAddress* MapToIPv6();
		static void _cctor();
	};
}

