#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_ColorGradient; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_TextMeshPro::TMPro
{
	struct MaterialReferenceManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_CoreModule::UnityEngine::Material>* m_FontMaterialReferenceLookup;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_TextMeshPro::TMPro::TMP_FontAsset>* m_FontAssetReferenceLookup;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_TextMeshPro::TMPro::TMP_SpriteAsset>* m_SpriteAssetReferenceLookup;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_TextMeshPro::TMPro::TMP_ColorGradient>* m_ColorGradientReferenceLookup;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::MaterialReferenceManager* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_TextMeshPro::TMPro::MaterialReferenceManager* get_instance();
		static void AddFontAsset(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		void AddFontAssetInternal(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		static void AddSpriteAsset(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset);
		void AddSpriteAssetInternal(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset);
		static void AddSpriteAsset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset);
		void AddSpriteAssetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset);
		static void AddFontMaterial(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material* material);
		void AddFontMaterialInternal(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material* material);
		static void AddColorGradientPreset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient* spriteAsset);
		void AddColorGradientPreset_Internal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient* spriteAsset);
		bool Contains(Unity_TextMeshPro::TMPro::TMP_FontAsset* font);
		bool Contains(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* sprite);
		static bool TryGetFontAsset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_FontAsset& fontAsset);
		bool TryGetFontAssetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_FontAsset& fontAsset);
		static bool TryGetSpriteAsset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset& spriteAsset);
		bool TryGetSpriteAssetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset& spriteAsset);
		static bool TryGetColorGradientPreset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient& gradientPreset);
		bool TryGetColorGradientPresetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient& gradientPreset);
		static bool TryGetMaterial(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material& material);
		bool TryGetMaterialInternal(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material& material);
		void _ctor();
	};
}

