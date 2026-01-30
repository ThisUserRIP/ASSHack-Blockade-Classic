#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct Axis2DCalibration; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis2D_ValueChangedEventHandler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::Internal
{
	struct StandaloneAxis2D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Axis2DCalibration* _calibration;
		Rewired_Core::Rewired::Internal::StandaloneAxis* _xAxis;
		Rewired_Core::Rewired::Internal::StandaloneAxis* _yAxis;
		bool _allowEvents;
		Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* _ValueChangedEvent;
		Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* _RawValueChangedEvent;
		Rewired_Core::Rewired::Axis2DCalibration* get_calibration();
		Rewired_Core::Rewired::Internal::StandaloneAxis* get_xAxis();
		Rewired_Core::Rewired::Internal::StandaloneAxis* get_yAxis();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valuePrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valueDelta();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_rawValue();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_rawValuePrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_rawValueDelta();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_rawZero();
		void add__ValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void remove__ValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void add_ValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void remove_ValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void add__RawValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void remove__RawValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void add_RawValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void remove_RawValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Internal::StandaloneAxis* xAxis, Rewired_Core::Rewired::Internal::StandaloneAxis* yAxis);
		void SetRawValue(float x, float y);
		void SetRawValue(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void Clear();
		void Initialize();
		void Deinitialize();
		void EvalAndSendValueChangeEvents();
		void Subscribe();
		void Unsubscribe();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetCalibratedValue(Rewired_Core::Rewired::Internal::StandaloneAxis* xAxis, Rewired_Core::Rewired::Internal::StandaloneAxis* yAxis);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetCalibratedValuePrev(Rewired_Core::Rewired::Internal::StandaloneAxis* xAxis, Rewired_Core::Rewired::Internal::StandaloneAxis* yAxis);
		void OnAxisValueChanged(float value);
		void OnAxisRawValueChanged(float value);
		static Rewired_Core::Rewired::Internal::StandaloneAxis2D* CreateRelative();
	};
}

