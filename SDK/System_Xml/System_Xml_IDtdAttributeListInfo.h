#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct IDtdAttributeInfo; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct IDtdDefaultAttributeInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace System_Xml::System::Xml
{
	struct IDtdAttributeListInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_HasNonCDataAttributes();
		System_Xml::System::Xml::IDtdAttributeInfo* LookupAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName);
		mscorlib::System::Collections::Generic::IEnumerable_1<System_Xml::System::Xml::IDtdDefaultAttributeInfo>* LookupDefaultAttributes();
	};
}

