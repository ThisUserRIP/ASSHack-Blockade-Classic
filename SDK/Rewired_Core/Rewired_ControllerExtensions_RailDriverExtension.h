#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Extension.h"
namespace Rewired_Core::Rewired::ControllerExtensions { struct RailDriverExtension_jiibFojUkNEXUtognSbKLsvogjKZ; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Drivers::Interfaces { struct IDriver_RailDriver; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IControllerExtensionSource; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };

namespace Rewired_Core::Rewired::ControllerExtensions
{
	struct RailDriverExtension : Rewired_Core::Rewired::Controller_Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension_jiibFojUkNEXUtognSbKLsvogjKZ* vFZHOBqLeyYBeVMlFUHaPOmXHwG;
		Rewired_Core::Rewired::Joystick* get_joystick();
		void _ctor(Rewired_Core::Rewired::Drivers::Interfaces::IDriver_RailDriver* driver);
		void _ctor(Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension* source);
		bool get_speakerEnabled();
		void set_speakerEnabled(bool value);
		void SetLEDDisplay(int32_t digitIndex, uint8_t digitBitValues);
		void SetLEDDisplay(uint8_t digit1BitValues, uint8_t digit2BitValues, uint8_t digit3BitValues);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1);
		void SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1);
		Rewired_Core::Rewired::Controller_Extension* Clone();
	};
}

