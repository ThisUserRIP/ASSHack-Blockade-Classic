#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Component.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
#include "UnityEngine_Rendering_ShadowCastingMode.h"
#include "UnityEngine_Rendering_LightProbeUsage.h"
#include "UnityEngine_Rendering_ReflectionProbeUsage.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityEngineInternal_LightmapType.h"
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Renderer : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void set_castShadows(bool value);
		UnityEngine_CoreModule::UnityEngine::Bounds get_bounds();
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* GetSharedMaterial();
		void SetMaterial(UnityEngine_CoreModule::UnityEngine::Material* m);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* GetMaterialArray();
		void SetMaterialArray(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* m);
		void Internal_SetPropertyBlock(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void Internal_GetPropertyBlock(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* dest);
		void SetPropertyBlock(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void GetPropertyBlock(UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		bool get_enabled();
		void set_enabled(bool value);
		void set_shadowCastingMode(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode value);
		bool get_receiveShadows();
		void set_receiveShadows(bool value);
		void set_lightProbeUsage(UnityEngine_CoreModule::UnityEngine::Rendering::LightProbeUsage value);
		void set_reflectionProbeUsage(UnityEngine_CoreModule::UnityEngine::Rendering::ReflectionProbeUsage value);
		mscorlib::System::String* get_sortingLayerName();
		void set_sortingLayerName(mscorlib::System::String* value);
		int32_t get_sortingLayerID();
		void set_sortingLayerID(int32_t value);
		int32_t get_sortingOrder();
		void set_sortingOrder(int32_t value);
		void set_staticBatchRootTransform(UnityEngine_CoreModule::UnityEngine::Transform* value);
		int32_t get_staticBatchIndex();
		void SetStaticBatchInfo(int32_t firstSubMesh, int32_t subMeshCount);
		int32_t GetLightmapIndex(UnityEngine_CoreModule::UnityEngineInternal::LightmapType lt);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetLightmapST(UnityEngine_CoreModule::UnityEngineInternal::LightmapType lt);
		int32_t get_lightmapIndex();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_lightmapScaleOffset();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_realtimeLightmapScaleOffset();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* GetSharedMaterialArray();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* get_materials();
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void set_material(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_sharedMaterial();
		void set_sharedMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* get_sharedMaterials();
		void set_sharedMaterials(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* value);
		void get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret);
		void GetLightmapST_Injected(UnityEngine_CoreModule::UnityEngineInternal::LightmapType lt, UnityEngine_CoreModule::UnityEngine::Vector4& ret);
	};
}

