#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_FacetsChecker.h"
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct StringFacetsChecker : System_Xml::System::Xml::Schema::FacetsChecker
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::System::Text::RegularExpressions::Regex* languagePattern;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::System::Text::RegularExpressions::Regex* get_LanguagePattern();
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::String* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::String* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype, bool verifyUri);
		bool MatchEnumeration(mscorlib::System::Object* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool MatchEnumeration(mscorlib::System::String* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckBuiltInFacets(mscorlib::System::String* s, System_Xml::System::Xml::Schema::XmlTypeCode typeCode, bool verifyUri);
		void _ctor();
	};
}

