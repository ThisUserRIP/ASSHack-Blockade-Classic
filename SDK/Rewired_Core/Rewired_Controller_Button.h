#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Element.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "Rewired_ButtonStateFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Core::Rewired
{
	struct Controller_Button : Rewired_Core::Rewired::Controller_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool jepFDteZOyGbCixHDvPHdomvGLl;
		Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* iqncSehMulAuRXHQTryXqAHICNE;
		bool get_valuePrev();
		bool get_value();
		float get_pressure();
		float get_pressurePrev();
		bool get_isPressureSensitive();
		bool get_justPressed();
		bool get_justReleased();
		bool get_justChangedState();
		bool get_doublePressedAndHeld();
		bool get_justDoublePressed();
		double get_timePressed();
		double get_timeUnpressed();
		double get_lastTimePressed();
		double get_lastTimeUnpressed();
		double get_lastTimeStateChanged();
		Rewired_Core::Rewired::ButtonStateFlags get_state();
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo);
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, bool isPressureSensitive, Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo);
		bool DoublePressedAndHeld(float speed);
		bool JustDoublePressed(float speed);
		void pFqEeNdzCVoYGNaBpkbkVXEGNDNa(Rewired_Core::Rewired::UpdateLoopType A_1, int32_t A_2, Rewired_Core::Rewired::ControllerDataUpdater* A_3);
		void ecUuyzLIXkklYMcPUhOFwRtygyD(Rewired_Core::Rewired::UpdateLoopType A_1);
		void qsKDflmZaLBVnSsreLXzCodHpQN();
	};
}

