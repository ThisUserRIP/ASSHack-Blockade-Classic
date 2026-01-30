#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlTextWriter.h"
namespace System_Xml::System::Xml { struct XmlTextWriter; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlTextWriter_NamespaceState.h"
#include "System_Xml_XmlSpace.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlTextWriter_TagInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* prefix;
		mscorlib::System::String* defaultNs;
		System_Xml::System::Xml::XmlTextWriter_NamespaceState defaultNsState;
		System_Xml::System::Xml::XmlSpace xmlSpace;
		mscorlib::System::String* xmlLang;
		int32_t prevNsTop;
		int32_t prefixCount;
		bool mixed;
		void Init(int32_t nsTop);
	};
}

