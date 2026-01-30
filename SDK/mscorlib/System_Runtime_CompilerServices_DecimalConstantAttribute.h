#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct DecimalConstantAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Decimal dec;
		void _ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low);
		mscorlib::System::Decimal get_Value();
	};
}

