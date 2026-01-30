#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "Rewired_Platforms_Platform.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Interfaces
{
	struct IExternalInputManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* Initialize(Rewired_Core::Rewired::Platforms::Platform platform, mscorlib::System::Object* configVars);
		void Deinitialize();
	};
}

