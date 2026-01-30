#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core { struct OojHVyREErIozRayFZRviDSHOGp; };
#include "Rewired_InputActionEventType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Player; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "Rewired_AxisCoordinateMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_InputActionSourceData.h"
namespace Rewired_Core::Rewired { struct InputActionSourceData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller; };

namespace Rewired_Core::Rewired
{
	struct InputActionEventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::OojHVyREErIozRayFZRviDSHOGp* lbbClyPIFzeHlWZBXtEeHNFxYcV;
		Rewired_Core::Rewired::InputActionEventType btUfMIqqqfnocFJUvPyKOqztEWE;
		int32_t playerId;
		int32_t actionId;
		Rewired_Core::Rewired::UpdateLoopType updateLoop;
		Rewired_Core::Rewired::InputActionEventType get_eventType();
		void set_eventType(Rewired_Core::Rewired::InputActionEventType value);
		Rewired_Core::Rewired::Player* get_player();
		mscorlib::System::String* get_actionName();
		mscorlib::System::String* get_actionDescriptiveName();
		float GetAxis();
		float GetAxisPrev();
		float GetAxisDelta();
		double GetAxisTimeActive();
		double GetAxisTimeInactive();
		float GetAxisRaw();
		float GetAxisRawDelta();
		float GetAxisRawPrev();
		double GetAxisRawTimeActive();
		double GetAxisRawTimeInactive();
		Rewired_Core::Rewired::AxisCoordinateMode GetAxisCoordinateMode();
		Rewired_Core::Rewired::AxisCoordinateMode GetAxisCoordinateModePrev();
		Rewired_Core::Rewired::AxisCoordinateMode GetAxisRawCoordinateMode();
		Rewired_Core::Rewired::AxisCoordinateMode GetAxisRawCoordinateModePrev();
		bool GetButton();
		bool GetButtonPrev();
		bool GetButtonDown();
		bool GetButtonUp();
		bool GetButtonSinglePressHold();
		bool GetButtonSinglePressDown();
		bool GetButtonSinglePressUp();
		bool GetButtonDoublePressDown();
		bool GetButtonDoublePressDown(float speed);
		bool GetButtonDoublePressHold();
		bool GetButtonDoublePressHold(float speed);
		bool GetButtonDoublePressUp();
		bool GetButtonDoublePressUp(float speed);
		bool GetButtonTimedPress(float time);
		bool GetButtonTimedPress(float time, float expireIn);
		bool GetButtonTimedPressDown(float time);
		bool GetButtonTimedPressUp(float time);
		bool GetButtonTimedPressUp(float time, float expireIn);
		bool GetButtonShortPress();
		bool GetButtonShortPressDown();
		bool GetButtonShortPressUp();
		bool GetButtonLongPress();
		bool GetButtonLongPressDown();
		bool GetButtonLongPressUp();
		bool GetButtonRepeating();
		double GetButtonTimePressed();
		double GetButtonTimeUnpressed();
		bool GetNegativeButton();
		bool GetNegativeButtonPrev();
		bool GetNegativeButtonDown();
		bool GetNegativeButtonUp();
		bool GetNegativeButtonSinglePressHold();
		bool GetNegativeButtonSinglePressDown();
		bool GetNegativeButtonSinglePressUp();
		bool GetNegativeButtonDoublePressDown();
		bool GetNegativeButtonDoublePressDown(float speed);
		bool GetNegativeButtonDoublePressHold();
		bool GetNegativeButtonDoublePressHold(float speed);
		bool GetNegativeButtonDoublePressUp();
		bool GetNegativeButtonDoublePressUp(float speed);
		bool GetNegativeButtonTimedPress(float time);
		bool GetNegativeButtonTimedPress(float time, float expireIn);
		bool GetNegativeButtonTimedPressDown(float time);
		bool GetNegativeButtonTimedPressUp(float time);
		bool GetNegativeButtonTimedPressUp(float time, float expireIn);
		bool GetNegativeButtonShortPress();
		bool GetNegativeButtonShortPressDown();
		bool GetNegativeButtonShortPressUp();
		bool GetNegativeButtonLongPress();
		bool GetNegativeButtonLongPressDown();
		bool GetNegativeButtonLongPressUp();
		bool GetNegativeButtonRepeating();
		double GetNegativeButtonTimePressed();
		double GetNegativeButtonTimeUnpressed();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputActionSourceData>* GetCurrentInputSources();
		bool IsCurrentInputSource(Rewired_Core::Rewired::ControllerType controllerType);
		bool IsCurrentInputSource(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		bool IsCurrentInputSource(Rewired_Core::Rewired::Controller* controller);
		void _ctor(Rewired_Core::OojHVyREErIozRayFZRviDSHOGp* vc, int32_t playerId, int32_t actionId, Rewired_Core::Rewired::UpdateLoopType updateLoop);
	};
}

