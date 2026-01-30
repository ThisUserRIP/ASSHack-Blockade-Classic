#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct RestrictionFacets; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlNameTable; };

namespace System_Xml::System::Xml::Schema
{
	struct FacetsChecker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Exception* CheckLexicalFacets(mscorlib::System::String& parseString, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::Decimal value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(int64_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(int32_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(int16_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::DateTime value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(double value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(float value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::String* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(IL2CPP::Array<uint8_t>* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::TimeSpan value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(System_Xml::System::Xml::XmlQualifiedName* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		void CheckWhitespaceFacets(mscorlib::System::String& s, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckPatternFacets(System_Xml::System::Xml::Schema::RestrictionFacets* restriction, mscorlib::System::String* value);
		bool MatchEnumeration(mscorlib::System::Object* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		System_Xml::System::Xml::Schema::RestrictionFacets* ConstructRestriction(System_Xml::System::Xml::Schema::DatatypeImplementation* datatype, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* facets, System_Xml::System::Xml::XmlNameTable* nameTable);
		static mscorlib::System::Decimal Power(int32_t x, int32_t y);
		void _ctor();
	};
}

