#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_UIElementInfo.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\Rewired_Core\Rewired_ControllerType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct InputFieldInfo : Assembly_CSharp::Rewired::UI::ControlMapper::UIElementInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _actionId_k__BackingField;
		Rewired_Core::Rewired::AxisRange _axisRange_k__BackingField;
		int32_t _actionElementMapId_k__BackingField;
		Rewired_Core::Rewired::ControllerType _controllerType_k__BackingField;
		int32_t _controllerId_k__BackingField;
		int32_t get_actionId();
		void set_actionId(int32_t value);
		Rewired_Core::Rewired::AxisRange get_axisRange();
		void set_axisRange(Rewired_Core::Rewired::AxisRange value);
		int32_t get_actionElementMapId();
		void set_actionElementMapId(int32_t value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		void _ctor();
	};
}

