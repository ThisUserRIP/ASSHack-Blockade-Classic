#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct ThunderAndLightningScript; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltScript; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "DigitalRuby_ThunderAndLightning_DemoScript_RotationAxes.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct DemoScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript* ThunderAndLightningScript;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript* LightningBoltScript;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* CloudParticleSystem;
		float MoveSpeed;
		bool EnableMouseLook;
		float deltaTime;
		float fpsIncrement;
		mscorlib::System::String* fpsText;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::DemoScript_RotationAxes axes;
		float sensitivityX;
		float sensitivityY;
		float minimumX;
		float maximumX;
		float minimumY;
		float maximumY;
		float rotationX;
		float rotationY;
		UnityEngine_CoreModule::UnityEngine::Quaternion originalRotation;
		struct StaticFields
		{
			float fastCloudSpeed;
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void UpdateThunder();
		void UpdateMovement();
		void UpdateMouseLook();
		void UpdateQuality();
		void UpdateOther();
		void OnGUI();
		void Update();
		void Start();
		static float ClampAngle(float angle, float min, float max);
		static void ReloadCurrentScene();
		void _ctor();
		static void _cctor();
	};
}

