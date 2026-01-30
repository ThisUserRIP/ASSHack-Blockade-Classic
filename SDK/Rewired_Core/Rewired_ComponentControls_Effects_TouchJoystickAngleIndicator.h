#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired::Utils::Interfaces { template <typename T> struct IRegistrar_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };

namespace Rewired_Core::Rewired::ComponentControls::Effects
{
	struct TouchJoystickAngleIndicator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _visible;
		bool _targetAngleFromRotation;
		float _targetAngle;
		bool _fadeWithValue;
		bool _fadeWithAngle;
		float _fadeRange;
		UnityEngine_CoreModule::UnityEngine::Color _activeColor;
		UnityEngine_CoreModule::UnityEngine::Color _normalColor;
		UnityEngine_UI::UnityEngine::UI::Image* nNHgKBPiCYbWpdtECRhrEfBayBmb;
		UnityEngine_CoreModule::UnityEngine::RectTransform* GXRNQifCNNTKuKJSLZJvDIqWgvC;
		UnityEngine_CoreModule::UnityEngine::Vector2 ynLGIuiULREvKsDPEgJppwwBvZr;
		bool UPKNIHsSnxKoYgsmvsxKiuLtsNM;
		Rewired_Core::Rewired::Utils::Interfaces::IRegistrar_1<Rewired_Core::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>* rOfmKGhtregieWGssnjDehjuCmm;
		bool get_visible();
		void set_visible(bool value);
		bool get_targetAngleFromRotation();
		void set_targetAngleFromRotation(bool value);
		float get_targetAngle();
		void set_targetAngle(float value);
		bool get_fadeWithValue();
		void set_fadeWithValue(bool value);
		bool get_fadeWithAngle();
		void set_fadeWithAngle(bool value);
		float get_fadeRange();
		void set_fadeRange(float value);
		UnityEngine_CoreModule::UnityEngine::Color get_activeColor();
		void set_activeColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_normalColor();
		void set_normalColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_UI::UnityEngine::UI::Image* get_image();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_currentSprite();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void _ctor();
		bool uzLqOzKhBVjKHxRdoGdOAjnmgFm(UnityEngine_CoreModule::UnityEngine::Vector2& A_1);
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnValidate();
		void OnTransformParentChanged();
		void zQEHtkoBJdZYFoCgnVsiufzUmau(bool A_1, bool A_2);
		void bHisYokXtauwUkObhyRqTGxsRmy(UnityEngine_CoreModule::UnityEngine::Vector2 A_1);
		void HSQyPoafrXnwZfBKOphUBULlEBC();
		void FTCpAHsLZSiWeeRGdJfhaiamjxh();
		void FEXQmcgsIVfvGMLuLGRXIjWjIctl();
		void RSbvOdHhlqpRbMiixtYUTpUgTkX();
		void kamZpWdvHoESqAAEXfELiVwTdJd();
		void OnVisibilityChanged(bool state);
		void OnTouchJoystickStickPositionChanged(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler_OnStickPositionChanged(UnityEngine_CoreModule::UnityEngine::Vector2 A_1);
	};
}

