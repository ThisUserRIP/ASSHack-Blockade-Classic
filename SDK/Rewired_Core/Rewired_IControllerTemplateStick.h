#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateStick
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_horizontal();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_vertical();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rotation();
	};
}

