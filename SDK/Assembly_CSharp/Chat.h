#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Chat : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		uint8_t teamsay;
		bool entermode;
		bool messageready;
		mscorlib::System::String* stringToEdit;
		bool userHasHitReturn;
		mscorlib::System::String* chat_prefix;
		IL2CPP::Array<mscorlib::System::String*>* message;
		float lastupdate;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_chat;
		float entertime;
		float starttime;
		bool show;
		int32_t tmpId;
		void Awake();
		void Update();
		void OnGUI();
		void AddMessage(int32_t index, int32_t team, mscorlib::System::String* msg, int32_t teamchat);
		void _ctor();
	};
}

