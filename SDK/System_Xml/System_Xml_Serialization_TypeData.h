#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Serialization_SchemaTypes.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaPatternFacet; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System { struct InvalidOperationException; };

namespace System_Xml::System::Xml::Serialization
{
	struct TypeData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		mscorlib::System::String* elementName;
		System_Xml::System::Xml::Serialization::SchemaTypes sType;
		mscorlib::System::Type* listItemType;
		mscorlib::System::String* typeName;
		mscorlib::System::String* fullTypeName;
		System_Xml::System::Xml::Serialization::TypeData* listItemTypeData;
		System_Xml::System::Xml::Serialization::TypeData* mappedType;
		System_Xml::System::Xml::Schema::XmlSchemaPatternFacet* facet;
		mscorlib::System::Reflection::MethodInfo* typeConvertor;
		bool hasPublicConstructor;
		bool nullableOverride;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* keywords;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* elementName, bool isPrimitive);
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* elementName, bool isPrimitive, System_Xml::System::Xml::Serialization::TypeData* mappedType, System_Xml::System::Xml::Schema::XmlSchemaPatternFacet* facet);
		void LookupTypeConvertor();
		void ConvertForAssignment(mscorlib::System::Object& value);
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_XmlType();
		mscorlib::System::Type* get_Type();
		mscorlib::System::String* get_FullTypeName();
		System_Xml::System::Xml::Serialization::SchemaTypes get_SchemaType();
		bool get_IsListType();
		bool get_IsComplexType();
		bool get_IsValueType();
		bool get_IsNullable();
		void set_IsNullable(bool value);
		System_Xml::System::Xml::Serialization::TypeData* get_ListItemTypeData();
		mscorlib::System::Type* get_ListItemType();
		bool get_IsXsdType();
		bool get_HasPublicConstructor();
		static mscorlib::System::Reflection::PropertyInfo* GetIndexerProperty(mscorlib::System::Type* collectionType);
		static mscorlib::System::InvalidOperationException* CreateMissingAddMethodException(mscorlib::System::Type* type, mscorlib::System::String* inheritFrom, mscorlib::System::Type* argumentType);
		static mscorlib::System::Type* GetGenericListItemType(mscorlib::System::Type* type);
		static void _cctor();
	};
}

