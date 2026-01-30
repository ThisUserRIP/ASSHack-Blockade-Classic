#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "Rewired_HardwareControllerMapIdentifier.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMapIdentifier; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct ADictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "Rewired_JoystickType.h"
#include "Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_CompoundElement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerElementType.h"

namespace Rewired_Core::Rewired
{
	struct HardwareControllerMap_Game : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* controllerName;
		Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier;
		int32_t customControllerSourceId;
		Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerElementIdentifier>* elementIdentifiers;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* elementIdentifiers_cache;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* buttonElementIdentifiers_cache;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* axisElementIdentifiers_cache;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* axis2DElementIdentifiers_cache;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hatElementIdentifiers_cache;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* elementIdentifiers_readOnly;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* buttonElementIdentifiers_readOnly;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* axisElementIdentifiers_readOnly;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* axis2DElementIdentifiers_readOnly;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* hatElementIdentifiers_readOnly;
		IL2CPP::Array<int32_t>* buttonElementIdentifierIds;
		IL2CPP::Array<int32_t>* axisElementIdentifierIds;
		IL2CPP::Array<int32_t>* axis2DElementIdentifierIds;
		IL2CPP::Array<int32_t>* hatElementIdentifierIds;
		int32_t elementIdentifierCount;
		int32_t axisCount;
		int32_t buttonCount;
		int32_t compoundElementCount;
		int32_t axis2DCount;
		int32_t hatCount;
		IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes;
		IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData;
		IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements;
		void _ctor(mscorlib::System::String* controllerName);
		void _ctor(mscorlib::System::String* controllerName, int32_t customControllerSourceId, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements);
		void _ctor(mscorlib::System::String* controllerName, Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements);
		void _ctor(mscorlib::System::String* controllerName, Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements);
		void _ctor(mscorlib::System::String* controllerName, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements);
		mscorlib::System::String* GetElementIdentifierName(int32_t elementIdentifierId);
		mscorlib::System::String* GetElementIdentifierPositiveName(int32_t elementIdentifierId);
		mscorlib::System::String* GetElementIdentifierNegativeName(int32_t elementIdentifierId);
		int32_t GetAxisIndex(int32_t elementIdentifierId);
		int32_t GetAxisIndex(mscorlib::System::String* elementIdentifierName);
		int32_t GetButtonIndex(int32_t elementIdentifierId);
		int32_t GetButtonIndex(mscorlib::System::String* elementIdentifierName);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetElementIdentifierById(int32_t id);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetButtonElementIdentifierById(int32_t id);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetAxisElementIdentifierById(int32_t id);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* GetAxis2DData(int32_t index);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* GetHatData(int32_t index);
		Rewired_Core::Rewired::ControllerElementType GetElementType(int32_t elementIdentifierId);
		int32_t aqTeAtTvgNgyPiruoKQgtGZbxkXE(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* A_1, int32_t A_2);
	};
}

