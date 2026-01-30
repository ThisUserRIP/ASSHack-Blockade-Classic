#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlMapping.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapping : System_Xml::System::Xml::Serialization::XmlMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* xmlType;
		mscorlib::System::String* xmlTypeNamespace;
		System_Xml::System::Xml::Serialization::TypeData* type;
		System_Xml::System::Xml::Serialization::XmlTypeMapping* baseMap;
		bool multiReferenceType;
		bool includeInSchema;
		bool isNullable;
		bool isAny;
		mscorlib::System::Collections::ArrayList* _derivedTypes;
		void _ctor(mscorlib::System::String* elementName, mscorlib::System::String* ns, System_Xml::System::Xml::Serialization::TypeData* typeData, mscorlib::System::String* xmlType, mscorlib::System::String* xmlTypeNamespace);
		mscorlib::System::String* get_TypeFullName();
		System_Xml::System::Xml::Serialization::TypeData* get_TypeData();
		mscorlib::System::String* get_XmlType();
		void set_XmlType(mscorlib::System::String* value);
		mscorlib::System::String* get_XmlTypeNamespace();
		void set_XmlTypeNamespace(mscorlib::System::String* value);
		bool get_HasXmlTypeNamespace();
		mscorlib::System::Collections::ArrayList* get_DerivedTypes();
		bool get_MultiReferenceType();
		System_Xml::System::Xml::Serialization::XmlTypeMapping* get_BaseMap();
		void set_BaseMap(System_Xml::System::Xml::Serialization::XmlTypeMapping* value);
		void set_IncludeInSchema(bool value);
		bool get_IsNullable();
		void set_IsNullable(bool value);
		bool get_IsAny();
		void set_IsAny(bool value);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* GetRealTypeMap(mscorlib::System::Type* objectType);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* GetRealElementMap(mscorlib::System::String* name, mscorlib::System::String* ens);
		void UpdateRoot(System_Xml::System::Xml::XmlQualifiedName* qname);
	};
}

