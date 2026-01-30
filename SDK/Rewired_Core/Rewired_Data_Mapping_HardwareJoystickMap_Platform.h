#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
namespace mscorlib::System { struct String; };
#include "Rewired_InputPlatform.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Elements_Base; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "Rewired_ControllerElementType.h"
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
#include "Rewired_InputSource.h"
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* description;
		Rewired_Core::Rewired::InputPlatform get_platform();
		int32_t get_assignedButtonCount();
		int32_t get_assignedAxisCount();
		mscorlib::System::String* get_controllerNameOverride();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* get_elements_base();
		bool get_isAllowed();
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* BridgedControllerHWInfo, bool strictMatch, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap);
		IL2CPP::Array<mscorlib::System::String*>* GetAxisNames(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* identifiers);
		IL2CPP::Array<mscorlib::System::String*>* GetEffectiveButtonNames(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* identifiers);
		void GetGameElementIdentifierIdMappings(IL2CPP::Array<int32_t>& buttons, IL2CPP::Array<int32_t>& axes);
		bool IsElementIdentifierMapped(int32_t elementIdentifierId);
		bool get_hasData();
		bool get_disabled();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform>* get_variants_base();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform>* get_Variants();
		bool get_hasVariants();
		int32_t get_variantCount();
		bool get_selfOrVariantHasData();
		bool get_selfOrVariantIsValid();
		bool get_selfOrVariantIsAllowed();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetFirstValidPlatformMap(int32_t& variantIndex);
		int32_t IndexOfElementIdentifier(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* elementIdentifiers, int32_t id);
		IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* GetAxisCalibrationData();
		void GetAxisData(IL2CPP::Array<Rewired_Core::Rewired::AxisRange>& axisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>& axisInfos);
		void GetButtonData(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>& buttonInfos);
		Rewired_Core::Rewired::ControllerElementType GetEffectiveElementIdentifierType(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier);
		bool GetEffectiveAxisRange(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier, Rewired_Core::Rewired::AxisRange& axisRange);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetPlatformMap(int32_t variantIndex);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* ToHardwareJoystickMap_InputManager(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* hardwareJoystickMap, Rewired_Core::Rewired::InputSource inputSource, Rewired_Core::Rewired::InputPlatform actualInputPlatform, int32_t variantIndex);
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* destination);
		void _ctor();
	};
}

