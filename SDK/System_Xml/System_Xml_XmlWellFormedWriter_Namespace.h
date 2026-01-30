#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWellFormedWriter.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlWellFormedWriter_NamespaceKind.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace System_Xml::System::Xml { struct XmlRawWriter; };

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter_Namespace
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* prefix;
		mscorlib::System::String* namespaceUri;
		System_Xml::System::Xml::XmlWellFormedWriter_NamespaceKind kind;
		int32_t prevNsIndex;
		void Set(mscorlib::System::String* prefix, mscorlib::System::String* namespaceUri, System_Xml::System::Xml::XmlWellFormedWriter_NamespaceKind kind);
		void WriteDecl(System_Xml::System::Xml::XmlWriter* writer, System_Xml::System::Xml::XmlRawWriter* rawWriter);
	};
}

