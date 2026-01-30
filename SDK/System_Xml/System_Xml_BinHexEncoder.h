#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System_Xml::System::Xml
{
	struct BinHexEncoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Encode(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, System_Xml::System::Xml::XmlWriter* writer);
		static mscorlib::System::String* Encode(IL2CPP::Array<uint8_t>* inArray, int32_t offsetIn, int32_t count);
		static int32_t Encode(IL2CPP::Array<uint8_t>* inArray, int32_t offsetIn, int32_t count, IL2CPP::Array<wchar_t>* outArray);
	};
}

