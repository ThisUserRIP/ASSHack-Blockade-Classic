#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Uri.h"
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "System_Uri_Offset.h"
namespace System::System { struct Uri_Offset; };
namespace System::System { struct Uri_MoreInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System
{
	struct Uri_UriInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Host;
		mscorlib::System::String* ScopeId;
		mscorlib::System::String* String;
		System::Uri_Offset Offset;
		mscorlib::System::String* DnsSafeHost;
		System::Uri_MoreInfo* MoreInfo;
		void _ctor();
	};
}

