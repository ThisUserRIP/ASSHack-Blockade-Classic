#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct TextReader; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct SharedUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t URShift(int32_t number, int32_t bits);
		static int32_t ReadInput(mscorlib::System::IO::TextReader* sourceTextReader, IL2CPP::Array<uint8_t>* target, int32_t start, int32_t count);
		static IL2CPP::Array<uint8_t>* ToByteArray(mscorlib::System::String* sourceString);
		static IL2CPP::Array<wchar_t>* ToCharArray(IL2CPP::Array<uint8_t>* byteArray);
		void _ctor();
	};
}

