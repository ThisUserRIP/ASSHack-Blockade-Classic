#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributeOverrides; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Serialization { struct ReflectionHelper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
namespace System_Xml::System::Xml::Serialization { struct XmlRootAttribute; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributes; };
namespace System_Xml::System::Xml::Serialization { struct XmlReflectionMember; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMember; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfoList; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberElement; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlReflectionImporter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* initialDefaultNamespace;
		System_Xml::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides;
		mscorlib::System::Collections::ArrayList* includedTypes;
		System_Xml::System::Xml::Serialization::ReflectionHelper* helper;
		int32_t arrayChoiceCount;
		mscorlib::System::Collections::ArrayList* relatedMaps;
		bool allowPrivateTypes;
		struct StaticFields
		{
			mscorlib::System::String* errSimple;
			mscorlib::System::String* errSimple2;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(mscorlib::System::Type* type);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(mscorlib::System::Type* type, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* CreateTypeMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultXmlType, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, bool isBaseType);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, bool isBaseType);
		void RegisterDerivedMap(System_Xml::System::Xml::Serialization::XmlTypeMapping* map, System_Xml::System::Xml::Serialization::XmlTypeMapping* derivedMap);
		mscorlib::System::String* GetTypeNamespace(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, System_Xml::System::Xml::Serialization::XmlAttributes* atts, int32_t nestingLevel);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, System_Xml::System::Xml::Serialization::XmlAttributes* atts, int32_t nestingLevel);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportXmlNodeMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportPrimitiveMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportEnumMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* ImportXmlSerializableMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		void ImportIncludedTypes(mscorlib::System::Type* type, mscorlib::System::String* defaultNamespace);
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Serialization::XmlReflectionMember>* GetReflectionMembers(mscorlib::System::Type* type);
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* CreateMapMember(mscorlib::System::Type* declaringType, System_Xml::System::Xml::Serialization::XmlReflectionMember* rmember, mscorlib::System::String* defaultNamespace);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportElementInfo(mscorlib::System::Type* cls, mscorlib::System::String* defaultName, mscorlib::System::String* defaultNamespace, mscorlib::System::Type* defaultType, System_Xml::System::Xml::Serialization::XmlTypeMapMemberElement* member, System_Xml::System::Xml::Serialization::XmlAttributes* atts);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportAnyElementInfo(mscorlib::System::String* defaultNamespace, System_Xml::System::Xml::Serialization::XmlReflectionMember* rmember, System_Xml::System::Xml::Serialization::XmlTypeMapMemberElement* member, System_Xml::System::Xml::Serialization::XmlAttributes* atts);
		void ImportTextElementInfo(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* list, mscorlib::System::Type* defaultType, System_Xml::System::Xml::Serialization::XmlTypeMapMemberElement* member, System_Xml::System::Xml::Serialization::XmlAttributes* atts, mscorlib::System::String* defaultNamespace);
		bool CanBeNull(System_Xml::System::Xml::Serialization::TypeData* type);
		void IncludeType(mscorlib::System::Type* type);
		mscorlib::System::Object* GetDefaultValue(System_Xml::System::Xml::Serialization::TypeData* typeData, mscorlib::System::Object* defaultValue);
		static void _cctor();
	};
}

