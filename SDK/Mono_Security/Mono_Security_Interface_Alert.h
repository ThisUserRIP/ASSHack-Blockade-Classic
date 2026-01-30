#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_Interface_AlertLevel.h"
#include "Mono_Security_Interface_AlertDescription.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Mono_Security::Mono::Security::Interface
{
	struct Alert : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::AlertLevel level;
		Mono_Security::Mono::Security::Interface::AlertDescription description;
		Mono_Security::Mono::Security::Interface::AlertLevel get_Level();
		Mono_Security::Mono::Security::Interface::AlertDescription get_Description();
		void _ctor(Mono_Security::Mono::Security::Interface::AlertDescription description);
		void inferAlertLevel();
		mscorlib::System::String* ToString();
	};
}

