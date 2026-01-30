#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_CompoundElement.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct CalibrationMap; };
namespace Rewired_Core::Rewired { struct Controller_Axis; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct Controller_Axis2D : Rewired_Core::Rewired::Controller_CompoundElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::CalibrationMap* GdzgTiXctocTbZSQTsCcAEhbnth;
		struct StaticFields
		{
			int32_t tqZnscdsIoYyNIsJSCeVpOCKhyOB;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_elementCapacity();
		Rewired_Core::Rewired::Controller_Axis* get_xAxis();
		Rewired_Core::Rewired::Controller_Axis* get_yAxis();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valuePrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valueRawPrev();
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, Rewired_Core::Rewired::Controller_Axis* xAxis, Rewired_Core::Rewired::Controller_Axis* yAxis, int32_t xAxisIndex, int32_t yAxisIndex, Rewired_Core::Rewired::CalibrationMap* calibratonMap);
		void GESNSEAFNCRhlrpprwhsHqbXxcO();
		UnityEngine_CoreModule::UnityEngine::Vector2 BuIuMKsSSbXpuYgoHpwvWZoVvgz();
		UnityEngine_CoreModule::UnityEngine::Vector2 DplQRziLIZBLEevaEKxNzlqJGzC();
	};
}

