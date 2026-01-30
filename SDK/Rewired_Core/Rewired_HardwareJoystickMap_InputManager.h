#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "Rewired_HardwareControllerMapIdentifier.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMapIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_CompoundElement; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_JoystickType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };

namespace Rewired_Core::Rewired
{
	struct HardwareJoystickMap_InputManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* controllerName;
		Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* map;
		int32_t buttonCount;
		int32_t axisCount;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* elementIdentifiers;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements;
		bool useSystemName;
		bool isUnknownController;
		IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes;
		IL2CPP::Array<mscorlib::System::String*>* GetAxisNames();
		IL2CPP::Array<mscorlib::System::String*>* GetEffectiveButtonNames();
		void _ctor(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* hardwarePlatformMap, mscorlib::System::String* controllerName, int32_t buttonCount, int32_t axisCount, int32_t elementIdentifierCount, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements);
		Rewired_Core::Rewired::HardwareControllerMap_Game* ToGameHardwareControllerMap();
	};
}

