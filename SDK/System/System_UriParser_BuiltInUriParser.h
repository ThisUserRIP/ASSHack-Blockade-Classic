#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_UriParser.h"
namespace System::System { struct UriParser; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UriSyntaxFlags.h"

namespace System::System
{
	struct UriParser_BuiltInUriParser : System::UriParser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* lwrCaseScheme, int32_t defaultPort, System::UriSyntaxFlags syntaxFlags);
	};
}

