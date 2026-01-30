#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct SaveGUI; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct AdminGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool active;
		UnityEngine_CoreModule::UnityEngine::Rect r_window;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::SaveGUI* cssg;
		int32_t gamemode;
		mscorlib::System::String* mapid;
		mscorlib::System::String* password;
		int32_t imapid;
		int32_t ipassword;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* buttoncolors;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		void Awake();
		void OnGUI();
		void SetActive(bool val);
		void DrawWindow(int32_t wid);
		void DrawWindowPlayers(int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void DrawPlayer(int32_t x, int32_t y, int32_t id, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void _ctor();
	};
}

