#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Base64Encoder.h"
namespace System_Xml::System::Xml { struct XmlTextEncoder; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct XmlTextWriterBase64Encoder : System_Xml::System::Xml::Base64Encoder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlTextEncoder* xmlTextEncoder;
		void _ctor(System_Xml::System::Xml::XmlTextEncoder* xmlTextEncoder);
		void WriteChars(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
	};
}

