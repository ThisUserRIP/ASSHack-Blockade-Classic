#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_FacetType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaFacet : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* value;
		bool isFixed;
		System_Xml::System::Xml::Schema::FacetType facetType;
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		bool get_IsFixed();
		void set_IsFixed(bool value);
		System_Xml::System::Xml::Schema::FacetType get_FacetType();
		void set_FacetType(System_Xml::System::Xml::Schema::FacetType value);
		void _ctor();
	};
}

