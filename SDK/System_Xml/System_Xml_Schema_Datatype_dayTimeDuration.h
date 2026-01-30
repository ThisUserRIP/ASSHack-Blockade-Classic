#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_duration.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_dayTimeDuration : System_Xml::System::Xml::Schema::Datatype_duration
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Exception* TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		void _ctor();
	};
}

