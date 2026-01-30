#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp
{
	struct vp_SimpleHUD : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture* DamageFlashTexture;
		bool ShowHUD;
		UnityEngine_CoreModule::UnityEngine::Color m_MessageColor;
		UnityEngine_CoreModule::UnityEngine::Color m_InvisibleColor;
		UnityEngine_CoreModule::UnityEngine::Color m_DamageFlashColor;
		UnityEngine_CoreModule::UnityEngine::Color m_DamageFlashInvisibleColor;
		mscorlib::System::String* m_PickupMessage;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		struct StaticFields
		{
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_MessageStyle;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_MessageStyle();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnGUI();
		void OnMessage_HUDText(mscorlib::System::String* message);
		void OnMessage_HUDDamageFlash(float intensity);
		void _ctor();
		static void _cctor();
	};
}

