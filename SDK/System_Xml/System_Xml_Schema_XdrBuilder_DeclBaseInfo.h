#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XdrBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XdrBuilder; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder_DeclBaseInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* _Name;
		mscorlib::System::String* _Prefix;
		System_Xml::System::Xml::XmlQualifiedName* _TypeName;
		mscorlib::System::String* _TypePrefix;
		mscorlib::System::Object* _Default;
		mscorlib::System::Object* _Revises;
		uint32_t _MaxOccurs;
		uint32_t _MinOccurs;
		bool _Checking;
		System_Xml::System::Xml::Schema::SchemaElementDecl* _ElementDecl;
		System_Xml::System::Xml::Schema::SchemaAttDef* _Attdef;
		System_Xml::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _Next;
		void _ctor();
		void Reset();
	};
}

