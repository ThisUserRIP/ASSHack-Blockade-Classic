#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Uri.h"
namespace System::System { struct Uri; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace System::System
{
	struct Uri_Offset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t Scheme;
		uint16_t User;
		uint16_t Host;
		uint16_t PortValue;
		uint16_t Path;
		uint16_t Query;
		uint16_t Fragment;
		uint16_t End;
	};
}

