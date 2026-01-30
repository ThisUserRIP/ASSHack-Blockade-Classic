#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct BitConverter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool IsLittleEndian;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool AmILittleEndian();
		static IL2CPP::Array<uint8_t>* GetBytes(int16_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(int32_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(int64_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(uint16_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(uint64_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(float value);
		static int16_t ToInt16(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static int32_t ToInt32(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static int64_t ToInt64(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static uint16_t ToUInt16(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static uint32_t ToUInt32(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static uint64_t ToUInt64(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static float ToSingle(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static wchar_t GetHexValue(int32_t i);
		static mscorlib::System::String* ToString(IL2CPP::Array<uint8_t>* value, int32_t startIndex, int32_t length);
		static mscorlib::System::String* ToString(IL2CPP::Array<uint8_t>* value);
		static int64_t DoubleToInt64Bits(double value);
		static double Int64BitsToDouble(int64_t value);
		static void _cctor();
	};
}

