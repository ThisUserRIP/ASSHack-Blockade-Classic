#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningSpellScript; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collision; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct DemoPlayerControllerScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* SpellLabel;
		float Speed;
		float RotateSpeed;
		IL2CPP::Array<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningSpellScript*>* Spells;
		int32_t spellIndex;
		bool spellMouseButtonDown;
		UnityEngine_CoreModule::UnityEngine::GameObject* rightHand;
		void OnCollisionEnter(UnityEngine_PhysicsModule::UnityEngine::Collision* collision);
		void Start();
		void Update();
		bool GuiElementShouldPassThrough();
		void UpdateSpell();
		void ChangeSpell(int32_t dir);
		void PreviousSpell();
		void NextSpell();
		void _ctor();
	};
}

