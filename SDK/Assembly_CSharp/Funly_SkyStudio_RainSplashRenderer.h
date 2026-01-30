#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Funly_SkyStudio_BaseSpriteInstancedRenderer.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
namespace Assembly_CSharp::Funly::SkyStudio { struct RainSplashArtItem; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BaseSpriteItemData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct RainSplashRenderer : Assembly_CSharp::Funly::SkyStudio::BaseSpriteInstancedRenderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Camera* m_DepthCamera;
		IL2CPP::Array<float>* m_StartSplashYPositions;
		IL2CPP::Array<float>* m_DepthUs;
		IL2CPP::Array<float>* m_DepthVs;
		float m_SplashAreaStart;
		float m_SplashAreaLength;
		float m_SplashScale;
		float m_SplashScaleVarience;
		float m_SplashItensity;
		float m_SplashSurfaceOffset;
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* m_SkyProfile;
		float m_TimeOfDay;
		Assembly_CSharp::Funly::SkyStudio::RainSplashArtItem* m_Style;
		UnityEngine_CoreModule::UnityEngine::Bounds m_Bounds;
		void Start();
		UnityEngine_CoreModule::UnityEngine::Bounds CalculateMeshBounds();
		Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* CreateSpriteItemData();
		bool IsRenderingEnabled();
		int32_t GetNextSpawnCount();
		void CalculateSpriteTRS(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data, UnityEngine_CoreModule::UnityEngine::Vector3& spritePosition, UnityEngine_CoreModule::UnityEngine::Quaternion& spriteRotation, UnityEngine_CoreModule::UnityEngine::Vector3& spriteScale);
		void ConfigureSpriteItemData(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data);
		void PrepareDataArraysForRendering(int32_t instanceId, Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data);
		void PopulatePropertyBlockForRendering(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock& propertyBlock);
		void UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay, Assembly_CSharp::Funly::SkyStudio::RainSplashArtItem* style);
		void SyncDataFromSkyProfile();
		UnityEngine_CoreModule::UnityEngine::Vector3 CreateWorldSplashPoint();
		void _ctor();
	};
}

