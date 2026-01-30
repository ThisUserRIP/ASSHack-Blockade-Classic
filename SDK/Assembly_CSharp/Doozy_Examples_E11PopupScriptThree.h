#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Examples_E11PopupScriptThree_PopupType.h"

namespace Assembly_CSharp::Doozy::Examples
{
	struct E11PopupScriptThree : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* PopupName;
		UnityEngine_CoreModule::UnityEngine::Sprite* ErrorSprite;
		mscorlib::System::String* ErrorTitle;
		mscorlib::System::String* ErrorMessage;
		UnityEngine_CoreModule::UnityEngine::Color ErrorTextColor;
		UnityEngine_CoreModule::UnityEngine::Sprite* InfoSprite;
		mscorlib::System::String* InfoTitle;
		mscorlib::System::String* InfoMessage;
		UnityEngine_CoreModule::UnityEngine::Color InfoTextColor;
		UnityEngine_CoreModule::UnityEngine::Sprite* WarningSprite;
		mscorlib::System::String* WarningTitle;
		mscorlib::System::String* WarningMessage;
		UnityEngine_CoreModule::UnityEngine::Color WarningTextColor;
		UnityEngine_CoreModule::UnityEngine::Sprite* WhateverSprite;
		mscorlib::System::String* WhateverTitle;
		mscorlib::System::String* WhateverMessage;
		UnityEngine_CoreModule::UnityEngine::Color WhateverTextColor;
		Assembly_CSharp::Doozy::Engine::UI::UIPopup* m_popup;
		void ShowPopup(Assembly_CSharp::Doozy::Examples::E11PopupScriptThree_PopupType popupType);
		void ShowInfoPopup();
		void ShowWarningPopup();
		void ShowErrorPopup();
		void ShowWhateverPopup();
		void _ctor();
	};
}

