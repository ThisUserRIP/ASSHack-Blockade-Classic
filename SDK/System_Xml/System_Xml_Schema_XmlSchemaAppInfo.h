#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObject.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaAppInfo : System_Xml::System::Xml::Schema::XmlSchemaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* source;
		IL2CPP::Array<System_Xml::System::Xml::XmlNode*>* markup;
		void set_Source(mscorlib::System::String* value);
		void set_Markup(IL2CPP::Array<System_Xml::System::Xml::XmlNode*>* value);
		void _ctor();
	};
}

