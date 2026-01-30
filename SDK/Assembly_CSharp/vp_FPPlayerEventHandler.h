#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_StateEventHandler.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { template <typename V> struct vp_Message_1; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { template <typename V> struct vp_Value_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp { struct vp_Activity; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { template <typename V> struct vp_Activity_1; };
namespace Assembly_CSharp { struct vp_Attempt; };
namespace Assembly_CSharp { template <typename V> struct vp_Attempt_1; };
namespace Assembly_CSharp { template <typename V, typename VResult> struct vp_Message_2; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp { struct vp_Message; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_FPPlayerEventHandler : Assembly_CSharp::vp_StateEventHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Message_1<mscorlib::System::Single>* HUDDamageFlash;
		Assembly_CSharp::vp_Message_1<mscorlib::System::String>* HUDText;
		Assembly_CSharp::vp_Value_1<UnityEngine_CoreModule::UnityEngine::Vector2>* InputMoveVector;
		Assembly_CSharp::vp_Value_1<mscorlib::System::Boolean>* AllowGameplayInput;
		Assembly_CSharp::vp_Value_1<mscorlib::System::Single>* Health;
		Assembly_CSharp::vp_Value_1<UnityEngine_CoreModule::UnityEngine::Vector3>* Position;
		Assembly_CSharp::vp_Value_1<UnityEngine_CoreModule::UnityEngine::Vector2>* Rotation;
		Assembly_CSharp::vp_Value_1<UnityEngine_CoreModule::UnityEngine::Vector3>* Forward;
		Assembly_CSharp::vp_Activity* Dead;
		Assembly_CSharp::vp_Activity* Walk;
		Assembly_CSharp::vp_Activity* Jump;
		Assembly_CSharp::vp_Activity* Jetpack;
		Assembly_CSharp::vp_Activity* Crouch;
		Assembly_CSharp::vp_Activity* Animal;
		Assembly_CSharp::vp_Activity* Zoom;
		Assembly_CSharp::vp_Activity* Attack;
		Assembly_CSharp::vp_Activity* Reload;
		Assembly_CSharp::vp_Activity_1<mscorlib::System::Int32>* SetWeapon;
		Assembly_CSharp::vp_Activity_1<UnityEngine_CoreModule::UnityEngine::Vector3>* Earthquake;
		Assembly_CSharp::vp_Attempt* SetPrevWeapon;
		Assembly_CSharp::vp_Attempt* SetNextWeapon;
		Assembly_CSharp::vp_Attempt_1<mscorlib::System::String>* SetWeaponByName;
		Assembly_CSharp::vp_Value_1<mscorlib::System::Int32>* CurrentWeaponID;
		Assembly_CSharp::vp_Value_1<mscorlib::System::String>* CurrentWeaponName;
		Assembly_CSharp::vp_Value_1<mscorlib::System::Boolean>* CurrentWeaponWielded;
		Assembly_CSharp::vp_Value_1<mscorlib::System::Single>* CurrentWeaponReloadDuration;
		Assembly_CSharp::vp_Value_1<mscorlib::System::String>* CurrentWeaponClipType;
		Assembly_CSharp::vp_Message_2<mscorlib::System::String, mscorlib::System::Int32>* GetItemCount;
		Assembly_CSharp::vp_Attempt_1<mscorlib::System::Object>* AddItem;
		Assembly_CSharp::vp_Attempt_1<mscorlib::System::Object>* RemoveItem;
		Assembly_CSharp::vp_Attempt_1<mscorlib::System::Object>* AddAmmo;
		Assembly_CSharp::vp_Attempt* DepleteAmmo;
		Assembly_CSharp::vp_Attempt* RemoveClip;
		Assembly_CSharp::vp_Message_1<mscorlib::System::Single>* FallImpact;
		Assembly_CSharp::vp_Message_1<mscorlib::System::Single>* HeadImpact;
		Assembly_CSharp::vp_Message_1<UnityEngine_CoreModule::UnityEngine::Vector3>* ForceImpact;
		Assembly_CSharp::vp_Message_1<mscorlib::System::Single>* GroundStomp;
		Assembly_CSharp::vp_Message_1<mscorlib::System::Single>* BombShake;
		Assembly_CSharp::vp_Value_1<UnityEngine_CoreModule::UnityEngine::Vector3>* EarthQuakeForce;
		Assembly_CSharp::vp_Message* Stop;
		Assembly_CSharp::vp_Value_1<UnityEngine_CoreModule::UnityEngine::Transform>* Platform;
		Assembly_CSharp::vp_Value_1<mscorlib::System::Boolean>* Pause;
		void Awake();
		void _ctor();
	};
}

