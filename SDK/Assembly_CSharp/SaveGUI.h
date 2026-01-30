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
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct SaveGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool active;
		UnityEngine_CoreModule::UnityEngine::Rect r_window;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::Client* cscl;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* map;
		bool dataload;
		int32_t csmode;
		void Awake();
		void SetActive(bool val);
		void OnGUI();
		void DrawWindow(int32_t wid);
		void Init();
		mscorlib::System::Collections::IEnumerator* get_mymaps();
		void _ctor();
	};
}

