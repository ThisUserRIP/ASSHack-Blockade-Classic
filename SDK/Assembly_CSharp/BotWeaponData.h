#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "ITEM.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct WeaponEffectsController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct BotWeaponData : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ITEM MyID;
		UnityEngine_CoreModule::UnityEngine::GameObject* weapon;
		UnityEngine_CoreModule::UnityEngine::GameObject* flash;
		UnityEngine_CoreModule::UnityEngine::GameObject* alter_flash;
		Assembly_CSharp::WeaponEffectsController* WEC;
		void _ctor();
	};
}

