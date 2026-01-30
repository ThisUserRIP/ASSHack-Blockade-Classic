#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct IDtdAttributeListInfo; };
namespace System_Xml::System::Xml { struct IDtdEntityInfo; };

namespace System_Xml::System::Xml
{
	struct IDtdInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* get_Name();
		mscorlib::System::String* get_InternalDtdSubset();
		bool get_HasDefaultAttributes();
		bool get_HasNonCDataAttributes();
		System_Xml::System::Xml::IDtdAttributeListInfo* LookupAttributeList(mscorlib::System::String* prefix, mscorlib::System::String* localName);
		System_Xml::System::Xml::IDtdEntityInfo* LookupEntity(mscorlib::System::String* name);
	};
}

