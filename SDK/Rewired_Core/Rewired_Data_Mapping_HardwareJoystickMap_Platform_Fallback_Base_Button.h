#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Fallback_Base_Element.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Fallback_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Fallback_Base; };
#include "Rewired_Pole.h"
#include "Rewired_Platforms_UnityAxis.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Platforms_UnityButton.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Fallback_Base_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_Fallback_Base_Button : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Pole sourceAxisPole;
		Rewired_Core::Rewired::Platforms::UnityAxis unityHat_sourceAxis1;
		Rewired_Core::Rewired::Platforms::UnityAxis unityHat_sourceAxis2;
		UnityEngine_CoreModule::UnityEngine::Vector2 unityHat_isActiveAxisValues1;
		UnityEngine_CoreModule::UnityEngine::Vector2 unityHat_isActiveAxisValues2;
		UnityEngine_CoreModule::UnityEngine::Vector2 unityHat_isActiveAxisValues3;
		UnityEngine_CoreModule::UnityEngine::Vector2 unityHat_zeroValues;
		bool unityHat_checkNeverPressed;
		UnityEngine_CoreModule::UnityEngine::Vector2 unityHat_neverPressedZeroValues;
		bool requireMultipleButtons;
		IL2CPP::Array<Rewired_Core::Rewired::Platforms::UnityButton>* requiredButtons;
		bool ignoreIfButtonsActive;
		IL2CPP::Array<Rewired_Core::Rewired::Platforms::UnityButton>* ignoreIfButtonsActiveButtons;
		Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo;
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base_Element* destination);
		void _ctor();
	};
}

