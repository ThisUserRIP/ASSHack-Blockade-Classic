#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct LoadScreen : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* background;
		UnityEngine_CoreModule::UnityEngine::Texture2D* bar;
		int32_t progress;
		mscorlib::System::String* loadtext;
		UnityEngine_CoreModule::UnityEngine::Texture2D* black;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::GameObject* LocalPlayer;
		UnityEngine_CoreModule::UnityEngine::Rect rMain;
		UnityEngine_CoreModule::UnityEngine::Rect rBG;
		UnityEngine_CoreModule::UnityEngine::Rect rFG;
		float x1;
		float x2;
		float y1;
		float y2;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, IL2CPP::Array<mscorlib::System::String*>>* msg;
		IL2CPP::Array<mscorlib::System::String*>* tmpmsg;
		int32_t msg_type;
		int32_t last_mode;
		bool need_rename;
		bool initialized;
		struct StaticFields
		{
			Assembly_CSharp::LoadScreen* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void OnGUI();
		void Init();
		void _ctor();
	};
}

