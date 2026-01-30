#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlMapping.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Serialization { struct XmlMemberMapping; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlMembersMapping : System_Xml::System::Xml::Serialization::XmlMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _hasWrapperElement;
		IL2CPP::Array<System_Xml::System::Xml::Serialization::XmlMemberMapping*>* _mapping;
		int32_t get_Count();
		bool get_HasWrapperElement();
	};
}

