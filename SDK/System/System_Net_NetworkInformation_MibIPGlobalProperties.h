#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_NetworkInformation_UnixIPGlobalProperties.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::NetworkInformation
{
	struct MibIPGlobalProperties : System::Net::NetworkInformation::UnixIPGlobalProperties
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* StatisticsFile;
		mscorlib::System::String* StatisticsFileIPv6;
		mscorlib::System::String* TcpFile;
		mscorlib::System::String* Tcp6File;
		mscorlib::System::String* UdpFile;
		mscorlib::System::String* Udp6File;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* wsChars;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* procDir);
		static void _cctor();
	};
}

