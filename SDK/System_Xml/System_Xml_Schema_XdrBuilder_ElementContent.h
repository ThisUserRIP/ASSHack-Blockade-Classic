#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XdrBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XdrBuilder; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder_ElementContent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaElementDecl* _ElementDecl;
		int32_t _ContentAttr;
		int32_t _OrderAttr;
		bool _MasterGroupRequired;
		bool _ExistTerminal;
		bool _AllowDataType;
		bool _HasDataType;
		bool _HasType;
		bool _EnumerationRequired;
		uint32_t _MinVal;
		uint32_t _MaxVal;
		uint32_t _MaxLength;
		uint32_t _MinLength;
		mscorlib::System::Collections::Hashtable* _AttDefList;
		void _ctor();
	};
}

