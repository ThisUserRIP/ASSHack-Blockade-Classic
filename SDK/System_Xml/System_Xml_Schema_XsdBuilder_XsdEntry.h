#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XsdBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XsdBuilder; };
#include "System_Xml_Schema_SchemaNames_Token.h"
#include "System_Xml_Schema_XsdBuilder_State.h"
namespace System_Xml::System::Xml::Schema { struct XsdBuilder_XsdAttributeEntry; };
namespace System_Xml::System::Xml::Schema { struct XsdBuilder_XsdInitFunction; };
namespace System_Xml::System::Xml::Schema { struct XsdBuilder_XsdEndChildFunction; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdBuilder_XsdEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaNames_Token Name;
		System_Xml::System::Xml::Schema::XsdBuilder_State CurrentState;
		IL2CPP::Array<System_Xml::System::Xml::Schema::XsdBuilder_State>* NextStates;
		IL2CPP::Array<System_Xml::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>* Attributes;
		System_Xml::System::Xml::Schema::XsdBuilder_XsdInitFunction* InitFunc;
		System_Xml::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* EndChildFunc;
		bool ParseContent;
		void _ctor(System_Xml::System::Xml::Schema::SchemaNames_Token n, System_Xml::System::Xml::Schema::XsdBuilder_State state, IL2CPP::Array<System_Xml::System::Xml::Schema::XsdBuilder_State>* nextStates, IL2CPP::Array<System_Xml::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>* attributes, System_Xml::System::Xml::Schema::XsdBuilder_XsdInitFunction* init, System_Xml::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, bool parseContent);
	};
}

