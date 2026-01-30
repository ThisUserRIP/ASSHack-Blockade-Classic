#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlAsyncCheckReader.h"
namespace System_Xml::System::Xml { struct IXmlLineInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct XmlAsyncCheckReaderWithLineInfo : System_Xml::System::Xml::XmlAsyncCheckReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::IXmlLineInfo* readerAsIXmlLineInfo;
		void _ctor(System_Xml::System::Xml::XmlReader* reader);
		int32_t get_LineNumber();
		int32_t get_LinePosition();
	};
}

