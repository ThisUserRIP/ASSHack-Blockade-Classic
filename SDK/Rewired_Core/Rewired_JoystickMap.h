#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMapWithAxes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired
{
	struct JoystickMap : Rewired_Core::Rewired::ControllerMapWithAxes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::JoystickMap* joystickMap);
		void SetIdentity(mscorlib::System::Guid hardwareGuid, int32_t categoryId, int32_t layoutId);
		static Rewired_Core::Rewired::JoystickMap* Blank(mscorlib::System::Guid hardwareGuid, int32_t categoryId, int32_t layoutId);
	};
}

