#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Shooter.h"
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct vp_FPCamera; };
namespace Assembly_CSharp { struct vp_FPWeaponReloader; };
namespace Assembly_CSharp { struct Minigun; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimationClip; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_FPWeaponShooter : Assembly_CSharp::vp_Shooter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::WeaponSystem* m_WeaponSystem;
		Assembly_CSharp::vp_FPCamera* m_FPSCamera;
		Assembly_CSharp::vp_FPWeaponReloader* m_FPSWeaponReloader;
		Assembly_CSharp::Minigun* MG;
		float ProjectileTapFiringRate;
		float m_LastFireTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 MotionPositionRecoil;
		UnityEngine_CoreModule::UnityEngine::Vector3 MotionRotationRecoil;
		float MotionRotationRecoilDeadZone;
		float MotionPositionReset;
		float MotionRotationReset;
		float MotionPositionPause;
		float MotionRotationPause;
		float MotionDryFireRecoil;
		float MotionRecoilDelay;
		UnityEngine_AnimationModule::UnityEngine::AnimationClip* AnimationFire;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundDryFire;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ZoomTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ZoomTexture2;
		struct StaticFields
		{
			bool fpsguidraw;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void Start();
		void Update();
		void OnGUI();
		void TryFire();
		void Fire();
		void ApplyRecoil();
		void DryFire();
		void OnStop_Attack();
		void OnStart_Zoom();
		void OnStop_Zoom();
		void _ctor();
		static void _cctor();
	};
}

