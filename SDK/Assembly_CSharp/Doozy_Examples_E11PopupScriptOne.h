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
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Examples
{
	struct E11PopupScriptOne : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* PopupName;
		mscorlib::System::String* Title;
		mscorlib::System::String* Message;
		bool HideOnBackButton;
		bool HideOnClickAnywhere;
		bool HideOnClickOverlay;
		bool HideOnClickContainer;
		UnityEngine_UI::UnityEngine::UI::InputField* TitleInput;
		UnityEngine_UI::UnityEngine::UI::InputField* MessageInput;
		UnityEngine_UI::UnityEngine::UI::Toggle* BackButtonToggle;
		UnityEngine_UI::UnityEngine::UI::Toggle* ClickAnywhereToggle;
		UnityEngine_UI::UnityEngine::UI::Toggle* ClickOverlayToggle;
		UnityEngine_UI::UnityEngine::UI::Toggle* ClickContainerToggle;
		void OnEnable();
		void OnDisable();
		void ShowPopup();
		void _ctor();
		void _OnEnable_b__13_0(mscorlib::System::String* value);
		void _OnEnable_b__13_1(mscorlib::System::String* value);
		void _OnEnable_b__13_2(bool value);
		void _OnEnable_b__13_3(bool value);
		void _OnEnable_b__13_4(bool value);
		void _OnEnable_b__13_5(bool value);
	};
}

