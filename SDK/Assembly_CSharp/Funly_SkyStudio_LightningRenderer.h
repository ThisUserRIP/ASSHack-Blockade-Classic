#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Funly_SkyStudio_BaseSpriteInstancedRenderer.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct LightningSpawnArea; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
namespace Assembly_CSharp::Funly::SkyStudio { struct LightningArtItem; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BaseSpriteItemData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct LightningRenderer : Assembly_CSharp::Funly::SkyStudio::BaseSpriteInstancedRenderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_LightningProbability;
		float m_NextSpawnTime;
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* m_SkyProfile;
		Assembly_CSharp::Funly::SkyStudio::LightningArtItem* m_Style;
		float m_TimeOfDay;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_AudioSource;
		float m_LightningIntensity;
		float m_ThunderSoundDelay;
		float m_SpawnCoolDown;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Funly::SkyStudio::LightningSpawnArea>* m_SpawnAreas;
			float k_ProbabiltyCheckInterval;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		UnityEngine_CoreModule::UnityEngine::Bounds CalculateMeshBounds();
		Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* CreateSpriteItemData();
		bool IsRenderingEnabled();
		void CalculateSpriteTRS(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data, UnityEngine_CoreModule::UnityEngine::Vector3& spritePosition, UnityEngine_CoreModule::UnityEngine::Quaternion& spriteRotation, UnityEngine_CoreModule::UnityEngine::Vector3& spriteScale);
		void ConfigureSpriteItemData(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data);
		void PrepareDataArraysForRendering(int32_t instanceId, Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data);
		void PopulatePropertyBlockForRendering(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock& propertyBlock);
		int32_t GetNextSpawnCount();
		void UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay, Assembly_CSharp::Funly::SkyStudio::LightningArtItem* artItem);
		void SyncDataFromSkyProfile();
		Assembly_CSharp::Funly::SkyStudio::LightningSpawnArea* GetRandomLightningSpawnArea();
		void PlayThunderBoltSound();
		static void AddSpawnArea(Assembly_CSharp::Funly::SkyStudio::LightningSpawnArea* area);
		static void RemoveSpawnArea(Assembly_CSharp::Funly::SkyStudio::LightningSpawnArea* area);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetRandomWorldPositionInsideSpawnArea(Assembly_CSharp::Funly::SkyStudio::LightningSpawnArea* area);
		float CalculateLightningBoltScaleForArea(Assembly_CSharp::Funly::SkyStudio::LightningSpawnArea* area);
		void _ctor();
		static void _cctor();
	};
}

