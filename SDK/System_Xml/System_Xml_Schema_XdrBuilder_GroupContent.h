#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XdrBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XdrBuilder; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder_GroupContent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t _MinVal;
		uint32_t _MaxVal;
		bool _HasMaxAttr;
		bool _HasMinAttr;
		int32_t _Order;
		static void Copy(System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* from, System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* to);
		static System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* Copy(System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* other);
		void _ctor();
	};
}

