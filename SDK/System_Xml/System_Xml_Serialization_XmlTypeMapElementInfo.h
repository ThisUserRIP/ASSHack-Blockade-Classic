#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaForm.h"
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMember; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapElementInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _elementName;
		mscorlib::System::String* _namespace;
		System_Xml::System::Xml::Schema::XmlSchemaForm _form;
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* _member;
		mscorlib::System::Object* _choiceValue;
		bool _isNullable;
		int32_t _nestingLevel;
		System_Xml::System::Xml::Serialization::XmlTypeMapping* _mappedType;
		System_Xml::System::Xml::Serialization::TypeData* _type;
		bool _wrappedElement;
		int32_t _explicitOrder;
		void _ctor(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, System_Xml::System::Xml::Serialization::TypeData* type);
		System_Xml::System::Xml::Serialization::TypeData* get_TypeData();
		mscorlib::System::Object* get_ChoiceValue();
		void set_ChoiceValue(mscorlib::System::Object* value);
		mscorlib::System::String* get_ElementName();
		void set_ElementName(mscorlib::System::String* value);
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		mscorlib::System::String* get_DataTypeNamespace();
		mscorlib::System::String* get_DataTypeName();
		System_Xml::System::Xml::Schema::XmlSchemaForm get_Form();
		void set_Form(System_Xml::System::Xml::Schema::XmlSchemaForm value);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* get_MappedType();
		void set_MappedType(System_Xml::System::Xml::Serialization::XmlTypeMapping* value);
		bool get_IsNullable();
		void set_IsNullable(bool value);
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* get_Member();
		void set_NestingLevel(int32_t value);
		bool get_MultiReferenceType();
		bool get_WrappedElement();
		void set_WrappedElement(bool value);
		bool get_IsTextElement();
		void set_IsTextElement(bool value);
		bool get_IsUnnamedAnyElement();
		void set_IsUnnamedAnyElement(bool value);
		int32_t get_ExplicitOrder();
		void set_ExplicitOrder(int32_t value);
		bool Equals(mscorlib::System::Object* other);
		int32_t GetHashCode();
	};
}

