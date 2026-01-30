#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"

namespace Assembly_CSharp::Tayx::Graphy::CustomizationScene
{
	struct G_CUIColorPicker : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Slider* alphaSlider;
		UnityEngine_UI::UnityEngine::UI::Image* alphaSliderBGImage;
		UnityEngine_CoreModule::UnityEngine::Color _color;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Color>* _onValueChange;
		mscorlib::System::Action* _update;
		UnityEngine_CoreModule::UnityEngine::Color get_Color();
		void set_Color(UnityEngine_CoreModule::UnityEngine::Color value);
		void SetOnValueChangeCallback(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Color>* onValueChange);
		static void RGBToHSV(UnityEngine_CoreModule::UnityEngine::Color color, float& h, float& s, float& v);
		static bool GetLocalMouse(UnityEngine_CoreModule::UnityEngine::GameObject* go, UnityEngine_CoreModule::UnityEngine::Vector2& result);
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetWidgetSize(UnityEngine_CoreModule::UnityEngine::GameObject* go);
		UnityEngine_CoreModule::UnityEngine::GameObject* GO(mscorlib::System::String* name);
		void Setup(UnityEngine_CoreModule::UnityEngine::Color inputColor);
		void SetRandomColor();
		void Awake();
		void Start();
		void Update();
		void _ctor();
		void _Start_b__16_0(float value);
	};
}

