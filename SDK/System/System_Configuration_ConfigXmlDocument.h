#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Xml\System_Xml_XmlDocument.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlTextReader; };

namespace System::System::Configuration
{
	struct ConfigXmlDocument : System_Xml::System::Xml::XmlDocument
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_Filename();
		int32_t get_LineNumber();
		mscorlib::System::String* System_Configuration_Internal_IConfigErrorInfo_get_Filename();
		int32_t System_Configuration_Internal_IConfigErrorInfo_get_LineNumber();
		void LoadSingleElement(mscorlib::System::String* filename, System_Xml::System::Xml::XmlTextReader* sourceReader);
	};
}

