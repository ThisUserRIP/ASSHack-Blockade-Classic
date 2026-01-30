#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Health : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool init;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::Texture* tex;
		UnityEngine_CoreModule::UnityEngine::Texture* texHelmet;
		UnityEngine_CoreModule::UnityEngine::Texture* texArmor;
		UnityEngine_CoreModule::UnityEngine::Texture* gasMask;
		UnityEngine_CoreModule::UnityEngine::Texture* texJetpack;
		int32_t health;
		bool helmet;
		bool armor;
		bool mask;
		float IndicatorTime;
		UnityEngine_CoreModule::UnityEngine::Texture* tex_indicator;
		int32_t aid;
		UnityEngine_CoreModule::UnityEngine::Vector3 DamagePos;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPlayer;
		float currentFuel;
		void Awake();
		void OnGUI();
		void SetHealth(int32_t _health);
		int32_t GetHealth();
		void SetHelmet(bool val);
		void SetArmor(bool val);
		void SetMask(bool val);
		void SetDamageIndicator(int32_t attackerid);
		static float AngleSigned(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, UnityEngine_CoreModule::UnityEngine::Vector3 n);
		void _ctor();
	};
}

