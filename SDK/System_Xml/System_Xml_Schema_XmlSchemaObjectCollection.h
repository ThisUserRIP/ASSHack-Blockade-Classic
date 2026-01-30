#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_CollectionBase.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaObjectCollection : mscorlib::System::Collections::CollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaObject* parent;
		void _ctor();
		System_Xml::System::Xml::Schema::XmlSchemaObject* get_Item(int32_t index);
		void set_Item(int32_t index, System_Xml::System::Xml::Schema::XmlSchemaObject* value);
		int32_t Add(System_Xml::System::Xml::Schema::XmlSchemaObject* item);
		void Remove(System_Xml::System::Xml::Schema::XmlSchemaObject* item);
		void OnInsert(int32_t index, mscorlib::System::Object* item);
		void OnSet(int32_t index, mscorlib::System::Object* oldValue, mscorlib::System::Object* newValue);
		void OnClear();
		void OnRemove(int32_t index, mscorlib::System::Object* item);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* Clone();
		void Add(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* collToAdd);
	};
}

