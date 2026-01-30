#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml::Serialization
{
	struct IXmlSerializable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchema* GetSchema();
		void ReadXml(System_Xml::System::Xml::XmlReader* reader);
		void WriteXml(System_Xml::System::Xml::XmlWriter* writer);
	};
}

