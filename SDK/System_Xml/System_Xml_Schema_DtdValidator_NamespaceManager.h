#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamespaceManager.h"
#include "System_Xml_Schema_DtdValidator.h"
namespace System_Xml::System::Xml::Schema { struct DtdValidator; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct DtdValidator_NamespaceManager : System_Xml::System::Xml::XmlNamespaceManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		void _ctor();
	};
}

