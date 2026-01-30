#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWellFormedWriter.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter_AttrName
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* prefix;
		mscorlib::System::String* namespaceUri;
		mscorlib::System::String* localName;
		int32_t prev;
		void Set(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceUri);
		bool IsDuplicate(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceUri);
	};
}

