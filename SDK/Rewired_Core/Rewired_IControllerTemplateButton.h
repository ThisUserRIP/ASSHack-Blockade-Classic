#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButtonSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateButton
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_value();
		bool get_valuePrev();
		float get_pressure();
		float get_pressurePrev();
		bool get_justPressed();
		bool get_justReleased();
		bool get_justChangedState();
		Rewired_Core::Rewired::IControllerTemplateButtonSource* get_source();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_AsAxis();
	};
}

