#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Uri.h"
namespace mscorlib::Mono::Security { struct Uri; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security
{
	struct Uri_UriScheme
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* scheme;
		mscorlib::System::String* delimiter;
		int32_t defaultPort;
		void _ctor(mscorlib::System::String* s, mscorlib::System::String* d, int32_t p);
	};
}

