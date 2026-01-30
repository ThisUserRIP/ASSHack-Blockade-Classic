#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaExternal.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaImport : System_Xml::System::Xml::Schema::XmlSchemaExternal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ns;
		System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation;
		void _ctor();
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		void AddAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
	};
}

