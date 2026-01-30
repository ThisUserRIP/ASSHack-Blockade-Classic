#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerTemplateElementType.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplateElementTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::IControllerTemplateElement* NckdGxstzbelEOVxraJjyUIjrbX;
		Rewired_Core::Rewired::AxisRange xRhTQhdaqIDbZIOJrcVaApoIXNhf;
		void _ctor(Rewired_Core::Rewired::IControllerTemplateElement* element, Rewired_Core::Rewired::AxisRange axisRange);
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementTarget other);
		Rewired_Core::Rewired::AxisRange get_axisRange();
		void set_axisRange(Rewired_Core::Rewired::AxisRange value);
		Rewired_Core::Rewired::ControllerTemplateElementType get_elementType();
		mscorlib::System::String* get_descriptiveName();
		Rewired_Core::Rewired::IControllerTemplateElement* get_element();
		void set_element(Rewired_Core::Rewired::IControllerTemplateElement* value);
		Rewired_Core::Rewired::IControllerTemplate* get_template();
		bool get_hasTarget();
	};
}

