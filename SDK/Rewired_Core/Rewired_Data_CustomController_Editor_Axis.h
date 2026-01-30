#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_CustomController_Editor_Element.h"
#include "Rewired_Data_CustomController_Editor.h"
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_AxisSensitivityType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor_Element; };

namespace Rewired_Core::Rewired::Data
{
	struct CustomController_Editor_Axis : Rewired_Core::Rewired::Data::CustomController_Editor_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::AxisRange range;
		bool invert;
		float deadZone;
		float zero;
		float min;
		float max;
		bool doNotCalibrateRange;
		Rewired_Core::Rewired::AxisSensitivityType sensitivityType;
		float sensitivity;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve;
		Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo;
		void _ctor();
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange range, bool invert, float deadZone, float zero, float min, float max, bool doNotCalibrateRange, Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo);
		void _ctor(Rewired_Core::Rewired::Data::CustomController_Editor_Axis* source);
		Rewired_Core::Rewired::Data::CustomController_Editor_Element* Clone();
	};
}

