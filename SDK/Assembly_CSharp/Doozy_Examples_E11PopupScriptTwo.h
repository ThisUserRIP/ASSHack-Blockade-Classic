#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Examples
{
	struct E11PopupScriptTwo : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* PopupName;
		mscorlib::System::String* Title;
		mscorlib::System::String* Message;
		mscorlib::System::String* LabelButtonOne;
		mscorlib::System::String* LabelButtonTwo;
		bool HideOnButtonOne;
		bool HideOnButtonTwo;
		UnityEngine_UI::UnityEngine::UI::InputField* TitleInput;
		UnityEngine_UI::UnityEngine::UI::InputField* MessageInput;
		UnityEngine_UI::UnityEngine::UI::InputField* LabelButtonOneInput;
		UnityEngine_UI::UnityEngine::UI::InputField* LabelButtonTwoInput;
		UnityEngine_UI::UnityEngine::UI::Toggle* ButtonOneToggle;
		UnityEngine_UI::UnityEngine::UI::Toggle* ButtonTwoToggle;
		Assembly_CSharp::Doozy::Engine::UI::UIPopup* m_popup;
		void OnEnable();
		void OnDisable();
		void ShowPopup();
		void ClickButtonOne();
		void ClickButtonTwo();
		void ClosePopup();
		void _ctor();
		void _OnEnable_b__14_0(mscorlib::System::String* value);
		void _OnEnable_b__14_1(mscorlib::System::String* value);
		void _OnEnable_b__14_2(bool value);
		void _OnEnable_b__14_3(bool value);
	};
}

