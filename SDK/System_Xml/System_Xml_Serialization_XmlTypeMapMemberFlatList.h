#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlTypeMapMemberExpandable.h"
namespace System_Xml::System::Xml::Serialization { struct ListMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapMemberFlatList : System_Xml::System::Xml::Serialization::XmlTypeMapMemberExpandable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::ListMap* _listMap;
		System_Xml::System::Xml::Serialization::ListMap* get_ListMap();
		void set_ListMap(System_Xml::System::Xml::Serialization::ListMap* value);
		void _ctor();
	};
}

