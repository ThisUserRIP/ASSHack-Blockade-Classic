#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Demos_SimpleCombinedKeyboardMouseRemapping.h"
namespace Assembly_CSharp::Rewired::Demos { struct SimpleCombinedKeyboardMouseRemapping; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct SimpleCombinedKeyboardMouseRemapping_TargetMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerMap* controllerMap;
		int32_t actionElementMapId;
	};
}

