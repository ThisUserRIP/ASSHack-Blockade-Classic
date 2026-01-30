#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlResolver; };

namespace System_Xml::System::Xml::XmlConfiguration
{
	struct XmlReaderSection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool get_ProhibitDefaultUrlResolver();
		static System_Xml::System::Xml::XmlResolver* CreateDefaultResolver();
		static bool get_CollapseWhiteSpaceIntoEmptyString();
	};
}

