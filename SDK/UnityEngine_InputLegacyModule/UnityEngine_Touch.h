#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_TouchPhase.h"
#include "UnityEngine_TouchType.h"

namespace UnityEngine_InputLegacyModule::UnityEngine
{
	struct Touch
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_FingerId;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Position;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_RawPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_PositionDelta;
		float m_TimeDelta;
		int32_t m_TapCount;
		UnityEngine_InputLegacyModule::UnityEngine::TouchPhase m_Phase;
		UnityEngine_InputLegacyModule::UnityEngine::TouchType m_Type;
		float m_Pressure;
		float m_maximumPossiblePressure;
		float m_Radius;
		float m_RadiusVariance;
		float m_AltitudeAngle;
		float m_AzimuthAngle;
		int32_t get_fingerId();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_position();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_rawPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_deltaPosition();
		float get_deltaTime();
		int32_t get_tapCount();
		UnityEngine_InputLegacyModule::UnityEngine::TouchPhase get_phase();
		float get_pressure();
		float get_maximumPossiblePressure();
		UnityEngine_InputLegacyModule::UnityEngine::TouchType get_type();
		float get_altitudeAngle();
		float get_azimuthAngle();
		float get_radius();
		float get_radiusVariance();
	};
}

