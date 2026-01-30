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
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct MapListGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool active;
		UnityEngine_CoreModule::UnityEngine::Rect r_window;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::Client* cscl;
		bool dataload;
		int32_t gamemode;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		void Awake();
		void SetActive(bool val, int32_t gamemode);
		void OnGUI();
		void DrawWindow(int32_t wid);
		void DrawSlot(UnityEngine_CoreModule::UnityEngine::Vector2 mpos, int32_t x, int32_t y, int32_t mapid, mscorlib::System::String* mapname);
		void _ctor();
	};
}

