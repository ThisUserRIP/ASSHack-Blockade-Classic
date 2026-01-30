#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_OSX_Base_MatchingCriteria; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_OSX_Base_Elements; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_InputPlatform.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_OSX_Base_Button; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_OSX_Base_Axis; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Elements_Base; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "Rewired_ControllerElementType.h"
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_OSX_Base : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX_Base_MatchingCriteria* matchingCriteria;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX_Base_Elements* elements;
		int32_t get_assignedButtonCount();
		int32_t get_assignedAxisCount();
		Rewired_Core::Rewired::InputPlatform get_platform();
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX_Base_Button*>* get_Buttons_orig();
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX_Base_Axis*>* get_Axes_orig();
		bool get_hasData();
		bool get_disabled();
		bool get_isAllowed();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* get_elements_base();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform>* get_variants_base();
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* BridgedControllerHWInfo, bool strictMatch, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX_Base_Axis>* IterateAxes();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX_Base_Button>* IterateButtons();
		IL2CPP::Array<mscorlib::System::String*>* GetAxisNames(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* identifiers);
		IL2CPP::Array<mscorlib::System::String*>* GetEffectiveButtonNames(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* identifiers);
		bool IsElementIdentifierMapped(int32_t elementIdentifierId);
		void GetGameElementIdentifierIdMappings(IL2CPP::Array<int32_t>& buttons, IL2CPP::Array<int32_t>& axes);
		IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* GetAxisCalibrationData();
		void GetAxisData(IL2CPP::Array<Rewired_Core::Rewired::AxisRange>& axisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>& axisInfos);
		void GetButtonData(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>& buttonInfos);
		Rewired_Core::Rewired::ControllerElementType GetEffectiveElementIdentifierType(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier);
		bool GetEffectiveAxisRange(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier, Rewired_Core::Rewired::AxisRange& axisRange);
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* destination);
		void _ctor();
	};
}

