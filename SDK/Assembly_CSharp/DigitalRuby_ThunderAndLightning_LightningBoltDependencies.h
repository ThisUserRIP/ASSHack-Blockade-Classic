#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "DigitalRuby_ThunderAndLightning_CameraMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningThreadState; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltDependencies : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* Parent;
		UnityEngine_CoreModule::UnityEngine::Material* LightningMaterialMesh;
		UnityEngine_CoreModule::UnityEngine::Material* LightningMaterialMeshNoGlow;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* OriginParticleSystem;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* DestParticleSystem;
		UnityEngine_CoreModule::UnityEngine::Vector3 CameraPos;
		bool CameraIsOrthographic;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode CameraMode;
		bool UseWorldSpace;
		float LevelOfDetailDistance;
		mscorlib::System::String* SortLayerName;
		int32_t SortOrderInLayer;
		mscorlib::System::Collections::Generic::ICollection_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* Parameters;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningThreadState* ThreadState;
		mscorlib::System::Func_2<mscorlib::System::Collections::IEnumerator, UnityEngine_CoreModule::UnityEngine::Coroutine>* StartCoroutine;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* LightAdded;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* LightRemoved;
		mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt>* AddActiveBolt;
		mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies>* ReturnToCache;
		mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* LightningBoltStarted;
		mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* LightningBoltEnded;
		void _ctor();
	};
}

