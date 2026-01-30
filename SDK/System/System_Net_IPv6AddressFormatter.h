#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System::System::Net
{
	struct IPv6AddressFormatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint16_t>* address;
		int64_t scopeId;
		void _ctor(IL2CPP::Array<uint16_t>* addr, int64_t scopeId);
		static uint16_t SwapUShort(uint16_t number);
		uint32_t AsIPv4Int();
		bool IsIPv4Compatible();
		bool IsIPv4Mapped();
		mscorlib::System::String* ToString();
	};
}

