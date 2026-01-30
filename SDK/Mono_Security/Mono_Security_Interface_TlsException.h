#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Exception.h"
namespace Mono_Security::Mono::Security::Interface { struct Alert; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Mono_Security_Interface_AlertDescription.h"

namespace Mono_Security::Mono::Security::Interface
{
	struct TlsException : mscorlib::System::Exception
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::Alert* alert;
		void _ctor(Mono_Security::Mono::Security::Interface::Alert* alert, mscorlib::System::String* message);
		void _ctor(Mono_Security::Mono::Security::Interface::AlertDescription description, mscorlib::System::String* message);
	};
}

