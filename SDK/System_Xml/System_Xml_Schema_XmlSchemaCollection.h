#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace mscorlib::System::Threading { struct ReaderWriterLock; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollectionEnumerator; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollectionNode; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* collection;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::Schema::SchemaNames* schemaNames;
		mscorlib::System::Threading::ReaderWriterLock* wLock;
		int32_t timeout;
		bool isThreadSafe;
		System_Xml::System::Xml::Schema::ValidationEventHandler* validationEventHandler;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		void _ctor(System_Xml::System::Xml::XmlNameTable* nametable);
		int32_t get_Count();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		System_Xml::System::Xml::Schema::XmlSchema* get_Item(mscorlib::System::String* ns);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		System_Xml::System::Xml::Schema::XmlSchemaCollectionEnumerator* GetEnumerator();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		int32_t System_Collections_ICollection_get_Count();
		System_Xml::System::Xml::Schema::SchemaInfo* GetSchemaInfo(mscorlib::System::String* ns);
		System_Xml::System::Xml::Schema::SchemaNames* GetSchemaNames(System_Xml::System::Xml::XmlNameTable* nt);
		System_Xml::System::Xml::Schema::XmlSchema* Add(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, System_Xml::System::Xml::Schema::XmlSchema* schema, bool compile);
		System_Xml::System::Xml::Schema::XmlSchema* Add(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, System_Xml::System::Xml::Schema::XmlSchema* schema, bool compile, System_Xml::System::Xml::XmlResolver* resolver);
		void Add(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::XmlSchemaCollectionNode* node);
		System_Xml::System::Xml::Schema::ValidationEventHandler* get_EventHandler();
		void set_EventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value);
	};
}

