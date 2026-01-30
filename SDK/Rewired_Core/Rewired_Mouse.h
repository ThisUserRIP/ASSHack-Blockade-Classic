#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerWithAxes.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Pole.h"

namespace Rewired_Core::Rewired
{
	struct Mouse : Rewired_Core::Rewired::ControllerWithAxes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs* mouseAxisPollingTimer;
		IL2CPP::Array<float>* cumulativeMousePollingAxes;
		UnityEngine_CoreModule::UnityEngine::Vector2 _screenPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 _screenPositionPrev;
		int32_t _lastScreenPositionUpdateFrame;
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* _source;
		struct StaticFields
		{
			mscorlib::System::Guid s_deviceInstanceGuid;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionPrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionDelta();
		mscorlib::System::Guid get_deviceInstanceGuid();
		void _ctor(mscorlib::System::String* name, Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* source);
		void _ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareIdentifier, int32_t axisCount, int32_t buttonCount, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		bool IsPolledAxisActive(int32_t index, Rewired_Core::Rewired::Pole& pole, int32_t& elementIdentifierId);
		void Clear();
		bool SetEnabled(bool state);
		void RecordMouseScreenPosition();
	};
}

