#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_ConfigVars_PlatformVars.h"
#include "Rewired_Data_ConfigVars.h"
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct ConfigVars_PlatformVars_WindowsStandalone : Rewired_Core::Rewired::Data::ConfigVars_PlatformVars
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useNativeKeyboard;
		int32_t joystickRefreshRate;
		void _ctor();
	};
}

