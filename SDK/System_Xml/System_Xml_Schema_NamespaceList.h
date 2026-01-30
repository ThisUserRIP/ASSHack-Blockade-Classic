#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_NamespaceList_ListType.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };

namespace System_Xml::System::Xml::Schema
{
	struct NamespaceList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::NamespaceList_ListType type;
		mscorlib::System::Collections::Hashtable* set;
		mscorlib::System::String* targetNamespace;
		void _ctor();
		void _ctor(mscorlib::System::String* namespaces, mscorlib::System::String* targetNamespace);
		System_Xml::System::Xml::Schema::NamespaceList* Clone();
		System_Xml::System::Xml::Schema::NamespaceList_ListType get_Type();
		mscorlib::System::String* get_Excluded();
		mscorlib::System::Collections::ICollection* get_Enumerate();
		bool Allows(mscorlib::System::String* ns);
		bool Allows(System_Xml::System::Xml::XmlQualifiedName* qname);
		mscorlib::System::String* ToString();
		static bool IsSubset(System_Xml::System::Xml::Schema::NamespaceList* sub, System_Xml::System::Xml::Schema::NamespaceList* super);
		static System_Xml::System::Xml::Schema::NamespaceList* Union(System_Xml::System::Xml::Schema::NamespaceList* o1, System_Xml::System::Xml::Schema::NamespaceList* o2, bool v1Compat);
		System_Xml::System::Xml::Schema::NamespaceList* CompareSetToOther(System_Xml::System::Xml::Schema::NamespaceList* other);
		static System_Xml::System::Xml::Schema::NamespaceList* Intersection(System_Xml::System::Xml::Schema::NamespaceList* o1, System_Xml::System::Xml::Schema::NamespaceList* o2, bool v1Compat);
		void RemoveNamespace(mscorlib::System::String* tns);
	};
}

