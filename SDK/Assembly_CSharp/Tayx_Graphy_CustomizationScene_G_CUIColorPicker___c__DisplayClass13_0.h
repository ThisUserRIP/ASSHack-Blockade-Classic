#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Tayx_Graphy_CustomizationScene_G_CUIColorPicker.h"
namespace Assembly_CSharp::Tayx::Graphy::CustomizationScene { struct G_CUIColorPicker; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Action; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::CustomizationScene
{
	struct G_CUIColorPicker___c__DisplayClass13_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture2D* satvalTex;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* satvalColors;
		float Hue;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* hueColors;
		mscorlib::System::Action* resetSatValTexture;
		float Saturation;
		float Value;
		UnityEngine_CoreModule::UnityEngine::GameObject* result;
		Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker* __4__this;
		UnityEngine_CoreModule::UnityEngine::GameObject* hueGO;
		mscorlib::System::Action* dragH;
		UnityEngine_CoreModule::UnityEngine::GameObject* satvalGO;
		mscorlib::System::Action* dragSV;
		UnityEngine_CoreModule::UnityEngine::Vector2 hueSz;
		mscorlib::System::Action* applyHue;
		mscorlib::System::Action* applySaturationValue;
		UnityEngine_CoreModule::UnityEngine::GameObject* hueKnob;
		mscorlib::System::Action* idle;
		UnityEngine_CoreModule::UnityEngine::Vector2 satvalSz;
		UnityEngine_CoreModule::UnityEngine::GameObject* satvalKnob;
		void _ctor();
		void _Setup_b__0();
		void _Setup_b__1();
		void _Setup_b__2();
		void _Setup_b__3();
		void _Setup_b__4();
		void _Setup_b__5();
	};
}

