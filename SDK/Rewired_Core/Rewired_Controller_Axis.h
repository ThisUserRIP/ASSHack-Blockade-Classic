#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Element.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct AxisCalibration; };

namespace Rewired_Core::Rewired
{
	struct Controller_Axis : Rewired_Core::Rewired::Controller_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::AxisRange hUsoadhakKLJqIEwCvmCqQwOAGK;
		Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* EeYgJUqklTpHnhbBVakmARoKCqY;
		float get_value();
		float get_valuePrev();
		float get_valueRaw();
		void set_valueRaw(float value);
		float get_valueRawPrev();
		float get_valueDelta();
		float get_valueDeltaRaw();
		double get_lastTimeActive();
		double get_lastTimeActiveRaw();
		double get_lastTimeInactive();
		double get_lastTimeInactiveRaw();
		double get_lastTimeValueChanged();
		double get_lastTimeValueChangedRaw();
		double get_timeActive();
		double get_timeActiveRaw();
		double get_timeInactive();
		double get_timeInactiveRaw();
		float get_pollingDeadZone();
		void set_pollingDeadZone(float value);
		float get_selfValue();
		float get_selfValuePrev();
		void vvSSNBdZCsxGKVxEekSqAdcIeFd(float A_1);
		float get_effectivePollingDeadZone();
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo);
		void SmeWJMPzKRjzwNciddWMFKwOiqo(Rewired_Core::Rewired::UpdateLoopType A_1);
		void bZLnUgXZCigLEzlvBFSkXFwXTsf(Rewired_Core::Rewired::AxisCalibration* A_1);
		void bZLnUgXZCigLEzlvBFSkXFwXTsf();
		void WMEMIDTSXgqaElwyGtmmKpIzCjYe();
		void MLswcubcQIgqYzjiRaRlNarSNXN();
		void qsKDflmZaLBVnSsreLXzCodHpQN(float A_1);
		float bUkyMeSqNwZbFynjuhylqfLcPux(Rewired_Core::Rewired::UpdateLoopType A_1, Rewired_Core::Rewired::AxisCalibration* A_2);
	};
}

