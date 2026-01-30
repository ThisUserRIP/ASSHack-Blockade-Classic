#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateThrottle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float get_value();
		float get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_throttle();
		Rewired_Core::Rewired::IControllerTemplateButton* get_minDetent();
	};
}

