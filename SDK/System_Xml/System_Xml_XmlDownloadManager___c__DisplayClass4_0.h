#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlDownloadManager.h"
namespace System_Xml::System::Xml { struct XmlDownloadManager; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace System_Xml::System::Xml
{
	struct XmlDownloadManager___c__DisplayClass4_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* uri;
		void _ctor();
		mscorlib::System::IO::Stream* _GetStreamAsync_b__0();
	};
}

