#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct BotWeaponData; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct MaterialColorSetter; };
namespace Assembly_CSharp { struct ScytheSoulsEffectController; };
namespace Assembly_CSharp { struct FlameCaster; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct BotEquipmentContainer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::BotWeaponData*>* MyWeapons;
		UnityEngine_CoreModule::UnityEngine::GameObject* Jetpack;
		UnityEngine_CoreModule::UnityEngine::GameObject* JetpackFX;
		IL2CPP::Array<Assembly_CSharp::MaterialColorSetter*>* ColoredEquipment;
		Assembly_CSharp::ScytheSoulsEffectController* SCYTHECS;
		Assembly_CSharp::FlameCaster* flamePS;
		UnityEngine_CoreModule::UnityEngine::GameObject* goCloak;
		UnityEngine_CoreModule::UnityEngine::GameObject* goShield;
		UnityEngine_CoreModule::UnityEngine::GameObject* goShieldLady;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPan;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPanLady;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_Top;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_Face;
		UnityEngine_CoreModule::UnityEngine::GameObject* SpecView;
		UnityEngine_CoreModule::UnityEngine::GameObject* SpecView2;
		void SetFlashActive(int32_t WeaponID, bool flash, bool alter_flash);
		void SetWeaponActive(int32_t WeaponID, bool state);
		void SetWECTeam(int32_t team);
		void CalibrateEquipment();
		void SetHitBoxesIndex(int32_t index);
		void _ctor();
	};
}

