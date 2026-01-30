#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct Controller_Element; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerElementType.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct Controller; };

namespace Rewired_Core::Rewired
{
	struct ControllerElementTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller_Element* NckdGxstzbelEOVxraJjyUIjrbX;
		Rewired_Core::Rewired::AxisRange xRhTQhdaqIDbZIOJrcVaApoIXNhf;
		void _ctor(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		void _ctor(Rewired_Core::Rewired::ControllerElementTarget other);
		void _ctor(Rewired_Core::Rewired::IControllerElementTarget* other);
		int32_t get_elementIdentifierId();
		Rewired_Core::Rewired::AxisRange get_axisRange();
		void set_axisRange(Rewired_Core::Rewired::AxisRange value);
		bool get_hasTarget();
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		mscorlib::System::String* get_descriptiveName();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::Controller_Element* get_element();
		void set_element(Rewired_Core::Rewired::Controller_Element* value);
		static Rewired_Core::Rewired::ControllerElementTarget op_Implicit(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
	};
}

