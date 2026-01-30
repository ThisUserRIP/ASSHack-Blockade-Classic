#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XdrBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XdrBuilder; };
#include "System_Xml_Schema_SchemaNames_Token.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrBuildFunction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_XmlTokenizedType.h"

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder_XdrAttributeEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaNames_Token _Attribute;
		int32_t _SchemaFlags;
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* _Datatype;
		System_Xml::System::Xml::Schema::XdrBuilder_XdrBuildFunction* _BuildFunc;
		void _ctor(System_Xml::System::Xml::Schema::SchemaNames_Token a, System_Xml::System::Xml::XmlTokenizedType ttype, System_Xml::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build);
		void _ctor(System_Xml::System::Xml::Schema::SchemaNames_Token a, System_Xml::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags, System_Xml::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build);
	};
}

