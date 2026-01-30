#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamespaceManager.h"
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlNamespaceManager_NamespaceDeclaration
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* prefix;
		mscorlib::System::String* uri;
		int32_t scopeId;
		int32_t previousNsIndex;
		void Set(mscorlib::System::String* prefix, mscorlib::System::String* uri, int32_t scopeId, int32_t previousNsIndex);
	};
}

