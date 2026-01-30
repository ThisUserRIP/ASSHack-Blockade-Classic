#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Unity_TextMeshPro::TMPro { struct ColorTween_ColorTweenCallback; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "TMPro_ColorTween_ColorTweenMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };

namespace Unity_TextMeshPro::TMPro
{
	struct ColorTween
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::ColorTween_ColorTweenCallback* m_Target;
		UnityEngine_CoreModule::UnityEngine::Color m_StartColor;
		UnityEngine_CoreModule::UnityEngine::Color m_TargetColor;
		Unity_TextMeshPro::TMPro::ColorTween_ColorTweenMode m_TweenMode;
		float m_Duration;
		bool m_IgnoreTimeScale;
		UnityEngine_CoreModule::UnityEngine::Color get_startColor();
		void set_startColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_targetColor();
		void set_targetColor(UnityEngine_CoreModule::UnityEngine::Color value);
		Unity_TextMeshPro::TMPro::ColorTween_ColorTweenMode get_tweenMode();
		void set_tweenMode(Unity_TextMeshPro::TMPro::ColorTween_ColorTweenMode value);
		float get_duration();
		void set_duration(float value);
		bool get_ignoreTimeScale();
		void set_ignoreTimeScale(bool value);
		void TweenValue(float floatPercentage);
		void AddOnChangedCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Color>* callback);
		bool GetIgnoreTimescale();
		float GetDuration();
		bool ValidTarget();
	};
}

