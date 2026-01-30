#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlTypeMapMemberExpandable.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapMemberAnyElement : System_Xml::System::Xml::Serialization::XmlTypeMapMemberExpandable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsElementDefined(mscorlib::System::String* name, mscorlib::System::String* ns);
		bool get_IsDefaultAny();
		void _ctor();
	};
}

