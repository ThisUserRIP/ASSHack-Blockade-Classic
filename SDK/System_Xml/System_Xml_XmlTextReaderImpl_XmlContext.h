#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "System_Xml_XmlSpace.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_XmlContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlSpace xmlSpace;
		mscorlib::System::String* xmlLang;
		mscorlib::System::String* defaultNamespace;
		System_Xml::System::Xml::XmlTextReaderImpl_XmlContext* previousContext;
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlTextReaderImpl_XmlContext* previousContext);
	};
}

