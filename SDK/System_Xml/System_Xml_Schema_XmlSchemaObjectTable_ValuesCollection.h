#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XmlSchemaObjectTable.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
#include "System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable_XmlSchemaObjectEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaObjectTable_ValuesCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries;
		int32_t size;
		void _ctor(mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size);
		int32_t get_Count();
		mscorlib::System::Object* get_SyncRoot();
		bool get_IsSynchronized();
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
	};
}

