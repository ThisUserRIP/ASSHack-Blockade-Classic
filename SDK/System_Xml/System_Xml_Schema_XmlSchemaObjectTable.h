#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable_XmlSchemaObjectEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaObjectTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::XmlSchemaObject>* table;
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries;
		void _ctor();
		void Add(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaObject* value);
		void Insert(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaObject* value);
		void Replace(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaObject* value);
		void Clear();
		void Remove(System_Xml::System::Xml::XmlQualifiedName* name);
		int32_t FindIndexByValue(System_Xml::System::Xml::Schema::XmlSchemaObject* xso);
		int32_t get_Count();
		bool Contains(System_Xml::System::Xml::XmlQualifiedName* name);
		System_Xml::System::Xml::Schema::XmlSchemaObject* get_Item(System_Xml::System::Xml::XmlQualifiedName* name);
		mscorlib::System::Collections::ICollection* get_Values();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
	};
}

