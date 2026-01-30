#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Examples { struct AchievementData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Doozy::Examples
{
	struct E12PopupManagerScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* PopupName;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Examples::AchievementData>* Achievements;
		Assembly_CSharp::Doozy::Engine::UI::UIPopup* m_popup;
		void ShowAchievement(int32_t achievementId);
		void ClearPopupQueue();
		void _ctor();
	};
}

