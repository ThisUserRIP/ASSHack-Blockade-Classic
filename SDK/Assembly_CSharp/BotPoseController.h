#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct AimIK; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct LookAtIK; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct BotEquipmentContainer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct BotPoseController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIK* myAIM;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::LookAtIK* myLook;
		UnityEngine_CoreModule::UnityEngine::Transform* myTarget;
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		UnityEngine_CoreModule::UnityEngine::GameObject* protectObject;
		UnityEngine_CoreModule::UnityEngine::Renderer* protectRenderer;
		UnityEngine_CoreModule::UnityEngine::GameObject* BodyRoot;
		UnityEngine_UI::UnityEngine::UI::Image* healthImage;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* upperBodyChain;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* AnimalGO;
		IL2CPP::Array<UnityEngine_AnimationModule::UnityEngine::Animator*>* AnimalAnim;
		int32_t currentAnimal;
		UnityEngine_AnimationModule::UnityEngine::Animator* anim;
		float sliderval;
		float sliderval_rotation_y;
		bool crouch;
		Assembly_CSharp::BotEquipmentContainer* MyData;
		bool isProtected;
		float protectTimer;
		int32_t myTeam;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* TeamColors;
		float xval;
		float xval_lerp;
		struct StaticFields
		{
			int32_t Reload_state;
			int32_t Draw_state;
			int32_t Shot_state;
			int32_t JeepGunner_state;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnEnable();
		void Start();
		mscorlib::System::Collections::IEnumerator* layerupdate();
		void FixedUpdate();
		void LateUpdate();
		void SetHealth(float _h);
		void SetSpeed(float fval);
		void SetAnimal(int32_t _i);
		void SetJetpackState(bool _active);
		void SetWeaponClass(int32_t _t);
		void SetReload();
		void SetDraw();
		void SetShot();
		void SetCrouch(bool bval);
		void SetJeepGunner(bool bval);
		void SetRotation(float x);
		void SetProtectTimer(int32_t _team);
		void _ctor();
		static void _cctor();
	};
}

