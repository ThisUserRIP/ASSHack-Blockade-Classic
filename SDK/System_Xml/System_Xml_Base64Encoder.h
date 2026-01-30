#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct Base64Encoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* leftOverBytes;
		int32_t leftOverBytesCount;
		IL2CPP::Array<wchar_t>* charsLine;
		void _ctor();
		void WriteChars(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		void Encode(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void Flush();
	};
}

