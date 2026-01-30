#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_MouseXYAxisMode.h"
#include "Rewired_MouseOtherAxisMode.h"
#include "Rewired_MouseXYAxisDeltaCalc.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct InputBehavior : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		mscorlib::System::String* _name;
		float _joystickAxisSensitivity;
		bool _digitalAxisSimulation;
		bool _digitalAxisSnap;
		bool _digitalAxisInstantReverse;
		float _digitalAxisGravity;
		float _digitalAxisSensitivity;
		Rewired_Core::Rewired::MouseXYAxisMode _mouseXYAxisMode;
		Rewired_Core::Rewired::MouseOtherAxisMode _mouseOtherAxisMode;
		float _mouseXYAxisSensitivity;
		Rewired_Core::Rewired::MouseXYAxisDeltaCalc _mouseXYAxisDeltaCalc;
		float _mouseOtherAxisSensitivity;
		float _customControllerAxisSensitivity;
		float _buttonDoublePressSpeed;
		float _buttonShortPressTime;
		float _buttonShortPressExpiresIn;
		float _buttonLongPressTime;
		float _buttonLongPressExpiresIn;
		float _buttonDeadZone;
		float _buttonDownBuffer;
		float _buttonRepeatRate;
		float _buttonRepeatDelay;
		int32_t get_id();
		void set_id(int32_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		float get_joystickAxisSensitivity();
		void set_joystickAxisSensitivity(float value);
		bool get_digitalAxisSimulation();
		void set_digitalAxisSimulation(bool value);
		bool get_digitalAxisSnap();
		void set_digitalAxisSnap(bool value);
		bool get_digitalAxisInstantReverse();
		void set_digitalAxisInstantReverse(bool value);
		float get_digitalAxisGravity();
		void set_digitalAxisGravity(float value);
		float get_digitalAxisSensitivity();
		void set_digitalAxisSensitivity(float value);
		Rewired_Core::Rewired::MouseXYAxisMode get_mouseXYAxisMode();
		void set_mouseXYAxisMode(Rewired_Core::Rewired::MouseXYAxisMode value);
		Rewired_Core::Rewired::MouseOtherAxisMode get_mouseOtherAxisMode();
		void set_mouseOtherAxisMode(Rewired_Core::Rewired::MouseOtherAxisMode value);
		float get_mouseXYAxisSensitivity();
		void set_mouseXYAxisSensitivity(float value);
		Rewired_Core::Rewired::MouseXYAxisDeltaCalc get_mouseXYAxisDeltaCalc();
		void set_mouseXYAxisDeltaCalc(Rewired_Core::Rewired::MouseXYAxisDeltaCalc value);
		float get_mouseOtherAxisSensitivity();
		void set_mouseOtherAxisSensitivity(float value);
		float get_customControllerAxisSensitivity();
		void set_customControllerAxisSensitivity(float value);
		float get_buttonDoublePressSpeed();
		void set_buttonDoublePressSpeed(float value);
		float get_buttonShortPressTime();
		void set_buttonShortPressTime(float value);
		float get_buttonShortPressExpiresIn();
		void set_buttonShortPressExpiresIn(float value);
		float get_buttonLongPressTime();
		void set_buttonLongPressTime(float value);
		float get_buttonLongPressExpiresIn();
		void set_buttonLongPressExpiresIn(float value);
		float get_buttonDeadZone();
		void set_buttonDeadZone(float value);
		float get_buttonDownBuffer();
		void set_buttonDownBuffer(float value);
		float get_buttonRepeatRate();
		void set_buttonRepeatRate(float value);
		float get_buttonRepeatDelay();
		void set_buttonRepeatDelay(float value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::InputBehavior* source);
		mscorlib::System::String* ToXmlString();
		bool ImportXmlString(mscorlib::System::String* xmlString);
		mscorlib::System::String* ToJsonString();
		bool ImportJsonString(mscorlib::System::String* jsonString);
		bool ImportData(Rewired_Core::Rewired::InputBehavior* inputBehavior);
		Rewired_Core::Rewired::InputBehavior* Clone();
		void Reset();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* ivZgbKElvDJrseUKUeNhzngUMTVh();
		void ZtlgEEdTzIaikjiOXAMcnHFIegM(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		static void oLYTUHdLeWrrHTarndVvsddxovL(Rewired_Core::Rewired::InputBehavior* A_0, Rewired_Core::Rewired::InputBehavior* A_1, bool A_2);
	};
}

