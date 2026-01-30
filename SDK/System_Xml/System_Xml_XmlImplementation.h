#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };

namespace System_Xml::System::Xml
{
	struct XmlImplementation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNameTable* nameTable;
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlNameTable* nt);
		System_Xml::System::Xml::XmlDocument* CreateDocument();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
	};
}

