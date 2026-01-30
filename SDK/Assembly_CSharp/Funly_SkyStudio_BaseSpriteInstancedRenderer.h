#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BaseSpriteItemData; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpriteSheetData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct BaseSpriteInstancedRenderer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _maxSprites_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Mesh* modelMesh;
		UnityEngine_CoreModule::UnityEngine::Material* renderMaterial;
		System::System::Collections::Generic::Queue_1<Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData>* m_Available;
		System_Core::System::Collections::Generic::HashSet_1<Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData>* m_Active;
		UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* m_PropertyBlock;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* m_ModelMatrices;
		IL2CPP::Array<float>* m_StartTimes;
		IL2CPP::Array<float>* m_EndTimes;
		Assembly_CSharp::Funly::SkyStudio::SpriteSheetData* m_SpriteSheetLayout;
		UnityEngine_CoreModule::UnityEngine::Texture* m_SpriteTexture;
		UnityEngine_CoreModule::UnityEngine::Color m_TintColor;
		UnityEngine_CoreModule::UnityEngine::Camera* _m_ViewerCamera_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_DefaltModelMesh;
		struct StaticFields
		{
			int32_t kArrayMaxSprites;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_maxSprites();
		void set_maxSprites(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Camera* get_m_ViewerCamera();
		void set_m_ViewerCamera(UnityEngine_CoreModule::UnityEngine::Camera* value);
		void Start();
		UnityEngine_CoreModule::UnityEngine::Bounds CalculateMeshBounds();
		Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* CreateSpriteItemData();
		bool IsRenderingEnabled();
		int32_t GetNextSpawnCount();
		void CalculateSpriteTRS(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data, UnityEngine_CoreModule::UnityEngine::Vector3& spritePosition, UnityEngine_CoreModule::UnityEngine::Quaternion& spriteRotation, UnityEngine_CoreModule::UnityEngine::Vector3& spriteScale);
		void ConfigureSpriteItemData(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data);
		void PrepareDataArraysForRendering(int32_t instanceId, Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* data);
		void PopulatePropertyBlockForRendering(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock& propertyBlock);
		Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* DequeueNextSpriteItemData();
		void ReturnSpriteItemData(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData* splash);
		void LateUpdate();
		void GenerateNewSprites();
		void AdvanceAllSprites();
		void RenderAllSprites();
		UnityEngine_CoreModule::UnityEngine::Mesh* GetMesh();
		UnityEngine_CoreModule::UnityEngine::Mesh* GenerateMesh();
		void _ctor();
	};
}

