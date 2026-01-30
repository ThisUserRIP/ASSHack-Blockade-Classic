#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Mono_Security::Mono::Security
{
	struct BitConverterLE : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* GetUIntBytes(uint8_t* bytes);
		static IL2CPP::Array<uint8_t>* GetULongBytes(uint8_t* bytes);
		static IL2CPP::Array<uint8_t>* GetBytes(int32_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(int64_t value);
		static void UShortFromBytes(uint8_t* dst, IL2CPP::Array<uint8_t>* src, int32_t startIndex);
		static void UIntFromBytes(uint8_t* dst, IL2CPP::Array<uint8_t>* src, int32_t startIndex);
		static uint16_t ToUInt16(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static uint32_t ToUInt32(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
	};
}

