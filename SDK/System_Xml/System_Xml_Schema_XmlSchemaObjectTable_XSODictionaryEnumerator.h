#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator.h"
#include "System_Xml_Schema_XmlSchemaObjectTable.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable_XmlSchemaObjectEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_XmlSchemaObjectTable_EnumeratorType.h"
#include "..\mscorlib\System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaObjectTable_XSODictionaryEnumerator : System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size, System_Xml::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType);
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Value();
	};
}

