#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct Profile : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		UnityEngine_CoreModule::UnityEngine::GameObject* Store;
		bool stats_load;
		int32_t level;
		int32_t frags;
		int32_t deaths;
		int32_t exp;
		int32_t currexp;
		int32_t nextexp;
		int32_t progress;
		int32_t type;
		IL2CPP::Array<bool>* hovermode;
		bool draw_profile;
		bool draw_hall;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		void myGlobalInit();
		void onActive();
		void OnGUI();
		void DoWindow(int32_t windowID);
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id, int32_t length);
		void DrawCategory0();
		void DrawCategory1();
		mscorlib::System::Collections::IEnumerator* get_stats();
		mscorlib::System::Collections::IEnumerator* get_hall();
		void _ctor();
	};
}

