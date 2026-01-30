#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "DigitalRuby_ThunderAndLightning_CameraMode.h"
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltDependencies; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltSegmentGroup; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt_LineRendererMesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltQualitySetting.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningLightParameters; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBolt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _MinimumDelay_k__BackingField;
		bool _HasGlow_k__BackingField;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode _CameraMode_k__BackingField;
		mscorlib::System::DateTime startTimeOffset;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* dependencies;
		float elapsedTime;
		float lifeTime;
		float maxLifeTime;
		bool hasLight;
		float timeSinceLevelLoad;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup>* segmentGroups;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup>* segmentGroupsWithLight;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh>* activeLineRenderers;
		struct StaticFields
		{
			int32_t MaximumLightCount;
			int32_t MaximumLightsPerBatch;
			int32_t lightCount;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh>* lineRendererCache;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup>* groupCache;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Light>* lightCache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float get_MinimumDelay();
		void set_MinimumDelay(float value);
		bool get_HasGlow();
		void set_HasGlow(bool value);
		bool get_IsActive();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode get_CameraMode();
		void set_CameraMode(Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode value);
		void _ctor();
		void SetupLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* dependencies);
		bool Update();
		void Cleanup();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* AddGroup();
		static void ClearCache();
		void CleanupLight(UnityEngine_CoreModule::UnityEngine::Light* l);
		void EnableLineRenderer(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh* lineRenderer, int32_t tag);
		mscorlib::System::Collections::IEnumerator* EnableLastRendererCoRoutine();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh* GetOrCreateLineRenderer();
		void RenderGroup(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* group, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p);
		static mscorlib::System::Collections::IEnumerator* NotifyBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* dependencies, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end);
		void ProcessParameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p, Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats delay, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* depends);
		void ProcessAllLightningParameters();
		void EnableCurrentLineRendererFromThread(bool inDestroy);
		void EnableCurrentLineRenderer();
		void RenderParticleSystems(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, float trunkWidth, float lifeTime, float delaySeconds);
		UnityEngine_CoreModule::UnityEngine::Transform* RenderLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting quality, int32_t generations, int32_t startGroupIndex, int32_t endGroupIndex, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		void CreateLightsForGroup(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* group, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting quality, int32_t maxLights);
		bool AddLightToGroup(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* group, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp, int32_t segmentIndex, int32_t nthLight, int32_t nthShadows, int32_t& maxLights, int32_t& nthShadowCounter);
		UnityEngine_CoreModule::UnityEngine::Light* GetOrCreateLight(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp);
		void UpdateLight(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp, mscorlib::System::Collections::Generic::IEnumerable_1<UnityEngine_CoreModule::UnityEngine::Light>* lights, float delay, float peakStart, float peakEnd, float lifeTime);
		void UpdateLights();
		mscorlib::System::Collections::IEnumerator* GenerateParticleCoRoutine(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* p, UnityEngine_CoreModule::UnityEngine::Vector3 pos, float delay);
		void CheckForGlow(mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* parameters);
		static void _cctor();
	};
}

