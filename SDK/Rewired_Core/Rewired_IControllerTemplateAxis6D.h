#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateAxis6D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_position();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_positionPrev();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_rotation();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_rotationPrev();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_positionX();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_positionY();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_positionZ();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rotationX();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rotationY();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rotationZ();
	};
}

