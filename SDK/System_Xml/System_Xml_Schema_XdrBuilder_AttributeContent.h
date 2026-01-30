#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XdrBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XdrBuilder; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder_AttributeContent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaAttDef* _AttDef;
		System_Xml::System::Xml::XmlQualifiedName* _Name;
		mscorlib::System::String* _Prefix;
		bool _Required;
		uint32_t _MinVal;
		uint32_t _MaxVal;
		uint32_t _MaxLength;
		uint32_t _MinLength;
		bool _EnumerationRequired;
		bool _HasDataType;
		bool _Global;
		mscorlib::System::Object* _Default;
		void _ctor();
	};
}

