#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "DigitalRuby_ThunderAndLightning_CameraMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltQualitySetting.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_BlendMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltDependencies; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningThreadState; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Camera* Camera;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode CameraMode;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode calculatedCameraMode;
		bool UseWorldSpace;
		bool CompensateForParentTransform;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting QualitySetting;
		bool MultiThreaded;
		float LevelOfDetailDistance;
		bool UseGameTime;
		mscorlib::System::String* SortLayerName;
		int32_t SortOrderInLayer;
		float SoftParticlesFactor;
		int32_t RenderQueue;
		UnityEngine_CoreModule::UnityEngine::Material* LightningMaterialMesh;
		UnityEngine_CoreModule::UnityEngine::Material* LightningMaterialMeshNoGlow;
		UnityEngine_CoreModule::UnityEngine::Texture2D* LightningTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* LightningGlowTexture;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* LightningOriginParticleSystem;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* LightningDestinationParticleSystem;
		UnityEngine_CoreModule::UnityEngine::Color LightningTintColor;
		UnityEngine_CoreModule::UnityEngine::Color GlowTintColor;
		UnityEngine_CoreModule::UnityEngine::Color MainTrunkTintColor;
		UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode SourceBlendMode;
		UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode DestinationBlendMode;
		float JitterMultiplier;
		float Turbulence;
		UnityEngine_CoreModule::UnityEngine::Vector3 TurbulenceVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector4 IntensityFlicker;
		UnityEngine_CoreModule::UnityEngine::Texture2D* IntensityFlickerTexture;
		mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* _LightningStartedCallback_k__BackingField;
		mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* _LightningEndedCallback_k__BackingField;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* _LightAddedCallback_k__BackingField;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* _LightRemovedCallback_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Material* _lightningMaterialMeshInternal_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Material* _lightningMaterialMeshNoGlowInternal_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Texture2D* lastLightningTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* lastLightningGlowTexture;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt>* activeBolts;
		IL2CPP::Array<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters*>* oneParameterArray;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt>* lightningBoltCache;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies>* dependenciesCache;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningThreadState* threadState;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector4 intensityFlickerDefault;
			UnityEngine_CoreModule::UnityEngine::Vector4 _TimeVectorSinceStart_k__BackingField;
			float _TimeSinceStart_k__BackingField;
			float _DeltaTime_k__BackingField;
			float TimeScale;
			bool needsTimeUpdate;
			int32_t shaderId_MainTex;
			int32_t shaderId_TintColor;
			int32_t shaderId_JitterMultiplier;
			int32_t shaderId_Turbulence;
			int32_t shaderId_TurbulenceVelocity;
			int32_t shaderId_SrcBlendMode;
			int32_t shaderId_DstBlendMode;
			int32_t shaderId_InvFade;
			int32_t shaderId_LightningTime;
			int32_t shaderId_IntensityFlicker;
			int32_t shaderId_IntensityFlickerTexture;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* get_LightningStartedCallback();
		void set_LightningStartedCallback(mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* value);
		mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* get_LightningEndedCallback();
		void set_LightningEndedCallback(mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* value);
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* get_LightAddedCallback();
		void set_LightAddedCallback(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* value);
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* get_LightRemovedCallback();
		void set_LightRemovedCallback(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* value);
		bool get_HasActiveBolts();
		static UnityEngine_CoreModule::UnityEngine::Vector4 get_TimeVectorSinceStart();
		static void set_TimeVectorSinceStart(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		static float get_TimeSinceStart();
		static void set_TimeSinceStart(float value);
		static float get_DeltaTime();
		static void set_DeltaTime(float value);
		void CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p);
		void CreateLightningBolts(mscorlib::System::Collections::Generic::ICollection_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* parameters);
		void Awake();
		void Start();
		void Update();
		void LateUpdate();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* OnCreateParameters();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* CreateParameters();
		void PopulateParameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		UnityEngine_CoreModule::UnityEngine::Material* get_lightningMaterialMeshInternal();
		void set_lightningMaterialMeshInternal(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_lightningMaterialMeshNoGlowInternal();
		void set_lightningMaterialMeshNoGlowInternal(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutineWrapper(mscorlib::System::Collections::IEnumerator* routine);
		void OnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene arg0, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode arg1);
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* CreateLightningBoltDependencies(mscorlib::System::Collections::Generic::ICollection_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* parameters);
		void ReturnLightningDependenciesToCache(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* d);
		void OnLightAdded(UnityEngine_CoreModule::UnityEngine::Light* l);
		void OnLightRemoved(UnityEngine_CoreModule::UnityEngine::Light* l);
		void AddActiveBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt);
		void UpdateShaderIds();
		void UpdateMaterialsForLastTexture();
		void UpdateTexture();
		void SetMaterialPerspective();
		void SetMaterialOrthographicXY();
		void SetMaterialOrthographicXZ();
		void SetupMaterialCamera();
		void EnableKeyword(mscorlib::System::String* keyword, bool enable, UnityEngine_CoreModule::UnityEngine::Material* m);
		void UpdateShaderParameters();
		void CheckCompensateForParentTransform();
		void UpdateCamera();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* GetOrCreateLightningBolt();
		void UpdateActiveBolts();
		void OnApplicationQuit();
		void Cleanup();
		void OnDestroy();
		void OnDisable();
		void _ctor();
		static void _cctor();
	};
}

