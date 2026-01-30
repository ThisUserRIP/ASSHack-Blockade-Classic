#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_ObjectMap.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberAnyElement; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberAnyAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberNamespaces; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMember; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberExpandable; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };

namespace System_Xml::System::Xml::Serialization
{
	struct ClassMap : System_Xml::System::Xml::Serialization::ObjectMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _elements;
		mscorlib::System::Collections::ArrayList* _elementMembers;
		mscorlib::System::Collections::Hashtable* _attributeMembers;
		IL2CPP::Array<System_Xml::System::Xml::Serialization::XmlTypeMapMemberAttribute*>* _attributeMembersArray;
		mscorlib::System::Collections::ArrayList* _flatLists;
		mscorlib::System::Collections::ArrayList* _allMembers;
		mscorlib::System::Collections::ArrayList* _membersWithDefault;
		mscorlib::System::Collections::ArrayList* _listMembers;
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberAnyElement* _defaultAnyElement;
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute;
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberNamespaces* _namespaceDeclarations;
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* _xmlTextCollector;
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* _returnMember;
		bool _ignoreMemberNamespace;
		bool _canBeSimpleType;
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> _isOrderDependentMap;
		void AddMember(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member);
		void RegisterFlatList(System_Xml::System::Xml::Serialization::XmlTypeMapMemberExpandable* member);
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberAttribute* GetAttribute(mscorlib::System::String* name, mscorlib::System::String* ns);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(mscorlib::System::String* name, mscorlib::System::String* ns, int32_t minimalOrder);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(mscorlib::System::String* name, mscorlib::System::String* ns);
		mscorlib::System::String* BuildKey(mscorlib::System::String* name, mscorlib::System::String* ns, int32_t explicitOrder);
		bool get_IsOrderDependentMap();
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberAnyElement* get_DefaultAnyElementMember();
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* get_DefaultAnyAttributeMember();
		System_Xml::System::Xml::Serialization::XmlTypeMapMemberNamespaces* get_NamespaceDeclarations();
		mscorlib::System::Collections::ICollection* get_AttributeMembers();
		mscorlib::System::Collections::ICollection* get_ElementMembers();
		mscorlib::System::Collections::ArrayList* get_AllMembers();
		mscorlib::System::Collections::ArrayList* get_FlatLists();
		mscorlib::System::Collections::ArrayList* get_ListMembers();
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* get_XmlTextCollector();
		System_Xml::System::Xml::Serialization::XmlTypeMapMember* get_ReturnMember();
		System_Xml::System::Xml::XmlQualifiedName* get_SimpleContentBaseType();
		void SetCanBeSimpleType(bool can);
		bool get_HasSimpleContent();
		void _ctor();
	};
}

