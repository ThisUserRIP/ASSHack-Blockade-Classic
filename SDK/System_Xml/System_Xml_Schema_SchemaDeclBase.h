#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_SchemaDeclBase_Use.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaDeclBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* name;
		mscorlib::System::String* prefix;
		bool isDeclaredInExternal;
		System_Xml::System::Xml::Schema::SchemaDeclBase_Use presence;
		System_Xml::System::Xml::Schema::XmlSchemaType* schemaType;
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype;
		mscorlib::System::String* defaultValueRaw;
		mscorlib::System::Object* defaultValueTyped;
		int64_t maxLength;
		int64_t minLength;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* values;
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::String* prefix);
		void _ctor();
		System_Xml::System::Xml::XmlQualifiedName* get_Name();
		void set_Name(System_Xml::System::Xml::XmlQualifiedName* value);
		mscorlib::System::String* get_Prefix();
		void set_Prefix(mscorlib::System::String* value);
		bool get_IsDeclaredInExternal();
		void set_IsDeclaredInExternal(bool value);
		System_Xml::System::Xml::Schema::SchemaDeclBase_Use get_Presence();
		void set_Presence(System_Xml::System::Xml::Schema::SchemaDeclBase_Use value);
		int64_t get_MaxLength();
		void set_MaxLength(int64_t value);
		int64_t get_MinLength();
		void set_MinLength(int64_t value);
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		void set_SchemaType(System_Xml::System::Xml::Schema::XmlSchemaType* value);
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();
		void set_Datatype(System_Xml::System::Xml::Schema::XmlSchemaDatatype* value);
		void AddValue(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_Values();
		void set_Values(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		mscorlib::System::String* get_DefaultValueRaw();
		void set_DefaultValueRaw(mscorlib::System::String* value);
		mscorlib::System::Object* get_DefaultValueTyped();
		void set_DefaultValueTyped(mscorlib::System::Object* value);
		bool CheckEnumeration(mscorlib::System::Object* pVal);
		bool CheckValue(mscorlib::System::Object* pVal);
	};
}

