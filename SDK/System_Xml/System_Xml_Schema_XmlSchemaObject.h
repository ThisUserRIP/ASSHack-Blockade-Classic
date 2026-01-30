#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializerNamespaces; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t lineNum;
		int32_t linePos;
		mscorlib::System::String* sourceUri;
		System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* namespaces;
		System_Xml::System::Xml::Schema::XmlSchemaObject* parent;
		bool isProcessing;
		int32_t get_LineNumber();
		void set_LineNumber(int32_t value);
		int32_t get_LinePosition();
		void set_LinePosition(int32_t value);
		mscorlib::System::String* get_SourceUri();
		void set_SourceUri(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* get_Parent();
		void set_Parent(System_Xml::System::Xml::Schema::XmlSchemaObject* value);
		System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* get_Namespaces();
		void set_Namespaces(System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* value);
		void OnAdd(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* container, mscorlib::System::Object* item);
		void OnRemove(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* container, mscorlib::System::Object* item);
		void OnClear(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* container);
		mscorlib::System::String* get_IdAttribute();
		void set_IdAttribute(mscorlib::System::String* value);
		void SetUnhandledAttributes(IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes);
		void AddAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		bool get_IsProcessing();
		void set_IsProcessing(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		void _ctor();
	};
}

