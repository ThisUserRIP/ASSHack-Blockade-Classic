#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningSpellScript.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltPathScriptBase; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBeamSpellScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningSpellScript
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPathScriptBase* LightningPathScript;
		float EndPointRandomization;
		mscorlib::System::Action_1<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* CollisionCallback;
		void CheckCollision();
		void Start();
		void LateUpdate();
		void OnCastSpell();
		void OnStopSpell();
		void _ctor();
	};
}

