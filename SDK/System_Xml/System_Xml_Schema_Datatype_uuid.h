#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_anySimpleType.h"
#include "System_Xml_Schema_RestrictionFlags.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_uuid : System_Xml::System::Xml::Schema::Datatype_anySimpleType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Type* atomicValueType;
			mscorlib::System::Type* listValueType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Type* get_ValueType();
		mscorlib::System::Type* get_ListValueType();
		System_Xml::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
		int32_t Compare(mscorlib::System::Object* value1, mscorlib::System::Object* value2);
		mscorlib::System::Object* ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
		void _ctor();
		static void _cctor();
	};
}

