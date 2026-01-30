#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputBehaviorSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _inputBehaviorId;
		bool _showJoystickAxisSensitivity;
		bool _showMouseXYAxisSensitivity;
		mscorlib::System::String* _labelLanguageKey;
		mscorlib::System::String* _joystickAxisSensitivityLabelLanguageKey;
		mscorlib::System::String* _mouseXYAxisSensitivityLabelLanguageKey;
		UnityEngine_CoreModule::UnityEngine::Sprite* _joystickAxisSensitivityIcon;
		UnityEngine_CoreModule::UnityEngine::Sprite* _mouseXYAxisSensitivityIcon;
		float _joystickAxisSensitivityMin;
		float _joystickAxisSensitivityMax;
		float _mouseXYAxisSensitivityMin;
		float _mouseXYAxisSensitivityMax;
		int32_t get_inputBehaviorId();
		bool get_showJoystickAxisSensitivity();
		bool get_showMouseXYAxisSensitivity();
		mscorlib::System::String* get_labelLanguageKey();
		mscorlib::System::String* get_joystickAxisSensitivityLabelLanguageKey();
		mscorlib::System::String* get_mouseXYAxisSensitivityLabelLanguageKey();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_joystickAxisSensitivityIcon();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_mouseXYAxisSensitivityIcon();
		float get_joystickAxisSensitivityMin();
		float get_joystickAxisSensitivityMax();
		float get_mouseXYAxisSensitivityMin();
		float get_mouseXYAxisSensitivityMax();
		bool get_isValid();
		void _ctor();
	};
}

