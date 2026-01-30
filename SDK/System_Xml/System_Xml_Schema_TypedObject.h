#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct TypedObject_DecimalStruct; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct TypedObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::TypedObject_DecimalStruct* dstruct;
		mscorlib::System::Object* ovalue;
		mscorlib::System::String* svalue;
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* xsdtype;
		int32_t dim;
		bool isList;
		int32_t get_Dim();
		bool get_IsList();
		bool get_IsDecimal();
		IL2CPP::Array<mscorlib::System::Decimal>* get_Dvalue();
		mscorlib::System::Object* get_Value();
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* get_Type();
		void _ctor(mscorlib::System::Object* obj, mscorlib::System::String* svalue, System_Xml::System::Xml::Schema::XmlSchemaDatatype* xsdtype);
		mscorlib::System::String* ToString();
		void SetDecimal();
		bool ListDValueEquals(System_Xml::System::Xml::Schema::TypedObject* other);
		bool Equals(System_Xml::System::Xml::Schema::TypedObject* other);
	};
}

