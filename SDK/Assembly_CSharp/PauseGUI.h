#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct WeaponSystem; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct Chat; };
namespace Assembly_CSharp { struct TransportDetect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PauseGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool active;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		Assembly_CSharp::PlayerControl* pc;
		Assembly_CSharp::WeaponSystem* ws;
		float gamevolume;
		Assembly_CSharp::Chat* cschat;
		float local_sens;
		Assembly_CSharp::TransportDetect* td;
		bool _chat_filter;
		void Awake();
		void Update();
		void OnGUI();
		void _ctor();
	};
}

