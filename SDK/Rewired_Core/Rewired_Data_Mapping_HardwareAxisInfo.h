#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_AxisCoordinateMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Data_Mapping_SpecialAxisType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareAxisInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::AxisCoordinateMode _dataFormat;
		bool _excludeFromPolling;
		Rewired_Core::Rewired::Data::Mapping::SpecialAxisType _specialAxisType;
		float _pollingDeadZone;
		Rewired_Core::Rewired::AxisCoordinateMode get_dataFormat();
		bool get_excludeFromPolling();
		Rewired_Core::Rewired::Data::Mapping::SpecialAxisType get_specialAxisType();
		float get_pollingDeadZone();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::AxisCoordinateMode dataFormat, bool excludeFromPolling, float pollingDeadZone, Rewired_Core::Rewired::Data::Mapping::SpecialAxisType specialAxisType);
		static Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* get_Default();
		mscorlib::System::Object* DeepClone();
	};
}

