#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_FacetsChecker.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };

namespace System_Xml::System::Xml::Schema
{
	struct Numeric10FacetsChecker : System_Xml::System::Xml::Schema::FacetsChecker
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Decimal maxValue;
		mscorlib::System::Decimal minValue;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* signs;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Decimal minVal, mscorlib::System::Decimal maxVal);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::Decimal value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(int64_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(int32_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(int16_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool MatchEnumeration(mscorlib::System::Object* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool MatchEnumeration(mscorlib::System::Decimal value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlValueConverter* valueConverter);
		mscorlib::System::Exception* CheckTotalAndFractionDigits(mscorlib::System::Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction);
		static void _cctor();
	};
}

