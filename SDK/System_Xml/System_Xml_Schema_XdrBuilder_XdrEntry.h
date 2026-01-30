#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XdrBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XdrBuilder; };
#include "System_Xml_Schema_SchemaNames_Token.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrAttributeEntry; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrInitFunction; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrBeginChildFunction; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrEndChildFunction; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder_XdrEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaNames_Token _Name;
		IL2CPP::Array<int32_t>* _NextStates;
		IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* _Attributes;
		System_Xml::System::Xml::Schema::XdrBuilder_XdrInitFunction* _InitFunc;
		System_Xml::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* _BeginChildFunc;
		System_Xml::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* _EndChildFunc;
		bool _AllowText;
		void _ctor(System_Xml::System::Xml::Schema::SchemaNames_Token n, IL2CPP::Array<int32_t>* states, IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* attributes, System_Xml::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, System_Xml::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin, System_Xml::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, bool fText);
	};
}

