#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_Xml_Schema_XmlSchemaParticle_Occurs.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaParticle : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Decimal minOccurs;
		mscorlib::System::Decimal maxOccurs;
		System_Xml::System::Xml::Schema::XmlSchemaParticle_Occurs flags;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlSchemaParticle* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_MinOccursString();
		void set_MinOccursString(mscorlib::System::String* value);
		mscorlib::System::String* get_MaxOccursString();
		void set_MaxOccursString(mscorlib::System::String* value);
		mscorlib::System::Decimal get_MinOccurs();
		void set_MinOccurs(mscorlib::System::Decimal value);
		mscorlib::System::Decimal get_MaxOccurs();
		void set_MaxOccurs(mscorlib::System::Decimal value);
		bool get_IsEmpty();
		mscorlib::System::String* get_NameString();
		System_Xml::System::Xml::XmlQualifiedName* GetQualifiedName();
		void _ctor();
		static void _cctor();
	};
}

