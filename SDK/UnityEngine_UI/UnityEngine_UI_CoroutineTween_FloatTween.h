#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_UI::UnityEngine::UI::CoroutineTween { struct FloatTween_FloatTweenCallback; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };

namespace UnityEngine_UI::UnityEngine::UI::CoroutineTween
{
	struct FloatTween
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback* m_Target;
		float m_StartValue;
		float m_TargetValue;
		float m_Duration;
		bool m_IgnoreTimeScale;
		float get_startValue();
		void set_startValue(float value);
		float get_targetValue();
		void set_targetValue(float value);
		float get_duration();
		void set_duration(float value);
		bool get_ignoreTimeScale();
		void set_ignoreTimeScale(bool value);
		void TweenValue(float floatPercentage);
		void AddOnChangedCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Single>* callback);
		bool GetIgnoreTimescale();
		float GetDuration();
		bool ValidTarget();
	};
}

