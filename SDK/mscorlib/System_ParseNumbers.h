#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Byte.h"

namespace mscorlib::System
{
	struct ParseNumbers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t StringToInt(mscorlib::System::String* value, int32_t fromBase, int32_t flags);
		static int32_t StringToInt(mscorlib::System::String* value, int32_t fromBase, int32_t flags, int32_t* parsePos);
		static mscorlib::System::String* LongToString(int64_t value, int32_t toBase, int32_t width, wchar_t paddingChar, int32_t flags);
		static int64_t StringToLong(mscorlib::System::String* value, int32_t fromBase, int32_t flags);
		static int64_t StringToLong(mscorlib::System::String* value, int32_t fromBase, int32_t flags, int32_t* parsePos);
		static mscorlib::System::String* IntToString(int32_t value, int32_t toBase, int32_t width, wchar_t paddingChar, int32_t flags);
		static void EndianSwap(IL2CPP::Array<uint8_t>& value);
		static mscorlib::System::Text::StringBuilder* ConvertToBase2(IL2CPP::Array<uint8_t>* value);
		static mscorlib::System::Text::StringBuilder* ConvertToBase8(IL2CPP::Array<uint8_t>* value);
		static mscorlib::System::Text::StringBuilder* ConvertToBase16(IL2CPP::Array<uint8_t>* value);
	};
}

