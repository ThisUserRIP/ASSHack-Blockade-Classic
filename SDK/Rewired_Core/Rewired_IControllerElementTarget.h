#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerElementType.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct Controller_Element; };

namespace Rewired_Core::Rewired
{
	struct IControllerElementTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_elementIdentifierId();
		Rewired_Core::Rewired::AxisRange get_axisRange();
		bool get_hasTarget();
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		mscorlib::System::String* get_descriptiveName();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::Controller_Element* get_element();
	};
}

