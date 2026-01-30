#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_NamespaceList.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml::Schema
{
	struct NamespaceListV1Compat : System_Xml::System::Xml::Schema::NamespaceList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* namespaces, mscorlib::System::String* targetNamespace);
		bool Allows(mscorlib::System::String* ns);
	};
}

