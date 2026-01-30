#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWellFormedWriter.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlSpace.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlRawWriter; };

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter_ElementScope
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t prevNSTop;
		mscorlib::System::String* prefix;
		mscorlib::System::String* localName;
		mscorlib::System::String* namespaceUri;
		System_Xml::System::Xml::XmlSpace xmlSpace;
		mscorlib::System::String* xmlLang;
		void Set(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceUri, int32_t prevNSTop);
		void WriteEndElement(System_Xml::System::Xml::XmlRawWriter* rawWriter);
		void WriteFullEndElement(System_Xml::System::Xml::XmlRawWriter* rawWriter);
	};
}

