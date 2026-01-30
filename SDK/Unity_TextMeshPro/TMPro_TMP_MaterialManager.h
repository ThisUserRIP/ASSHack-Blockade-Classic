#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_MaterialManager_MaskingMaterial; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Unity_TextMeshPro::TMPro { struct TMP_MaterialManager_FallbackMaterial; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::UI { struct MaskableGraphic; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_MaterialManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_MaterialManager_MaskingMaterial>* m_materialList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int64, Unity_TextMeshPro::TMPro::TMP_MaterialManager_FallbackMaterial>* m_fallbackMaterials;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int64>* m_fallbackMaterialLookup;
			mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_MaterialManager_FallbackMaterial>* m_fallbackCleanupList;
			bool isFallbackListDirty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static void OnPreRender();
		static UnityEngine_CoreModule::UnityEngine::Material* GetStencilMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial, int32_t stencilID);
		static void ReleaseStencilMaterial(UnityEngine_CoreModule::UnityEngine::Material* stencilMaterial);
		static UnityEngine_CoreModule::UnityEngine::Material* GetBaseMaterial(UnityEngine_CoreModule::UnityEngine::Material* stencilMaterial);
		static UnityEngine_CoreModule::UnityEngine::Material* SetStencil(UnityEngine_CoreModule::UnityEngine::Material* material, int32_t stencilID);
		static void AddMaskingMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial, UnityEngine_CoreModule::UnityEngine::Material* stencilMaterial, int32_t stencilID);
		static void RemoveStencilMaterial(UnityEngine_CoreModule::UnityEngine::Material* stencilMaterial);
		static void ReleaseBaseMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial);
		static void ClearMaterials();
		static int32_t GetStencilID(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static UnityEngine_CoreModule::UnityEngine::Material* GetMaterialForRendering(UnityEngine_UI::UnityEngine::UI::MaskableGraphic* graphic, UnityEngine_CoreModule::UnityEngine::Material* baseMaterial);
		static UnityEngine_CoreModule::UnityEngine::Transform* FindRootSortOverrideCanvas(UnityEngine_CoreModule::UnityEngine::Transform* start);
		static UnityEngine_CoreModule::UnityEngine::Material* GetFallbackMaterial(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, UnityEngine_CoreModule::UnityEngine::Material* sourceMaterial, int32_t atlasIndex);
		static UnityEngine_CoreModule::UnityEngine::Material* GetFallbackMaterial(UnityEngine_CoreModule::UnityEngine::Material* sourceMaterial, UnityEngine_CoreModule::UnityEngine::Material* targetMaterial);
		static void AddFallbackMaterialReference(UnityEngine_CoreModule::UnityEngine::Material* targetMaterial);
		static void RemoveFallbackMaterialReference(UnityEngine_CoreModule::UnityEngine::Material* targetMaterial);
		static void CleanupFallbackMaterials();
		static void ReleaseFallbackMaterial(UnityEngine_CoreModule::UnityEngine::Material* fallbackMaterial);
		static void CopyMaterialPresetProperties(UnityEngine_CoreModule::UnityEngine::Material* source, UnityEngine_CoreModule::UnityEngine::Material* destination);
	};
}

