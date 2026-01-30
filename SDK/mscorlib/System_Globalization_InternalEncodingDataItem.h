#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace mscorlib::System::Globalization
{
	struct InternalEncodingDataItem
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* webName;
		uint16_t codePage;
	};
}

